/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x140883720
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403D59F0 (PopIdlePhaseWatchdogCallback.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x14058A800 (PopFxEnforceDirectedPowerTransition.c)
 *     PopUserPresentSet @ 0x14058E454 (PopUserPresentSet.c)
 *     PopPowerButtonWorkCallback @ 0x1405995E0 (PopPowerButtonWorkCallback.c)
 *     CarLiveDump @ 0x1405D6000 (CarLiveDump.c)
 *     ExHandleLogBadReference @ 0x140606F78 (ExHandleLogBadReference.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1406104E0 (ExpResourceTimeoutCaptureLiveDump.c)
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 *     PopWin32CalloutWatchdogCallback @ 0x14099BE70 (PopWin32CalloutWatchdogCallback.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x14099C59C (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1409A1224 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A13AC (PopDripsWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x1409A35D0 (TtmpCalloutWatchdogCallback.c)
 *     ExpIoPoolDeadlockWorker @ 0x140A00A10 (ExpIoPoolDeadlockWorker.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B3D4 (MiForceCrashForInvalidAccess.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE7F8 (VfPtGenerateTraceInformation.c)
 * Callees:
 *     DbgkWerCaptureLiveKernelDump2 @ 0x1408837A0 (DbgkWerCaptureLiveKernelDump2.c)
 */

__int64 __fastcall DbgkWerCaptureLiveKernelDump(
        const wchar_t *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  _DWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+5Ch] [rbp-1Ch]
  int v15; // [rsp+64h] [rbp-14h]

  v14 = 0LL;
  v15 = 0;
  v10[0] = 1;
  v10[1] = 40;
  v11 = a8;
  v12 = a7;
  v13 = a9;
  return DbgkWerCaptureLiveKernelDump2(a1, a5, a6, (__int64)v10);
}
