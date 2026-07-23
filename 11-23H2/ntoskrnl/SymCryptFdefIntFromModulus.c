/*
 * XREFs of SymCryptFdefIntFromModulus @ 0x140404028
 * Callers:
 *     SymCryptIntFromModulus @ 0x1403F959C (SymCryptIntFromModulus.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1404035B0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 __fastcall SymCryptFdefIntFromModulus(__int64 a1)
{
  return SymCryptFdefIntFromDivisor(a1 + 64);
}
