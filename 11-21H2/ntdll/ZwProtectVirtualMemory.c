/*
 * XREFs of ZwProtectVirtualMemory @ 0x1800A4A70
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x18001C980 (LdrpChangeMrdataProtection.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18002EABC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpProtectHeap @ 0x180030C68 (RtlpProtectHeap.c)
 *     LdrpDoPostSnapWork @ 0x180034040 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x1800340FC (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180034354 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x18003485C (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800354CC (LdrpCfgProcessLoadConfig.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18006C404 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x18006D210 (RtlpFreeUserBlockToHeap.c)
 *     LdrpSetProtection @ 0x180088FC8 (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x1800DA6D8 (LdrpCorFixupImage.c)
 *     AVrfpSnapDllImports @ 0x1800E6998 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800E6C5C (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800E9C24 (RtlResetStackOverflow.c)
 *     RtlpSubSegmentDebugInitialize @ 0x180118780 (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpHeapProtect @ 0x18011F8D8 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18011FD98 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x1801209A4 (RtlpHpSegProtect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
