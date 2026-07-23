/*
 * XREFs of ZwManagePartition @ 0x14041DA60
 * Callers:
 *     sub_140B5439C @ 0x140B5439C (sub_140B5439C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(TargetHandle, SourceHandle);
}
