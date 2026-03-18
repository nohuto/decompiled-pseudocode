/*
 * XREFs of SymCryptIntFromDivisor @ 0x1403F93A4
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F75C8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDD64 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1404033D0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 SymCryptIntFromDivisor()
{
  return SymCryptFdefIntFromDivisor();
}
