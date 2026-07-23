/*
 * XREFs of ZwQueryVirtualMemory @ 0x18009F250
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     RtlpWalkFrameChain @ 0x18001E3CC (RtlpWalkFrameChain.c)
 *     LdrpResGetMappingSize @ 0x180022810 (LdrpResGetMappingSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180023A40 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpHpHeapValidateProtection @ 0x180046858 (RtlpHpHeapValidateProtection.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x1800493DC (RtlpProtectHeap.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x180072F7C (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     LdrpTouchThreadStack @ 0x18008433C (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180087080 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x1800871B0 (RtlUnlockCurrentThread.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180087E1C (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpGetImageSize @ 0x180088608 (LdrpGetImageSize.c)
 *     LdrpIsExecutableRelocatedImage @ 0x180088DB8 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpCaptureCriticalThunks @ 0x1800AD794 (LdrpCaptureCriticalThunks.c)
 *     LdrIsEnclaveAddress @ 0x1800D8820 (LdrIsEnclaveAddress.c)
 *     LdrpProtectAndRelocateImage @ 0x1800DCCF4 (LdrpProtectAndRelocateImage.c)
 *     LdrpCheckPagesForTampering @ 0x1800DFF78 (LdrpCheckPagesForTampering.c)
 *     RtlResetStackOverflow @ 0x1800E8A98 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800FE420 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x180103100 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x180103B7C (RtlpScanProcessVirtualMemory.c)
 *     RtlDebugCreateHeap @ 0x180104638 (RtlDebugCreateHeap.c)
 *     RtlGetNonVolatileToken @ 0x180108BF0 (RtlGetNonVolatileToken.c)
 *     RtlpGetTargetRvaFlag @ 0x18010A4C0 (RtlpGetTargetRvaFlag.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010A7D4 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpHpHeapProtect @ 0x180121E14 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180122190 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18012298C (RtlpHpSegProtect.c)
 *     PsspCaptureAuxiliaryPages @ 0x180128718 (PsspCaptureAuxiliaryPages.c)
 *     PsspQueryVmBulkMode @ 0x180129100 (PsspQueryVmBulkMode.c)
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
