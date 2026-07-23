/*
 * XREFs of NtCreatePartition @ 0x1409B6550
 * Callers:
 *     <none>
 * Callees:
 *     PsCreatePartition @ 0x140859F8C (PsCreatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  return PsCreatePartition(
           (ULONG_PTR)ParentPartitionHandle,
           PartitionHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           KeGetCurrentThread()->PreviousMode,
           0);
}
