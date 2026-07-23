/*
 * XREFs of WmipReleaseSmbiosLockShared @ 0x1409DF83C
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x1405FBFE0 (WmipReadSMBiosSysInfo.c)
 *     PoBroadcastSystemState @ 0x140AA68D8 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 */

_QWORD *WmipReleaseSmbiosLockShared()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
