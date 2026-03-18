/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x1404004B0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x1403F96B8 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x1403F96D0 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}
