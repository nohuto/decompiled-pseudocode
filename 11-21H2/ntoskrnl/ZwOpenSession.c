/*
 * XREFs of ZwOpenSession @ 0x14041DDC0
 * Callers:
 *     sub_140768894 @ 0x140768894 (sub_140768894.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwOpenSession(PHANDLE SessionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(SessionHandle, *(_QWORD *)&DesiredAccess);
}
