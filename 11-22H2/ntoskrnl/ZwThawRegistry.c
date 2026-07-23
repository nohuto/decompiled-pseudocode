/*
 * XREFs of ZwThawRegistry @ 0x14041E0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwThawRegistry(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
