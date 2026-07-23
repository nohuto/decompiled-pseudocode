/*
 * XREFs of ZwCreatePartition @ 0x14041BE00
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140B37BD4 (ExpInitializeMemoryMirroring.c)
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
