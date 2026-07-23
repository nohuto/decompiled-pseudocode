/*
 * XREFs of ZwDisplayString @ 0x14041D380
 * Callers:
 *     sub_14061FB10 @ 0x14061FB10 (sub_14061FB10.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDisplayString(PUNICODE_STRING String)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(String, v1);
}
