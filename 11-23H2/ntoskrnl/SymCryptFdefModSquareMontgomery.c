/*
 * XREFs of SymCryptFdefModSquareMontgomery @ 0x140405210
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawSquare @ 0x140403EC8 (SymCryptFdefRawSquare.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140405624 (SymCryptFdefMontgomeryReduce.c)
 */

__int64 __fastcall SymCryptFdefModSquareMontgomery(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  SymCryptFdefRawSquare(a2, *(_DWORD *)(a1 + 4), a4);
  return SymCryptFdefMontgomeryReduce(a1, a4, a3);
}
