/*
 * XREFs of SymCryptDivisorCreate @ 0x1403F9438
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7CEC (SymCryptRsakeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDF44 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefDivisorCreate @ 0x140405830 (SymCryptFdefDivisorCreate.c)
 */

__int64 SymCryptDivisorCreate()
{
  return SymCryptFdefDivisorCreate();
}
