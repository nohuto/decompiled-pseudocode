/*
 * XREFs of SymCryptFdef369ModMulMontgomery @ 0x1404097C0
 * Callers:
 *     SymCryptFdef369ModSquareMontgomery @ 0x140409920 (SymCryptFdef369ModSquareMontgomery.c)
 * Callees:
 *     SymCryptFdef369RawMulAsm @ 0x14040F300 (SymCryptFdef369RawMulAsm.c)
 *     SymCryptFdef369MontgomeryReduceAsm @ 0x14040F420 (SymCryptFdef369MontgomeryReduceAsm.c)
 */

__int64 __fastcall SymCryptFdef369ModMulMontgomery(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  SymCryptFdef369RawMulAsm(a2, *(_DWORD *)(a1 + 4), a3, *(_DWORD *)(a1 + 4), a5);
  return SymCryptFdef369MontgomeryReduceAsm(a1, a5, a4);
}
