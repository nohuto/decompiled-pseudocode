/*
 * XREFs of NtYieldExecution @ 0x1403CE9A0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1402469F0 (KeYieldExecution.c)
 */

void __noreturn NtYieldExecution()
{
  KeYieldExecution(0);
}
