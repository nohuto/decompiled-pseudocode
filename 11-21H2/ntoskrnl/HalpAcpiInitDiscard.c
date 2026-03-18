/*
 * XREFs of HalpAcpiInitDiscard @ 0x140AF9204
 * Callers:
 *     HalpAcpiInitSystem @ 0x140A554B0 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140AF968C (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140C02138 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140C01EF0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
