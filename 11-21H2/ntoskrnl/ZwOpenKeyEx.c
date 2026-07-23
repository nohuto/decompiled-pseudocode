/*
 * XREFs of ZwOpenKeyEx @ 0x14041DC40
 * Callers:
 *     sub_140621CE0 @ 0x140621CE0 (sub_140621CE0.c)
 *     sub_14078003C @ 0x14078003C (sub_14078003C.c)
 *     sub_140B30BB0 @ 0x140B30BB0 (sub_140B30BB0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return sub_140433F80(KeyHandle, *(_QWORD *)&DesiredAccess);
}
