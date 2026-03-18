/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140A8ACE8
 * Callers:
 *     IoAllocateIrpEx @ 0x14022CFA0 (IoAllocateIrpEx.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084EA70 (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140A8D4A4 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140A910FC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140A9466C (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x140A9D128 (ViWdBeforeCallDriver.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140A8ABF8 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
