/*
 * XREFs of ZwWaitForSingleObject @ 0x14041A720
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140365550 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiZeroPageThread @ 0x1403AF9A0 (MiZeroPageThread.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C1A14 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x140538D10 (CcDeletePartition.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x1405F83C0 (DifZwWaitForSingleObjectWrapper.c)
 *     MiDeletePartitionResources @ 0x1406594F8 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14068714C (PfSnVolumeCheckSeekPenalty.c)
 *     BiAcquireBcdSyncMutant @ 0x140807BB4 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140812B88 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1408524E8 (FsRtlpRegisterProviderWithMUP.c)
 *     PiDrvDbLoadNode @ 0x14086BFF4 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408847A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A5DF4 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140A00998 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140A0222C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
