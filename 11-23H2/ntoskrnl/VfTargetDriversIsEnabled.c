/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140ACB644
 * Callers:
 *     IoAllocateIrpEx @ 0x140310FB0 (IoAllocateIrpEx.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x1408437FC (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACDE00 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140AD1ABC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140AD3D14 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x140ADE204 (ViWdBeforeCallDriver.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140ACB558 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
