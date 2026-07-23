/*
 * XREFs of ZwQueryVirtualMemory @ 0x1800A1310
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     RtlpWalkFrameChain @ 0x18001E1EC (RtlpWalkFrameChain.c)
 *     LdrpResGetMappingSize @ 0x180022630 (LdrpResGetMappingSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023940 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpHpHeapValidateProtection @ 0x1800466F8 (RtlpHpHeapValidateProtection.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x18004927C (RtlpProtectHeap.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x1800735EC (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     LdrpTouchThreadStack @ 0x180084B3C (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180087880 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x1800879B0 (RtlUnlockCurrentThread.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180088618 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpGetImageSize @ 0x180088E08 (LdrpGetImageSize.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800895B8 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpCaptureCriticalThunks @ 0x1800AF864 (LdrpCaptureCriticalThunks.c)
 *     LdrIsEnclaveAddress @ 0x1800D81D0 (LdrIsEnclaveAddress.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DC6A4 (LdrpProtectAndRelocateImage.c)
 *     LdrpCheckPagesForTampering @ 0x1800E12A8 (LdrpCheckPagesForTampering.c)
 *     RtlResetStackOverflow @ 0x1800E9DC8 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FF830 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x180104510 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x180104F8C (RtlpScanProcessVirtualMemory.c)
 *     RtlDebugCreateHeap @ 0x180105A48 (RtlDebugCreateHeap.c)
 *     RtlGetNonVolatileToken @ 0x18010A060 (RtlGetNonVolatileToken.c)
 *     RtlpGetTargetRvaFlag @ 0x18010B930 (RtlpGetTargetRvaFlag.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010BC44 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHpHeapProtect @ 0x180123294 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180123610 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x180123E0C (RtlpHpSegProtect.c)
 *     PsspCaptureAuxiliaryPages @ 0x180129B98 (PsspCaptureAuxiliaryPages.c)
 *     PsspQueryVmBulkMode @ 0x18012A580 (PsspQueryVmBulkMode.c)
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
