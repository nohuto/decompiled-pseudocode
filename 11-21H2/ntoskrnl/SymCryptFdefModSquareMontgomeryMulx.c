/*
 * XREFs of SymCryptFdefModSquareMontgomeryMulx @ 0x14040CAD0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawSquareMulx @ 0x140411CE0 (SymCryptFdefRawSquareMulx.c)
 *     SymCryptFdefMontgomeryReduceMulx @ 0x140412770 (SymCryptFdefMontgomeryReduceMulx.c)
 */

__int64 __fastcall SymCryptFdefModSquareMontgomeryMulx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SymCryptFdefRawSquareMulx(a2, *(unsigned int *)(a1 + 4), a4);
  return SymCryptFdefMontgomeryReduceMulx(a1, a4, a3);
}
