/*
 * XREFs of NtYieldExecution @ 0x1403CE340
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0);
}
