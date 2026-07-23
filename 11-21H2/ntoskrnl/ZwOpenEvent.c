/*
 * XREFs of ZwOpenEvent @ 0x14041BF60
 * Callers:
 *     sub_140621900 @ 0x140621900 (sub_140621900.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenEvent(PHANDLE EventHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(EventHandle, *(_QWORD *)&DesiredAccess);
}
