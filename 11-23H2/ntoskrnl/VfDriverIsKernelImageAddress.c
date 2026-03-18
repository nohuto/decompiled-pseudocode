/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140ACA744
 * Callers:
 *     MmIsDriverVerifying @ 0x14020A570 (MmIsDriverVerifying.c)
 *     VfTargetDriversGetVerifierData @ 0x140ACB558 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140ACBC0C (ViTargetIncrementCounter.c)
 *     VfPendingShouldForce @ 0x140AD1ABC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140AD3D14 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

bool __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( ViDriverKernelBase )
  {
    if ( a1 >= ViDriverKernelBase )
      return a1 < ViDriverKernelEnd;
  }
  return result;
}
