/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140399B30
 * Callers:
 *     AdtpPackageParameters @ 0x140399604 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
