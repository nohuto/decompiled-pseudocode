/*
 * XREFs of MinCryptHashMemory @ 0x1406773EC
 * Callers:
 *     MinCrypK_HashMemory @ 0x140A6F154 (MinCrypK_HashMemory.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6F858 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     HashpHashMemory @ 0x140A7701C (HashpHashMemory.c)
 */

__int64 __fastcall MinCryptHashMemory(__int64 a1)
{
  return HashpHashMemory(a1, 1LL);
}
