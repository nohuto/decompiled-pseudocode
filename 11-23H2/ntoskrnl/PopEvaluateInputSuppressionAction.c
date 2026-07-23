/*
 * XREFs of PopEvaluateInputSuppressionAction @ 0x1409944C4
 * Callers:
 *     PopExternalMonitorUpdatedWorker @ 0x1407A8E30 (PopExternalMonitorUpdatedWorker.c)
 *     PopBroadcastInputSuppressionCallback @ 0x140875DE0 (PopBroadcastInputSuppressionCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     PopBroadcastSessionInfo @ 0x140825214 (PopBroadcastSessionInfo.c)
 *     PopTraceInputSuppressionActionUpdate @ 0x140992A10 (PopTraceInputSuppressionActionUpdate.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void PopEvaluateInputSuppressionAction()
{
  int v0; // ecx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // bp
  bool v6; // di
  bool v7; // si
  char v8; // r14
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *ExplicitScope; // [rsp+20h] [rbp-68h]
  __int64 MatchingChangeStamp; // [rsp+28h] [rbp-60h]
  WNF_CHANGE_STAMP MatchingChangeStampa; // [rsp+28h] [rbp-60h]
  BOOL Buffer; // [rsp+40h] [rbp-48h] BYREF
  GUID v18; // [rsp+48h] [rbp-40h] BYREF
  BOOL v19; // [rsp+58h] [rbp-30h]

  Buffer = 0;
  v18 = 0LL;
  v19 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopInputSuppressionLock);
  PopAcquirePolicyLock(v0);
  v5 = PopConsoleExternalDisplayConnected;
  v6 = PopLidOpened == 0;
  v7 = dword_140C3D96C == 1;
  v8 = PopConsoleDisplayState == 0;
  if ( PopErrataReportingIncorrectLidState
    || !PopIgnoreLidStateForInputSuppression && PopLidOpened
    || dword_140C3D96C != 1
    || PopConsoleExternalDisplayConnected
    || (v9 = 1, PopConsoleDisplayState) )
  {
    v9 = 0;
  }
  if ( !PopEnableInputSuppression && v9 == 1 )
    v9 = 2;
  PopReleasePolicyLock(v2, v1, v3, v4, ExplicitScope, MatchingChangeStamp);
  if ( PopInputSuppressionRequired != v9 )
  {
    LOBYTE(v13) = v5;
    LOBYTE(v12) = v7;
    LOBYTE(v10) = v6;
    PopInputSuppressionRequired = v9;
    PopTraceInputSuppressionActionUpdate(v11, v10, v12, v13, v8, MatchingChangeStampa, v9);
    ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION_EX, &PopInputSuppressionRequired, 4u, 0LL, 0LL, 0, 0);
    if ( PopEnableInputSuppression )
    {
      if ( (unsigned int)PopInputSuppressionRequired <= 1 )
        _InterlockedIncrement(&PopInputSuppressionActionCount);
      Buffer = PopInputSuppressionRequired == 1;
      ZwUpdateWnfStateData(&WNF_PO_INPUT_SUPPRESS_NOTIFICATION, &Buffer, 4u, 0LL, 0LL, 0, 0);
      v19 = Buffer;
      v18 = GUID_INPUT_SUPPRESS_REQUESTED;
      PopBroadcastSessionInfo(0, 20, (__int64)&v18);
    }
  }
  PopReleaseRwLock(&PopInputSuppressionLock);
}
