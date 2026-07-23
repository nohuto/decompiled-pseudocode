/*
 * XREFs of ZwManagePartition @ 0x14041D410
 * Callers:
 *     ExpAddNonMirroredRanges @ 0x140B97DA4 (ExpAddNonMirroredRanges.c)
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
  return KiServiceInternal(TargetHandle);
}
