/*
 * XREFs of MinCryptHashMemory @ 0x140652894
 * Callers:
 *     MinCrypK_HashMemory @ 0x140A31CB4 (MinCrypK_HashMemory.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A32064 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     HashpHashMemory @ 0x140A3731C (HashpHashMemory.c)
 */

__int64 __fastcall MinCryptHashMemory(__int64 a1)
{
  return HashpHashMemory(a1);
}
