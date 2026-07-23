/*
 * XREFs of ZwSetBootOptions @ 0x14041E9A0
 * Callers:
 *     sub_140626B70 @ 0x140626B70 (sub_140626B70.c)
 *     sub_140A20AA4 @ 0x140A20AA4 (sub_140A20AA4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  _disable();
  __readeflags();
  return sub_140433F80(BootOptions, *(_QWORD *)&FieldsToChange);
}
