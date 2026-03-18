/*
 * XREFs of EtwpSendDbgId @ 0x1409EBE84
 * Callers:
 *     EtwpSendTraceEvent @ 0x1403A2088 (EtwpSendTraceEvent.c)
 *     EtwpProviderArrivalCallback @ 0x14077DC5C (EtwpProviderArrivalCallback.c)
 *     EtwpUpdateTrace @ 0x1407F7F7C (EtwpUpdateTrace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD960 (ExfTryToWakePushLock.c)
 *     EtwpAddDebugInfoEvents @ 0x1407F616C (EtwpAddDebugInfoEvents.c)
 *     EtwpGetMaxTrackingEventBufferSize @ 0x1407F65B8 (EtwpGetMaxTrackingEventBufferSize.c)
 *     EtwpInitializeProviderInfoBuffer @ 0x1407F662C (EtwpInitializeProviderInfoBuffer.c)
 *     EtwpSendBufferToDebugger @ 0x1409EBD5C (EtwpSendBufferToDebugger.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall EtwpSendDbgId(__int64 a1)
{
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  volatile signed __int64 *v4; // rsi
  unsigned int MaxTrackingEventBufferSize; // eax
  int v6; // ebp
  __int128 *v7; // rdi
  __int64 Pool2; // rax

  if ( (*(_DWORD *)(a1 + 824) & 0x800) != 0 )
  {
    _m_prefetchw((const void *)(a1 + 824));
    v2 = *(_DWORD *)(a1 + 824);
    do
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 824), v2 & 0xFFFFF7FF, v2);
    }
    while ( v3 != v2 );
    if ( (v2 & 0x800) != 0 )
    {
      v4 = (volatile signed __int64 *)(a1 + 688);
      ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
      MaxTrackingEventBufferSize = EtwpGetMaxTrackingEventBufferSize(a1);
      v6 = MaxTrackingEventBufferSize;
      if ( MaxTrackingEventBufferSize )
      {
        Pool2 = ExAllocatePool2(64LL, MaxTrackingEventBufferSize, 1651995717LL);
        v7 = (__int128 *)Pool2;
        if ( Pool2 )
        {
          EtwpInitializeProviderInfoBuffer(a1, Pool2, v6);
          EtwpAddDebugInfoEvents(a1, (__int64)v7, v6, 0LL, 0);
        }
      }
      else
      {
        v7 = 0LL;
      }
      if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v4);
      KeAbPostRelease((ULONG_PTR)v4);
      if ( v7 )
      {
        EtwpSendBufferToDebugger(v7);
        ExFreePoolWithTag(v7, 0);
      }
    }
  }
}
