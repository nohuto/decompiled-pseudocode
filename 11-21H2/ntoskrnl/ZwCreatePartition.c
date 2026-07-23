/*
 * XREFs of ZwCreatePartition @ 0x14041CEA0
 * Callers:
 *     sub_140B1CC30 @ 0x140B1CC30 (sub_140B1CC30.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  _disable();
  __readeflags();
  return sub_140433F80(ParentPartitionHandle, PartitionHandle);
}
