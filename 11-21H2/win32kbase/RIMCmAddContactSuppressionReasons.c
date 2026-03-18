/*
 * XREFs of RIMCmAddContactSuppressionReasons @ 0x1C01B61C4
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E70E4 (rimApplyPointerDevicePolicies.c)
 *     rimPointerTransitionsPolicyUpdateStateAndApply @ 0x1C00E73C4 (rimPointerTransitionsPolicyUpdateStateAndApply.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01958A0 (RIMSuppressAllActiveContacts.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01AE67C (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C01AEA44 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimLidClosedPolicyUpdateStateAndApply @ 0x1C01B11E4 (rimLidClosedPolicyUpdateStateAndApply.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01B127C (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01B140C (rimOutOfBoundsPolicyUpdateStateAndApply.c)
 * Callees:
 *     ?SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z @ 0x1C01B5E1C (-SuppressContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@KKK_N@Z.c)
 *     RIMCmIsContactSuppressed @ 0x1C01B6958 (RIMCmIsContactSuppressed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmAddContactSuppressionReasons(__int64 a1, unsigned int *a2, unsigned int a3)
{
  int IsContactSuppressed; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  BOOL v10; // ebx
  unsigned int v11; // r14d
  int v12; // r15d
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  IsContactSuppressed = RIMCmIsContactSuppressed(a2);
  v10 = 0;
  v11 = a2[2];
  v12 = IsContactSuppressed;
  if ( (a2[8] & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  a2[2] |= a3;
  if ( !v12 && (unsigned int)RIMCmIsContactSuppressed(a2) )
  {
    v14 = *(_DWORD *)(a1 + 1012);
    if ( !v14 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v7, v9);
      v14 = *(_DWORD *)(a1 + 1012);
    }
    v10 = 1;
    *(_DWORD *)(a1 + 1012) = v14 - 1;
  }
  if ( (a3 & v11) != a3 )
    InputTraceLogging::RIM::SuppressContact(*(const struct RIMDEV **)(a1 + 16), a2[1], a3, a2[2], v10);
  v15 = *(unsigned int *)(a1 + 1012);
  if ( *(_DWORD *)(a1 + 1008) < (unsigned int)v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v7, v9);
  return v10;
}
