/*
 * XREFs of SymCryptFdefModSetPostMontgomery256 @ 0x140405000
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptFdefModMulMontgomery256Asm @ 0x1404069D0 (SymCryptFdefModMulMontgomery256Asm.c)
 */

__int64 __fastcall SymCryptFdefModSetPostMontgomery256(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefModMulMontgomery256Asm(a1, *(_QWORD *)(a1 + 40), a2, a2, a3, a4);
}
