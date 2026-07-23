/*
 * XREFs of ZwYieldExecution @ 0x14041B9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwYieldExecution(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
