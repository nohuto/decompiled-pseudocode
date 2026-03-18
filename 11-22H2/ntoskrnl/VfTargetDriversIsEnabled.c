/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140ACC614
 * Callers:
 *     IoAllocateIrpEx @ 0x140310DD0 (IoAllocateIrpEx.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084558C (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACEDD0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140AD2A8C (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140AD4CE4 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x140ADF1D4 (ViWdBeforeCallDriver.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140ACC528 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
