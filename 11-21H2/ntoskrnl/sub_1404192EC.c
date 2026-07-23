/*
 * XREFs of sub_1404192EC @ 0x1404192EC
 * Callers:
 *     sub_14023A710 @ 0x14023A710 (sub_14023A710.c)
 *     sub_1403C2B24 @ 0x1403C2B24 (sub_1403C2B24.c)
 *     sub_1405B0B24 @ 0x1405B0B24 (sub_1405B0B24.c)
 *     sub_1405B19C8 @ 0x1405B19C8 (sub_1405B19C8.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTime @ 0x1402A0850 (KeQueryUnbiasedInterruptTime.c)
 */

ULONGLONG sub_1404192EC()
{
  ULONGLONG result; // rax

  result = KeQueryUnbiasedInterruptTime();
  if ( !result )
    return 1LL;
  return result;
}
