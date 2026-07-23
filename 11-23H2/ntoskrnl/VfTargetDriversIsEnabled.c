/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140ACB634
 * Callers:
 *     IoAllocateIrpEx @ 0x140311240 (IoAllocateIrpEx.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140843AFC (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACDDF0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140AD1AAC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140AD3D04 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x140ADE1F4 (ViWdBeforeCallDriver.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140ACB548 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
