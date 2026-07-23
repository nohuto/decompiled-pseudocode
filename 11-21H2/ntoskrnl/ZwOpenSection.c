/*
 * XREFs of ZwOpenSection @ 0x14041BE40
 * Callers:
 *     sub_140622730 @ 0x140622730 (sub_140622730.c)
 *     sub_140784CB0 @ 0x140784CB0 (sub_140784CB0.c)
 *     sub_140B0DAC4 @ 0x140B0DAC4 (sub_140B0DAC4.c)
 *     sub_140B17304 @ 0x140B17304 (sub_140B17304.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(SectionHandle, *(_QWORD *)&DesiredAccess);
}
