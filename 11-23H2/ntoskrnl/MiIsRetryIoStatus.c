/*
 * XREFs of MiIsRetryIoStatus @ 0x1402F4998
 * Callers:
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140275750 (MiFlushSectionInternal.c)
 *     MiWaitForInPageComplete @ 0x1402A17A0 (MiWaitForInPageComplete.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiZeroPageWrite @ 0x1403C17F4 (MiZeroPageWrite.c)
 *     MiMakeOutswappedPageResident @ 0x14061856C (MiMakeOutswappedPageResident.c)
 *     MiReadImageHeaders @ 0x1406A79B8 (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x140A30284 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1402F4A50 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741663 || a1 == -1073741801 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
