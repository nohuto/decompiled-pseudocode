/*
 * XREFs of HalpAcpiInitDiscard @ 0x140B653A4
 * Callers:
 *     HalpAcpiInitSystem @ 0x140A90A80 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140B65578 (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140C02148 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140C01CB0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
