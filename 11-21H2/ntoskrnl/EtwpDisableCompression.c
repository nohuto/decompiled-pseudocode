/*
 * XREFs of EtwpDisableCompression @ 0x1406352B0
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1402E18F8 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140635144 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x1406355B0 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v6; // edx
  int v7; // r9d

  if ( *(_DWORD *)(a1 + 1180) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1168), 0)
    && !*(_DWORD *)(a1 + 1136)
    && ObGetCurrentIrql() < 2u )
  {
    v2 = a1 + 1144;
    ExAcquirePushLockExclusiveEx(a1 + 1144, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1144);
    CurrentThread = KeGetCurrentThread();
    if ( v2 - qword_140C50630 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    _disable();
    p_Process = (__int64)&CurrentThread[1].Process;
    v6 = 0;
    while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != (v2 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(p_Process + 18)
         || (*(_DWORD *)p_Process & 1) != 0
         || *(_DWORD *)(p_Process + 8) != SessionId )
    {
      ++v6;
      p_Process += 96LL;
      if ( v6 >= 6 )
        goto LABEL_16;
    }
    *(_BYTE *)(p_Process + 18) = 0;
    if ( !p_Process )
    {
LABEL_16:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
      _enable();
      return;
    }
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v7 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v7 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, v2, v7);
  }
}
