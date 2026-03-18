/*
 * XREFs of SymCryptFdefRawIsLessThan @ 0x140403AFC
 * Callers:
 *     SymCryptFdefModSetRandomGeneric @ 0x140404E4C (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     SymCryptFdefRawIsLessThanC @ 0x140403B14 (SymCryptFdefRawIsLessThanC.c)
 */

__int64 __fastcall SymCryptFdefRawIsLessThan(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefRawIsLessThanC(a1, a2, a3);
}
