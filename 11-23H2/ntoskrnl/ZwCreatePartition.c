/*
 * XREFs of ZwCreatePartition @ 0x14041C850
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140B75BDC (ExpInitializeMemoryMirroring.c)
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
  return KiServiceInternal(ParentPartitionHandle);
}
