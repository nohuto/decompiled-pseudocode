/*
 * XREFs of KiInswapAndReadyThread @ 0x14034DBDC
 * Callers:
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x1402520F0 (KiAcquireKobjectLockSafe.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiRequestProcessInSwap @ 0x14034DDF4 (KiRequestProcessInSwap.c)
 */

int __fastcall KiInswapAndReadyThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  volatile signed __int32 *v5; // rdi
  signed __int64 *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  _QWORD *v9; // rbx
  char v10; // si
  _QWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20000) == 0 )
  {
    v5 = *(volatile signed __int32 **)(a2 + 184);
    KiAcquireKobjectLockSafe(v5);
    if ( (v5[210] & 7) == 0 )
    {
      _InterlockedExchangeAdd(v5 + 210, 8u);
      _InterlockedAnd(v5, 0xFFFFFF7F);
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
      *(_BYTE *)(a2 + 388) = 6;
      v6 = (signed __int64 *)(a2 + 216);
      _m_prefetchw(&KiStackInSwapListHead);
      v7 = KiStackInSwapListHead;
      do
      {
        *v6 = v7;
        v8 = v7;
        v7 = _InterlockedCompareExchange64(&KiStackInSwapListHead, (signed __int64)v6, v7);
      }
      while ( v7 != v8 );
      if ( !v7 )
        LODWORD(v7) = KeSetEvent(&KiSwapEvent, 10, 0);
      return v7;
    }
LABEL_17:
    LODWORD(v7) = KiRequestProcessInSwap(a2, v5);
    return v7;
  }
  if ( (v2 & 0x100000) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0x14u);
    if ( (_InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 184) + 840LL), 8u) & 7) != 0 )
    {
      v5 = *(volatile signed __int32 **)(a2 + 184);
      KiAcquireKobjectLockSafe(v5);
      if ( (v5[210] & 7) != 0 )
        goto LABEL_17;
      _InterlockedAnd(v5, 0xFFFFFF7F);
    }
  }
  v9 = (_QWORD *)(a2 + 216);
  v10 = 0;
  *v9 = 0LL;
  v12 = 0LL;
  do
  {
    KiDeferredReadySingleThread(a1, (unsigned __int64)(v9 - 27), (__int64)&v12);
    v9 = v12;
    ++v10;
    if ( v12 )
      v12 = (_QWORD *)*v12;
    if ( (v10 & 0xF) == 0 )
      KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
  }
  while ( v9 );
  LODWORD(v7) = KiFlushSoftwareInterruptBatch((unsigned __int8 *)(a1 + 12760));
  return v7;
}
