/*
 * XREFs of PopUpdateSystemIdleContext @ 0x140819D40
 * Callers:
 *     PopInitSIdle @ 0x140819CB8 (PopInitSIdle.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PopIdleCancelAoAcDozeS4Timer @ 0x140369100 (PopIdleCancelAoAcDozeS4Timer.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405DC298 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopPulseSystemIdleEvent @ 0x1406E8E9C (PopPulseSystemIdleEvent.c)
 *     PopFilterCapabilities @ 0x1407628C0 (PopFilterCapabilities.c)
 *     PopAcquireAdaptiveLock @ 0x1407EF098 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1407EF120 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSystemIdleContextUpdate @ 0x140819F40 (PopDiagTraceSystemIdleContextUpdate.c)
 *     PopIsDozeSupported @ 0x140989788 (PopIsDozeSupported.c)
 */

void __fastcall PopUpdateSystemIdleContext(int a1)
{
  char v2; // bp
  int v3; // ebx
  int v4; // r14d
  int v5; // r15d
  int v6; // edi
  unsigned __int64 v7; // r12
  char v8; // cl
  int v9; // ebx
  int v10; // r9d
  int v11; // [rsp+30h] [rbp-78h]
  _BYTE v12[80]; // [rsp+40h] [rbp-68h] BYREF

  memset(v12, 0, 0x4CuLL);
  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v11);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
  v2 = 0;
  if ( (PopFullWake & 3) != 0 )
  {
    PopAcquireAdaptiveLock(1);
    if ( !(_BYTE)PopAdaptiveBootContext || (BYTE8(PopAdaptiveBootContext) & 8) == 0 )
    {
      PopReleaseAdaptiveLock();
      goto LABEL_6;
    }
    PopReleaseAdaptiveLock();
  }
  v2 = 1;
LABEL_6:
  v3 = PopSimulate;
  v4 = PopSystemIdleContext;
  v5 = dword_140C095F4;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  PopFilterCapabilities(&PopCapabilities, (__int64)v12);
  v8 = 0;
  if ( (v3 & 0x1000000) == 0 )
    v8 = v2;
  if ( v8 )
  {
    v6 = dword_140C232E0;
    if ( dword_140C232E0 )
    {
      v9 = 4;
    }
    else
    {
      v9 = 5;
      v6 = 0;
    }
  }
  else
  {
    if ( PopPlatformAoAc )
    {
      if ( *((_DWORD *)PopPolicy + 15) )
        v6 = *((_DWORD *)PopPolicy + 15);
    }
    else if ( *((_DWORD *)PopPolicy + 15) && (v12[3] || v12[4] || v12[5]) )
    {
      v6 = *((_DWORD *)PopPolicy + 15);
    }
    else if ( *((_DWORD *)PopPolicy + 22) && (unsigned __int8)PopIsDozeSupported(v12) )
    {
      v6 = v10;
    }
    v9 = v6 != 0 ? 1 : 5;
  }
  if ( a1 == 1 || a1 == 4 )
    PopPulseSystemIdleEvent(3u);
  if ( a1 == 3 )
  {
    PopIdleCancelAoAcDozeS4Timer(6u);
    if ( byte_140C22731 )
      PopIdleArmAoAcDozeS4Timer();
  }
  PopSystemIdleContext = v9;
  dword_140C095F4 = v6;
  qword_140C09720 = v7;
  dword_140C09728 = a1;
  dword_140C0972C = v4;
  dword_140C09730 = v5;
  PopDiagTraceSystemIdleContextUpdate(a1, v4, v5, v9, v6);
  PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
}
