/*
 * XREFs of SymCryptIntToModulus @ 0x1403F8F30
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefIntToModulus @ 0x14040388C (SymCryptFdefIntToModulus.c)
 */

__int64 __fastcall SymCryptIntToModulus(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToModulus(a1, a2, a3, a4, a5, a6);
}
