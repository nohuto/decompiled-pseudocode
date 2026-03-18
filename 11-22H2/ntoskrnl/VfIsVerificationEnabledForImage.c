/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1405CE288
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14085E8A8 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140AC3B4C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140ACB73C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140ACB860 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
