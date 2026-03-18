/*
 * XREFs of SymCryptFdefRawAdd @ 0x14040385C
 * Callers:
 *     SymCryptFdefModAddGeneric @ 0x140403F90 (SymCryptFdefModAddGeneric.c)
 *     SymCryptFdefModSubGeneric @ 0x1404051C0 (SymCryptFdefModSubGeneric.c)
 * Callees:
 *     SymCryptFdefRawAddAsm @ 0x140405D20 (SymCryptFdefRawAddAsm.c)
 */

__int64 __fastcall SymCryptFdefRawAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return SymCryptFdefRawAddAsm(a1, a2, a3, a4);
}
