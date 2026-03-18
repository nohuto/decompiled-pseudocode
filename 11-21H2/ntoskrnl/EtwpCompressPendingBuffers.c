/*
 * XREFs of EtwpCompressPendingBuffers @ 0x140634D24
 * Callers:
 *     EtwpBufferingModeCompressionFlush @ 0x140634830 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140634F90 (EtwpCompressionProc.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwpCompressBuffer @ 0x14063499C (EtwpCompressBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140635144 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14063566C (EtwpRotateCompressionTargetIfNeeded.c)
 *     EtwpCompleteBuffer @ 0x140798BE4 (EtwpCompleteBuffer.c)
 */

__int64 __fastcall EtwpCompressPendingBuffers(__int64 a1)
{
  ULONG_PTR v1; // rbp
  LARGE_INTEGER PerformanceCounter; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rsi
  LARGE_INTEGER v6; // rax
  __int64 v7; // rcx
  LONGLONG v8; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v12; // edx
  __int64 result; // rax
  int v14; // r9d

  v1 = a1 + 1144;
  ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
  EtwpRotateCompressionTargetIfNeeded(a1);
  while ( 1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v4 = (_DWORD *)EtwpDequeueBufferPendingCompression(a1);
    v5 = v4;
    if ( !v4 )
      break;
    if ( (int)v4[3] > 0 || v4[1] > 0x48u && v4[2] > 0x48u )
    {
      if ( (int)EtwpCompressBuffer(a1, (__int64)v4) < 0 )
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 252));
      EtwpCompleteBuffer(a1, v5, 0LL);
      v6 = KeQueryPerformanceCounter(0LL);
      v7 = *(_QWORD *)(a1 + 1272);
      v8 = v6.QuadPart - PerformanceCounter.QuadPart;
      if ( v7 )
        *(_QWORD *)(a1 + 1272) = (v8 + 4 * v7) / 5;
      else
        *(_QWORD *)(a1 + 1272) = v8;
    }
    else
    {
      EtwpCompleteBuffer(a1, v4, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  CurrentThread = KeGetCurrentThread();
  if ( v1 - qword_140C50630 >= 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v12 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v1 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v12;
    p_Process += 96LL;
    if ( v12 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_23:
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, SessionId, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v14 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  result = *(unsigned __int8 *)(p_Process + 16);
  CurrentThread->AbEntrySummary |= 1 << result;
  _enable();
  if ( v14 )
    return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v1, v14);
  return result;
}
