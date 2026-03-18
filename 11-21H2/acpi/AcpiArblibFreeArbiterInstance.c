/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C0049B1C
 * Callers:
 *     ACPIBuildPdo @ 0x1C0005FA8 (ACPIBuildPdo.c)
 *     AcpiArblibInitializeArbiter @ 0x1C0049B58 (AcpiArblibInitializeArbiter.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C004CC70 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIInitResetDeviceExtension @ 0x1C0056F0C (ACPIInitResetDeviceExtension.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C00B7724 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
