/*
 * XREFs of SymCryptIntToModulus @ 0x1403F9770
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7CEC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F828C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefIntToModulus @ 0x1404040CC (SymCryptFdefIntToModulus.c)
 */

__int64 __fastcall SymCryptIntToModulus(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  return SymCryptFdefIntToModulus(a1, a2, a3, a4, a5, a6);
}
