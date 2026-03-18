/*
 * XREFs of SymCryptFdefModSetPostMontgomery @ 0x140404DC0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefRawMul @ 0x140403B9C (SymCryptFdefRawMul.c)
 *     SymCryptFdefMontgomeryReduce @ 0x140405444 (SymCryptFdefMontgomeryReduce.c)
 */

__int64 __fastcall SymCryptFdefModSetPostMontgomery(__int64 a1, __int64 a2, __int64 a3)
{
  SymCryptFdefRawMul(a2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 40), *(_DWORD *)(a1 + 4), a3);
  return SymCryptFdefMontgomeryReduce(a1, a3, a2);
}
