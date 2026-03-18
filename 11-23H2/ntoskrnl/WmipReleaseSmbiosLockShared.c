/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x1409DF63C
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1405FBA70 (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 */

_QWORD *WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
