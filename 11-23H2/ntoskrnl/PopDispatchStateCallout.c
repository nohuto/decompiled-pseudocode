/*
 * XREFs of PopDispatchStateCallout @ 0x140682AC8
 * Callers:
 *     PoPowerOffMonitor @ 0x14058F7B0 (PoPowerOffMonitor.c)
 *     PopPrepareSleep @ 0x14058F96C (PopPrepareSleep.c)
 *     PoBlockConsoleSwitch @ 0x140682A78 (PoBlockConsoleSwitch.c)
 *     PopReleaseAdaptiveLock @ 0x1407EC218 (PopReleaseAdaptiveLock.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x140983BF4 (PopDirectedDripsNotifyAppsAndServices.c)
 *     PoEndPartitionReplace @ 0x140989768 (PoEndPartitionReplace.c)
 *     PoEndPowerStateTasks @ 0x140989790 (PoEndPowerStateTasks.c)
 *     PoStartPartitionReplace @ 0x1409898A8 (PoStartPartitionReplace.c)
 *     PoStartPowerStateTasks @ 0x1409898E4 (PoStartPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x140989904 (PoUnblockConsoleSwitch.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopResumeApps @ 0x14098A634 (PopResumeApps.c)
 *     PopResumeServices @ 0x14098A6AC (PopResumeServices.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A728 (PopSendSuspendResumeApplicationNotification.c)
 *     PopSuspendApps @ 0x14098AC14 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14098AC68 (PopSuspendServices.c)
 *     PopBlockSessionSwitch @ 0x140997EF0 (PopBlockSessionSwitch.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140211EDC (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopDispatchStateCallout(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-40h]
  unsigned int v8; // [rsp+30h] [rbp-30h] BYREF
  int *v9; // [rsp+38h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-20h]
  int v11; // [rsp+44h] [rbp-1Ch]
  _DWORD v12[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v11 = 0;
    v12[0] = v6;
    v12[1] = a1[2];
    v12[2] = a1[3];
    v12[3] = a1[4];
    v9 = v12;
    v10 = 16;
    EtwTraceKernelEvent((int)&v9, 1, 0x80008000, 4648, 4200450);
  }
  v4 = PopInvokeWin32Callout(4LL, a1, 2 - (unsigned int)(a2 != 0), a2 & -(__int64)(a2 != 0), v7);
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
  {
    v11 = 0;
    v9 = (int *)&v8;
    v8 = v4;
    v10 = 4;
    EtwTraceKernelEvent((int)&v9, 1, 0x80008000, 4649, 4200450);
  }
  return v4;
}
