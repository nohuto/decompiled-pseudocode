/*
 * XREFs of MiGetSlabCurrentTime @ 0x14065727C
 * Callers:
 *     MiAllocateDriverPage @ 0x140706534 (MiAllocateDriverPage.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
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
