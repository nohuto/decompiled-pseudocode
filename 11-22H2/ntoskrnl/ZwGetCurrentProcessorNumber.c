/*
 * XREFs of ZwGetCurrentProcessorNumber @ 0x14041C5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG ZwGetCurrentProcessorNumber(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
