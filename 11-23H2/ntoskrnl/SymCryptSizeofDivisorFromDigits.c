/*
 * XREFs of SymCryptSizeofDivisorFromDigits @ 0x1403F9C38
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7CEC (SymCryptRsakeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDF44 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDivisorCreate @ 0x140405830 (SymCryptFdefDivisorCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140405D40 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 SymCryptSizeofDivisorFromDigits()
{
  return SymCryptFdefSizeofDivisorFromDigits();
}
