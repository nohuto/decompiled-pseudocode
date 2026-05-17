/*
 * XREFs of ZwReadVirtualMemory @ 0x1800A1690
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180001DD0 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpQueryReadVirtualMemory @ 0x1800AFB00 (RtlpQueryReadVirtualMemory.c)
 *     RtlpQueryCriticalSectionOwner32 @ 0x1800E43EC (RtlpQueryCriticalSectionOwner32.c)
 *     RtlpQueryCriticalSectionOwner64 @ 0x1800E448C (RtlpQueryCriticalSectionOwner64.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800F4B30 (RtlQueryCriticalSectionOwner.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180100668 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x180128D70 (PssNtFreeRemoteSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129BC8 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x180129E68 (PsspCaptureImageInformation.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18012C484 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwReadVirtualMemory()
{
  __int64 result; // rax

  result = 63LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
