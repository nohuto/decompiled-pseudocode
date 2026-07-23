/*
 * XREFs of ZwCreateDirectoryObject @ 0x14041CC80
 * Callers:
 *     sub_14061E280 @ 0x14061E280 (sub_14061E280.c)
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_14082C020 @ 0x14082C020 (sub_14082C020.c)
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 *     sub_14085A828 @ 0x14085A828 (sub_14085A828.c)
 *     sub_140A349F0 @ 0x140A349F0 (sub_140A349F0.c)
 *     sub_140B2B730 @ 0x140B2B730 (sub_140B2B730.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
