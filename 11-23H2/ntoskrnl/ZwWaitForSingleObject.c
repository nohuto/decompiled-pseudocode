/*
 * XREFs of ZwWaitForSingleObject @ 0x14041ADE0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x140365BA0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     MiZeroPageThread @ 0x1403B0030 (MiZeroPageThread.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403C2074 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x140538C60 (CcDeletePartition.c)
 *     DifZwWaitForSingleObjectWrapper @ 0x1405F8330 (DifZwWaitForSingleObjectWrapper.c)
 *     MiDeletePartitionResources @ 0x140659488 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14068714C (PfSnVolumeCheckSeekPenalty.c)
 *     BiAcquireBcdSyncMutant @ 0x140805634 (BiAcquireBcdSyncMutant.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140810608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1408515D8 (FsRtlpRegisterProviderWithMUP.c)
 *     PiDrvDbLoadNode @ 0x14086BB24 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1408842D4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A5914 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1409AD2A8 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140A008E8 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140A0217C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02AC0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, Alertable, Timeout);
}
