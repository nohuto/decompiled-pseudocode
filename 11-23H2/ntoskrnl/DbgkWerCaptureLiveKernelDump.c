/*
 * XREFs of DbgkWerCaptureLiveKernelDump @ 0x1408834E0
 * Callers:
 *     PopIdlePhaseWatchdogCallback @ 0x1403D5810 (PopIdlePhaseWatchdogCallback.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x14058A310 (PopFxEnforceDirectedPowerTransition.c)
 *     PopUserPresentSet @ 0x14058DF64 (PopUserPresentSet.c)
 *     PopPowerButtonWorkCallback @ 0x1405990F0 (PopPowerButtonWorkCallback.c)
 *     CarLiveDump @ 0x1405D5A90 (CarLiveDump.c)
 *     ExHandleLogBadReference @ 0x140606A28 (ExHandleLogBadReference.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14060FF90 (ExpResourceTimeoutCaptureLiveDump.c)
 *     NtPowerInformation @ 0x140783F20 (NtPowerInformation.c)
 *     PopWin32CalloutWatchdogCallback @ 0x14099BC70 (PopWin32CalloutWatchdogCallback.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x14099C39C (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1409A1024 (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x1409A11AC (PopDripsWatchdogTakeAction.c)
 *     TtmpCalloutWatchdogCallback @ 0x1409A33D0 (TtmpCalloutWatchdogCallback.c)
 *     ExpIoPoolDeadlockWorker @ 0x140A00780 (ExpIoPoolDeadlockWorker.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B124 (MiForceCrashForInvalidAccess.c)
 *     VfPtGenerateTraceInformation @ 0x140ADE808 (VfPtGenerateTraceInformation.c)
 * Callees:
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140883560 (DbgkWerCaptureLiveKernelDump2.c)
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
