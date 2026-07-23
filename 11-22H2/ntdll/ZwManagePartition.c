/*
 * XREFs of ZwManagePartition @ 0x1800A1100
 * Callers:
 *     <none>
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
  NTSTATUS result; // eax

  result = 281;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
