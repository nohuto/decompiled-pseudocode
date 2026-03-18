/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1402F4A50
 * Callers:
 *     MiIsRetryIoStatus @ 0x1402F4998 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1402F49DC (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x140701598 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
