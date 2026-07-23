/*
 * XREFs of SymCryptFdefModMulMontgomeryMulx1024 @ 0x140404DE0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMulMulx1024 @ 0x14040BC30 (SymCryptFdefRawMulMulx1024.c)
 *     SymCryptFdefMontgomeryReduceMulx1024 @ 0x14040E0E0 (SymCryptFdefMontgomeryReduceMulx1024.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomeryMulx1024(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  SymCryptFdefRawMulMulx1024(a2, a3, *(unsigned int *)(a1 + 4), a5);
  return SymCryptFdefMontgomeryReduceMulx1024(a1, a5, a4);
}
