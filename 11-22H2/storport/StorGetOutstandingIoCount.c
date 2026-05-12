/*
 * XREFs of StorGetOutstandingIoCount @ 0x1C000F488
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     RaidpAdapterDpcRoutine @ 0x1C000F280 (RaidpAdapterDpcRoutine.c)
 *     RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x1C0037210 (RaidAdapterReclaimIoResourceTimerDpcRoutine.c)
 *     RaidAdapterResetBus @ 0x1C00379D0 (RaidAdapterResetBus.c)
 *     StorSetAllIoGatewayBusy @ 0x1C006647C (StorSetAllIoGatewayBusy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetOutstandingIoCount(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int i; // r10d

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 904); ++i )
    v1 += _InterlockedCompareExchange((volatile signed __int32 *)(320LL * i + *(_QWORD *)(a1 + 896) + 192), 0, 0);
  return v1;
}
