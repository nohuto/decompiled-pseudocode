/*
 * XREFs of SymCryptSizeofDivisorFromDigits @ 0x1403F9A58
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7B0C (SymCryptRsakeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDD64 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDivisorCreate @ 0x140405650 (SymCryptFdefDivisorCreate.c)
 * Callees:
 *     SymCryptFdefSizeofDivisorFromDigits @ 0x140405B60 (SymCryptFdefSizeofDivisorFromDigits.c)
 */

__int64 SymCryptSizeofDivisorFromDigits()
{
  return SymCryptFdefSizeofDivisorFromDigits();
}
