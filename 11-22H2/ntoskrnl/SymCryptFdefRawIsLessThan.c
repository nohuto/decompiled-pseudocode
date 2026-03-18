/*
 * XREFs of SymCryptFdefRawIsLessThan @ 0x14040349C
 * Callers:
 *     SymCryptFdefModSetRandomGeneric @ 0x1404047EC (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     SymCryptFdefRawIsLessThanC @ 0x1404034B4 (SymCryptFdefRawIsLessThanC.c)
 */

__int64 __fastcall SymCryptFdefRawIsLessThan(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptFdefRawIsLessThanC(a1, a2, a3);
}
