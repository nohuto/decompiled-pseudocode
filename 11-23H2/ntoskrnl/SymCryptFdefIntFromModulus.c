/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x140403E48
 * Callers:
 *     SymCryptIntFromModulus @ 0x1403F93BC (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1404033D0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
