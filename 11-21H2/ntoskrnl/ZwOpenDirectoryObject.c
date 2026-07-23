/*
 * XREFs of ZwOpenDirectoryObject @ 0x14041C260
 * Callers:
 *     sub_140621660 @ 0x140621660 (sub_140621660.c)
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     sub_140799218 @ 0x140799218 (sub_140799218.c)
 *     sub_140802BE0 @ 0x140802BE0 (sub_140802BE0.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_1408276AC @ 0x1408276AC (sub_1408276AC.c)
 *     sub_14082C020 @ 0x14082C020 (sub_14082C020.c)
 *     sub_14095E00C @ 0x14095E00C (sub_14095E00C.c)
 *     sub_1409FC2D0 @ 0x1409FC2D0 (sub_1409FC2D0.c)
 *     sub_140A21C40 @ 0x140A21C40 (sub_140A21C40.c)
 *     sub_140A34510 @ 0x140A34510 (sub_140A34510.c)
 *     sub_140B12C84 @ 0x140B12C84 (sub_140B12C84.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenDirectoryObject(
        PHANDLE DirectoryHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(DirectoryHandle, *(_QWORD *)&DesiredAccess);
}
