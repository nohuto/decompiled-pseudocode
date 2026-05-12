/*
 * XREFs of RaidAdapterEnableIoResourceAutoReclaim @ 0x1C0035700
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C00346D8 (RaidAdapterCompleteInitialization.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C004E610 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterEnableIoResourceAutoReclaim(__int64 a1, char a2)
{
  struct _KTIMER *v2; // rdi
  struct _KDPC *Dpc; // rsi

  v2 = (struct _KTIMER *)(a1 + 5704);
  Dpc = (struct _KDPC *)(a1 + 5768);
  if ( !a2 )
  {
    KeInitializeTimer(v2);
    KeInitializeDpc(Dpc, RaidAdapterReclaimIoResourceTimerDpcRoutine, *(PVOID *)(a1 + 8));
  }
  return KeSetCoalescableTimer(v2, (LARGE_INTEGER)-18000000000LL, 0x1B7740u, 0xEA60u, Dpc);
}
