/*
 * XREFs of PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x1405C9D00
 * Callers:
 *     <none>
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PopPdcCompleteResiliencyCallback @ 0x140996FB8 (PopPdcCompleteResiliencyCallback.c)
 */

__int64 __fastcall PopDirectedDripsNotifyResiliencyCompletionWorker(__int64 a1)
{
  ULONG_PTR v1; // rdi
  unsigned int v3; // ebp
  struct _KTHREAD *CurrentThread; // rsi
  __int64 SessionId; // rcx
  __int64 p_Process; // rbx
  unsigned int v7; // edx
  __int64 result; // rax
  int v9; // r8d

  v1 = a1 + 136;
  v3 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  if ( *(_BYTE *)(a1 + 152) )
  {
    v3 = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 148) = 0;
    *(_BYTE *)(a1 + 152) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 192), 0);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  CurrentThread = KeGetCurrentThread();
  if ( v1 - qword_140C50630 >= 0x8000000000LL )
    SessionId = 0xFFFFFFFFLL;
  else
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v7 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v1 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != (_DWORD)SessionId )
  {
    ++v7;
    p_Process += 96LL;
    if ( v7 >= 6 )
      goto LABEL_14;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( !p_Process )
  {
LABEL_14:
    result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v1, (unsigned int)SessionId, 0LL);
    _enable();
    goto LABEL_22;
  }
  if ( *(__int64 *)p_Process < 0 )
  {
    *(_BYTE *)p_Process |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(p_Process);
    _disable();
  }
  v9 = *(_DWORD *)(p_Process + 88);
  *(_DWORD *)(p_Process + 88) = 0;
  *(_BYTE *)(p_Process + 17) = 0;
  *(_QWORD *)p_Process = 0LL;
  result = *(unsigned __int8 *)(p_Process + 16);
  CurrentThread->AbEntrySummary |= 1 << result;
  _enable();
  if ( v9 )
    result = KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v1, v9);
LABEL_22:
  if ( v3 )
    return PopPdcCompleteResiliencyCallback(SessionId, v3);
  return result;
}
