/*
 * XREFs of SymCryptDivisorCreate @ 0x1403F9258
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7B0C (SymCryptRsakeySetValue.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDD64 (SymCryptIntExtendedGcd.c)
 * Callees:
 *     SymCryptFdefDivisorCreate @ 0x140405650 (SymCryptFdefDivisorCreate.c)
 */

__int64 SymCryptDivisorCreate()
{
  return SymCryptFdefDivisorCreate();
}
