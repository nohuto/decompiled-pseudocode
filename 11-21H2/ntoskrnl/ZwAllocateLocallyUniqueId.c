/*
 * XREFs of ZwAllocateLocallyUniqueId @ 0x14041C580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateLocallyUniqueId(PLUID Luid)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(Luid, v1);
}
