/*
 * XREFs of NtYieldExecution @ 0x1403CEB80
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 */

NTSTATUS __noreturn NtYieldExecution(void)
{
  return KeYieldExecution(0);
}
