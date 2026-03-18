/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x1409A4358
 * Callers:
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140993BD4 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x1409A4B54 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionById @ 0x1409A4FE0 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A83F4 (TtmiLogError.c)
 *     TtmiLogSessionCsExitComplete @ 0x1409A92D4 (TtmiLogSessionCsExitComplete.c)
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
