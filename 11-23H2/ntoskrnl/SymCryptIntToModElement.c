/*
 * XREFs of SymCryptIntToModElement @ 0x1403F9570
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaTruncateHash @ 0x1403F9AB8 (SymCryptEcDsaTruncateHash.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FDB60 (SymCryptCrtGenerateForTwoCoprimes.c)
 * Callees:
 *     SymCryptFdefIntToModElement @ 0x140403E64 (SymCryptFdefIntToModElement.c)
 */

__int64 __fastcall SymCryptIntToModElement(int a1, int a2, int a3, int a4, __int64 a5)
{
  return SymCryptFdefIntToModElement(a1, a2, a3, a4, a5);
}
