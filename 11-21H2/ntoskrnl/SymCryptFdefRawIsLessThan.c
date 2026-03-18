/*
 * XREFs of SymCryptFdefRawIsLessThan @ 0x14040B404
 * Callers:
 *     SymCryptFdefModSetRandomGeneric @ 0x14040C7CC (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     SymCryptFdefRawIsLessThanC @ 0x14040B41C (SymCryptFdefRawIsLessThanC.c)
 */

__int64 __fastcall SymCryptFdefRawIsLessThan(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefRawIsLessThanC(a1, a2, a3);
}
