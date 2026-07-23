/*
 * XREFs of SymCryptFdefModMulMontgomery1024 @ 0x140404CE0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMul1024Asm @ 0x1404078F0 (SymCryptFdefRawMul1024Asm.c)
 *     SymCryptFdefMontgomeryReduce1024Asm @ 0x140409040 (SymCryptFdefMontgomeryReduce1024Asm.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomery1024(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  SymCryptFdefRawMul1024Asm(a2, a3, *(unsigned int *)(a1 + 4), a5);
  return SymCryptFdefMontgomeryReduce1024Asm(a1, a5, a4);
}
