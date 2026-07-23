/*
 * XREFs of PopNetInitialize @ 0x140B51D9C
 * Callers:
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     PopInitializeIRTimer @ 0x140384834 (PopInitializeIRTimer.c)
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     RtlInitializeSid @ 0x140782240 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x1407D1940 (RtlLengthRequiredSid.c)
 *     ExSubscribeWnfStateChange @ 0x1407DB000 (ExSubscribeWnfStateChange.c)
 *     PopNetPublishWnfStateUpdate @ 0x14085AFA8 (PopNetPublishWnfStateUpdate.c)
 *     PopTraceStandbyConnectivityUpdate @ 0x14085B008 (PopTraceStandbyConnectivityUpdate.c)
 *     PopNetSetConnectivityConstraint @ 0x140864B38 (PopNetSetConnectivityConstraint.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopNetInitialize(int a1)
{
  int v1; // ecx
  NTSTATUS v2; // edi
  ULONG v4; // eax
  _DWORD *Pool2; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r8
  int ExplicitScope; // [rsp+20h] [rbp-28h]
  int ExplicitScopea; // [rsp+20h] [rbp-28h]
  LOGICAL CheckStamp; // [rsp+30h] [rbp-18h]
  LOGICAL CheckStampa; // [rsp+30h] [rbp-18h]
  char Buffer; // [rsp+50h] [rbp+8h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp+10h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  Buffer = 0;
  if ( a1 )
  {
    if ( a1 == 3 )
    {
      if ( PopNetDeferLogRequest )
        PopTraceStandbyConnectivityUpdate(PopNetStandbyState, PopNetStandbyReason);
      if ( PopEnforceDisconnectedStandby )
      {
        v1 = 2;
      }
      else
      {
        if ( PopNetStandbyStateMask )
        {
LABEL_10:
          ZwUpdateWnfStateData(&WNF_PO_OPPORTUNISTIC_CS, &Buffer, 1u, 0LL, 0LL, 0, 0);
          if ( PopPlatformAoAc && !PopEnforceDisconnectedStandby )
            ExSubscribeWnfStateChange(
              (__int64)&IdentifierAuthority,
              (__int64)&WNF_SEB_SYSTEM_LPE,
              1,
              0,
              (__int64)PopNetWnfLowPowerEpochCallback,
              0LL);
          return 0;
        }
        if ( PopPlatformAoAc )
        {
          if ( !PopNetStandbyStatePublished && !PopNetStandbyState )
            PopNetPublishWnfStateUpdate(1);
          goto LABEL_10;
        }
        v1 = 6;
      }
      PopNetSetConnectivityConstraint(v1);
      goto LABEL_10;
    }
  }
  else
  {
    v4 = RtlLengthRequiredSid(6u);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v4, 0x74654E50u);
    v6 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v2 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(v6, 0x74654E50u);
      return (unsigned int)v2;
    }
    v6[2] = 80;
    v6[3] = 1988685059;
    v6[4] = 1921232356;
    v6[5] = 378231328;
    v6[6] = -1590824699;
    v6[7] = 890457928;
    PopNetBIServiceSid = v6;
    PopInitializeIRTimer(
      (unsigned __int64)&PopNetEvaluationTimer,
      (__int64)PopNetEvaluationTimerCallback,
      v7,
      (__int64)PopNetEvaluationWorkerCallback,
      ExplicitScope,
      0,
      CheckStamp);
    PopInitializeIRTimer(
      (unsigned __int64)&PopNetRefreshTimer,
      (__int64)PopNetRefreshTimerCallback,
      v8,
      (__int64)PopNetRefreshTimerWorkerCallback,
      ExplicitScopea,
      5,
      CheckStampa);
  }
  return 0;
}
