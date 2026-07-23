/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140399D10
 * Callers:
 *     AdtpPackageParameters @ 0x1403997E4 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
