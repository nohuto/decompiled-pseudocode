/*
 * XREFs of ZwSerializeBoot @ 0x14041D900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwSerializeBoot(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
