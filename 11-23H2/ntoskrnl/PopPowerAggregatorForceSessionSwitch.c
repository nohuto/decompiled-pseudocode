/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x140993A44
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403848D0 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x1409928C0 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x140997C70 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140411580 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407A95C4 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v3 = 0;
  if ( (_DWORD)xmmword_140C3AA50 == 1 )
  {
    v2 = 3LL;
    if ( a1 != 4 && BYTE8(xmmword_140C3AA60) )
      v2 = 2LL;
    goto LABEL_12;
  }
  if ( (_DWORD)xmmword_140C3AA50 == 4 && BYTE8(xmmword_140C3AA60) && ((a1 - 43) & 0xFFFFFFFC) == 0 && a1 != 44 )
  {
    v2 = 10LL;
LABEL_12:
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v2, (__int64)&v3, 0, a1);
  }
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
