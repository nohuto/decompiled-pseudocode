/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x1409A44A8
 * Callers:
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993D24 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4CA4 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionById @ 0x1409A5130 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A8544 (TtmiLogError.c)
 *     TtmiLogSessionCsExitComplete @ 0x1409A9424 (TtmiLogSessionCsExitComplete.c)
 */

void __fastcall TtmNotifyLowPowerStateExited(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = TtmpAcquireSessionById(&v4, a1);
  if ( v2 >= 0 )
  {
    TtmiLogSessionCsExitComplete(a1);
    v3 = v4;
    *(_DWORD *)(v4 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v3, 4LL);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyLowPowerStateExited", 3159LL, (unsigned int)v2, (unsigned int)v2);
  }
}
