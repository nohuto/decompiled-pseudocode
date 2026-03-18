/*
 * XREFs of VfIsVerificationEnabledForImage @ 0x1405CE1F8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14085E744 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViIsDriverSuspectForVerifier @ 0x140AC2B7C (ViIsDriverSuspectForVerifier.c)
 *     VfDriverLock @ 0x140ACA76C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140ACA890 (VfDriverUnlock.c)
 */

__int64 __fastcall VfIsVerificationEnabledForImage(__int64 a1)
{
  VfDriverLock();
  LODWORD(a1) = ViIsDriverSuspectForVerifier(a1);
  VfDriverUnlock();
  return (unsigned int)a1;
}
