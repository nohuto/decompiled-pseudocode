/*
 * XREFs of ZwProtectVirtualMemory @ 0x18009F7F0
 * Callers:
 *     LdrpDoPostSnapWork @ 0x1800044CC (LdrpDoPostSnapWork.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B440 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x18002B824 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002BAB4 (LdrpCfgProcessLoadConfig.c)
 *     LdrpChangeMrdataProtection @ 0x180032F34 (LdrpChangeMrdataProtection.c)
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpFreeUserBlockToHeap @ 0x180047E20 (RtlpFreeUserBlockToHeap.c)
 *     RtlpProtectHeap @ 0x1800493DC (RtlpProtectHeap.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18006385C (RtlpAllocateUserBlockFromHeap.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18006AC84 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpCorFixupImage @ 0x1800DA7C8 (LdrpCorFixupImage.c)
 *     LdrpSetProtection @ 0x1800DCE7C (LdrpSetProtection.c)
 *     AVrfpSnapDllImports @ 0x1800E5800 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800E5AB8 (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800E8A98 (RtlResetStackOverflow.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1801192A4 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1801199C8 (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpHeapProtect @ 0x180121E14 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180122190 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18012298C (RtlpHpSegProtect.c)
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
