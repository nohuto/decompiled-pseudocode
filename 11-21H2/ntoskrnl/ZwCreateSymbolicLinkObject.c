/*
 * XREFs of ZwCreateSymbolicLinkObject @ 0x14041D000
 * Callers:
 *     sub_14061EF90 @ 0x14061EF90 (sub_14061EF90.c)
 *     sub_14069CC40 @ 0x14069CC40 (sub_14069CC40.c)
 *     sub_140769170 @ 0x140769170 (sub_140769170.c)
 *     sub_14082666C @ 0x14082666C (sub_14082666C.c)
 *     sub_14082C020 @ 0x14082C020 (sub_14082C020.c)
 *     sub_14082C49C @ 0x14082C49C (sub_14082C49C.c)
 *     IoCreateUnprotectedSymbolicLink @ 0x140936300 (IoCreateUnprotectedSymbolicLink.c)
 *     sub_1409AC86C @ 0x1409AC86C (sub_1409AC86C.c)
 *     sub_140B286CC @ 0x140B286CC (sub_140B286CC.c)
 *     sub_140B2B730 @ 0x140B2B730 (sub_140B2B730.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCreateSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LinkTarget)
{
  _disable();
  __readeflags();
  return sub_140433F80(LinkHandle, *(_QWORD *)&DesiredAccess);
}
