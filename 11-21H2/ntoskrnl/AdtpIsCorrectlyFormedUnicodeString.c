/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x1403CCB18
 * Callers:
 *     AdtpPackageParameters @ 0x1403CC5E8 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
