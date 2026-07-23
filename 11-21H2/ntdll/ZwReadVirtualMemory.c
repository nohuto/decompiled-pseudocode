/*
 * XREFs of ZwReadVirtualMemory @ 0x1800A4850
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800013C0 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180001B50 (RtlWow64GetSharedInfoProcess.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x180062054 (PsspCaptureImageInformation.c)
 *     RtlpQueryReadVirtualMemory @ 0x1800B0980 (RtlpQueryReadVirtualMemory.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800F3A00 (RtlQueryCriticalSectionOwner.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800FF558 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x180125900 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801264F8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
