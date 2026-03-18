/*
 * XREFs of SymCryptFdefRawSub @ 0x140403D3C
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x140403F90 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModNegGeneric @ 0x140404C50 (SymCryptFdefModNegGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x1404051C0 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawSubAsm @ 0x140405D80 (SymCryptFdefRawSubAsm.c)
 */

__int64 __fastcall SymCryptFdefRawSub(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawSubAsm(a1, a2, a3, a4);
}
