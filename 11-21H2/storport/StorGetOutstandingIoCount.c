/*
 * XREFs of StorGetOutstandingIoCount @ 0x1C0059304
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0008220 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x1C0035FB0 (RaidAdapterReclaimIoResourceTimerDpcRoutine.c)
 *     RaidAdapterResetBus @ 0x1C0036654 (RaidAdapterResetBus.c)
 *     StorSetAllIoGatewayBusy @ 0x1C00594F0 (StorSetAllIoGatewayBusy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetOutstandingIoCount(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int i; // r10d

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 840); ++i )
    v1 += _InterlockedCompareExchange((volatile signed __int32 *)(320LL * i + *(_QWORD *)(a1 + 832) + 192), 0, 0);
  return v1;
}
