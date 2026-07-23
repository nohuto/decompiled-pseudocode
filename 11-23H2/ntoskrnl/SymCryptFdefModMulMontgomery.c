/*
 * XREFs of SymCryptFdefModMulMontgomery @ 0x140404C80
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMul @ 0x140403D7C (SymCryptFdefRawMul.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140405624 (SymCryptFdefMontgomeryReduce.c)
 */

__int64 __fastcall SymCryptFdefModMulMontgomery(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  SymCryptFdefRawMul(a2, *(_DWORD *)(a1 + 4), a3, *(_DWORD *)(a1 + 4), a5);
  return SymCryptFdefMontgomeryReduce(a1, a5, a4);
}
