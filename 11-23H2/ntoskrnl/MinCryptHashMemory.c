/*
 * XREFs of MinCryptHashMemory @ 0x14067793C
 * Callers:
 *     MinCrypK_HashMemory @ 0x140A6F404 (MinCrypK_HashMemory.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6FB08 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     HashpHashMemory @ 0x140A772CC (HashpHashMemory.c)
 */

__int64 __fastcall MinCryptHashMemory(__int64 a1)
{
  return HashpHashMemory(a1, 1LL);
}
