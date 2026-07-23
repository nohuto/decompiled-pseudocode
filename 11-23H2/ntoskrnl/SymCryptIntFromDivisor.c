/*
 * XREFs of SymCryptIntFromDivisor @ 0x1403F9584
 * Callers:
 *     SymCryptRsakeyCalculatePrivateFields @ 0x1403F77A8 (SymCryptRsakeyCalculatePrivateFields.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDF44 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefIntFromDivisor @ 0x1404035B0 (SymCryptFdefIntFromDivisor.c)
 */

__int64 SymCryptIntFromDivisor()
{
  return SymCryptFdefIntFromDivisor();
}
