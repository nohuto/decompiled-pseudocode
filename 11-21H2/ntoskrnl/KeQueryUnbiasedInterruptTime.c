/*
 * XREFs of KeQueryUnbiasedInterruptTime @ 0x1402A0850
 * Callers:
 *     sub_1404192EC @ 0x1404192EC (sub_1404192EC.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     <none>
 */

ULONGLONG KeQueryUnbiasedInterruptTime(void)
{
  return MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
}
