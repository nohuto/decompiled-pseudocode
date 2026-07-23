/*
 * XREFs of ZwYieldExecution @ 0x14041C020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwYieldExecution(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  _disable();
  __readeflags();
  return sub_140433F80(v1, v0);
}
