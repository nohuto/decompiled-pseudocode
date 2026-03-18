/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x1409942C4
 * Callers:
 *     PopExternalMonitorUpdatedWorker @ 0x1407A8C40 (PopExternalMonitorUpdatedWorker.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140875BA0 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041E920 (ZwUpdateWnfStateData.c)
 *     PopBroadcastSessionInfo @ 0x140824F14 (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x140992810 (PopTraceInputSuppressionActionUpdate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void PopEvaluateInputSuppressionAction()
{
  int v0; // ecx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // bp
  bool v5; // di
  bool v6; // si
  char v7; // r14
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // [rsp+28h] [rbp-60h]
  BOOL v14; // [rsp+40h] [rbp-48h] BYREF
  GUID v15; // [rsp+48h] [rbp-40h] BYREF
  BOOL v16; // [rsp+58h] [rbp-30h]

  v14 = 0;
  v15 = 0LL;
  v16 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
  PopAcquirePolicyLock(v0);
  v4 = PopConsoleExternalDisplayConnected;
  v5 = PopLidOpened == 0;
  v6 = dword_140C3D86C == 1;
  v7 = PopConsoleDisplayState == 0;
  if ( PopErrataReportingIncorrectLidState
    || !PopIgnoreLidStateForInputSuppression && PopLidOpened
    || dword_140C3D86C != 1
    || PopConsoleExternalDisplayConnected
    || (v8 = 1, PopConsoleDisplayState) )
  {
    v8 = 0;
  }
  if ( !PopEnableInputSuppression && v8 == 1 )
    v8 = 2;
  PopReleasePolicyLock(v2, v1, v3);
  if ( PopInputSuppressionRequired != v8 )
  {
    LOBYTE(v12) = v4;
    LOBYTE(v11) = v6;
    LOBYTE(v9) = v5;
    PopInputSuppressionRequired = v8;
    PopTraceInputSuppressionActionUpdate(v10, v9, v11, v12, v7, v13, v8);
    ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, (__int64)&PopInputSuppressionRequired);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&PopInputSuppressionActionCount);
      v14 = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData((__int64)&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, (__int64)&v14);
      v16 = v14;
      v15 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v15);
    }
  }
  PopReleaseRwLock(&PopInputSuppressionLock);
}
