/*
 * XREFs of SymCryptTwistedEdwardsIsZero @ 0x140400690
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptModElementIsEqual @ 0x1403F9898 (SymCryptModElementIsEqual.c)
 *     SymCryptModElementIsZero @ 0x1403F98B0 (SymCryptModElementIsZero.c)
 */

__int64 SymCryptTwistedEdwardsIsZero()
{
  int IsZero; // edi

  IsZero = SymCryptModElementIsZero();
  return IsZero & (unsigned int)SymCryptModElementIsEqual();
}
