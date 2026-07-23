/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x14041BF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Luid);
}
