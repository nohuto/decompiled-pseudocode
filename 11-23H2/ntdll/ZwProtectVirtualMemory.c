/*
 * XREFs of ZwProtectVirtualMemory @ 0x1800A18B0
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800044C0 (LdrpDoPostSnapWork.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B270 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x18002B654 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B8E4 (LdrpCfgProcessLoadConfig.c)
 *     LdrpChangeMrdataProtection @ 0x180032DD4 (LdrpChangeMrdataProtection.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpFreeUserBlockToHeap @ 0x180047CC0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpProtectHeap @ 0x18004927C (RtlpProtectHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006372C (RtlpAllocateUserBlockFromHeap.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC64 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpCorFixupImage @ 0x1800DA178 (LdrpCorFixupImage.c)
 *     LdrpSetProtection @ 0x1800DC82C (LdrpSetProtection.c)
 *     AVrfpSnapDllImports @ 0x1800E6B30 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800E6DE8 (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800E9DC8 (RtlResetStackOverflow.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18011A724 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpSubSegmentDebugInitialize @ 0x18011AE48 (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpHeapProtect @ 0x180123294 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180123610 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x180123E0C (RtlpHpSegProtect.c)
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
