/*
 * XREFs of VfSuspectDriversLookupName @ 0x140ADAA14
 * Callers:
 *     VfDriverApplyDifVerification @ 0x140ACA2F8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4B8 (VfDriverEnableVerifier.c)
 * Callees:
 *     ViSuspectDriversLookupEntry @ 0x140ADAD00 (ViSuspectDriversLookupEntry.c)
 */

_BOOL8 __fastcall VfSuspectDriversLookupName(const UNICODE_STRING *a1)
{
  return ViSuspectDriversLookupEntry(a1) != 0;
}
