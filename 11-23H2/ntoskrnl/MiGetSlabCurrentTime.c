/*
 * XREFs of MiGetSlabCurrentTime @ 0x140656D2C
 * Callers:
 *     MiAllocateDriverPage @ 0x140706324 (MiAllocateDriverPage.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 MiGetSlabCurrentTime()
{
  __int64 result; // rax
  __int64 v1; // r11

  result = KiQueryUnbiasedInterruptTime();
  if ( !result )
    return v1;
  return result;
}
