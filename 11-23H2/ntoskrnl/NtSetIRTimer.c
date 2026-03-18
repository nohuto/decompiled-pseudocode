/*
 * XREFs of NtSetIRTimer @ 0x140339680
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1403396F0 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetIRTimer(void *a1)
{
  return ExpSetTimer2(a1);
}
