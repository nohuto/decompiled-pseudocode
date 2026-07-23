/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1402F4CE0
 * Callers:
 *     MiIsRetryIoStatus @ 0x1402F4C28 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1402F4C6C (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x1407016F8 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
