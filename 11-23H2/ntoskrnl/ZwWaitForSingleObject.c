/*
 * XREFs of ZwWaitForSingleObject @ 0x14041B170
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140365D40 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiZeroPageThread @ 0x1403B0210 (MiZeroPageThread.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2254 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x1405391B0 (CcDeletePartition.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x1405F88A0 (DifZwWaitForSingleObjectWrapper.c)
 *     MiDeletePartitionResources @ 0x1406599D8 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14068714C (PfSnVolumeCheckSeekPenalty.c)
 *     BiAcquireBcdSyncMutant @ 0x140805904 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1408108D8 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1408518D8 (FsRtlpRegisterProviderWithMUP.c)
 *     PiDrvDbLoadNode @ 0x14086BD64 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140884514 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A5B64 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1409AD4A8 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140A00B78 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140A0240C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02D50 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
