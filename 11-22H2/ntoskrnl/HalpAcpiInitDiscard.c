/*
 * XREFs of HalpAcpiInitDiscard @ 0x140B66744
 * Callers:
 *     HalpAcpiInitSystem @ 0x140A90C00 (HalpAcpiInitSystem.c)
 * Callees:
 *     HalpSetupAcpiPhase0 @ 0x140B66918 (HalpSetupAcpiPhase0.c)
 */

__int64 HalpAcpiInitDiscard()
{
  off_140C02148 = (__int64 (__fastcall *)())HaliInitPowerManagement;
  off_140C01CB0[0] = HalAcpiGetRsdpDispatch;
  return HalpSetupAcpiPhase0();
}
