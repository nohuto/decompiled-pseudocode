/*
 * XREFs of ZwOpenPartition @ 0x14041DD00
 * Callers:
 *     sub_14055A6E4 @ 0x14055A6E4 (sub_14055A6E4.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(PartitionHandle, *(_QWORD *)&DesiredAccess);
}
