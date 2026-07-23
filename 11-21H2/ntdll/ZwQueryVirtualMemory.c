/*
 * XREFs of ZwQueryVirtualMemory @ 0x1800A44D0
 * Callers:
 *     RtlpHpHeapValidateProtection @ 0x1800227CC (RtlpHpHeapValidateProtection.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x180030C68 (RtlpProtectHeap.c)
 *     RtlpWalkFrameChain @ 0x180036958 (RtlpWalkFrameChain.c)
 *     LdrpGetImageSize @ 0x18003A4FC (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x18003F8A0 (LdrpResGetMappingSize.c)
 *     PsspCaptureAuxiliaryPages @ 0x180061BDC (PsspCaptureAuxiliaryPages.c)
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x18007717C (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     LdrpProtectAndRelocateImage @ 0x180088EBC (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180089280 (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180089CB0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180089D70 (RtlUnlockCurrentThread.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008B128 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpIsExecutableRelocatedImage @ 0x18008E310 (LdrpIsExecutableRelocatedImage.c)
 *     LdrIsEnclaveAddress @ 0x1800D8510 (LdrIsEnclaveAddress.c)
 *     LdrpCaptureCriticalThunks @ 0x1800E0B14 (LdrpCaptureCriticalThunks.c)
 *     LdrpCheckPagesForTampering @ 0x1800E1768 (LdrpCheckPagesForTampering.c)
 *     RtlResetStackOverflow @ 0x1800E9C24 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FE6D8 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x180103400 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x180103EA4 (RtlpScanProcessVirtualMemory.c)
 *     RtlDebugCreateHeap @ 0x18010495C (RtlDebugCreateHeap.c)
 *     RtlGetNonVolatileToken @ 0x180108BD0 (RtlGetNonVolatileToken.c)
 *     RtlpGetTargetRvaFlag @ 0x18010A300 (RtlpGetTargetRvaFlag.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A614 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHpHeapProtect @ 0x18011F8D8 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011FD98 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x1801209A4 (RtlpHpSegProtect.c)
 *     PsspQueryVmBulkMode @ 0x180125C40 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
