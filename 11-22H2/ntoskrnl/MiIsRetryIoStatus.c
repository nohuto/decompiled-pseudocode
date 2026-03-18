/*
 * XREFs of MiIsRetryIoStatus @ 0x1402F4998
 * Callers:
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiWriteComplete @ 0x1402F4320 (MiWriteComplete.c)
 *     MiZeroPageWrite @ 0x1403C1194 (MiZeroPageWrite.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiReadImageHeaders @ 0x1406A79B8 (MiReadImageHeaders.c)
 *     MiLogFailedDriverLoad @ 0x140A302F4 (MiLogFailedDriverLoad.c)
 * Callees:
 *     FsRtlIsTotalDeviceFailure @ 0x1402F4A50 (FsRtlIsTotalDeviceFailure.c)
 */

_BOOL8 __fastcall MiIsRetryIoStatus(NTSTATUS a1, unsigned __int64 a2)
{
  return a1 == -1073741670 || a1 == -1073741663 || a1 == -1073741801 || a2 > 0x1000 && !FsRtlIsTotalDeviceFailure(a1);
}
