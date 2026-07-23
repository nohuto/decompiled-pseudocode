/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1405CE768
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14085E984 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140AC2B6C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140ACA75C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140ACA880 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
