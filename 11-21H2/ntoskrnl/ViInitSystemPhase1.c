/*
 * XREFs of ViInitSystemPhase1 @ 0x140B27E30
 * Callers:
 *     VerifierInitSystem @ 0x140B27AFC (VerifierInitSystem.c)
 * Callees:
 *     VfIsRuleClassEnabled @ 0x140A7C590 (VfIsRuleClassEnabled.c)
 *     VfPendingInitPhase1 @ 0x140A90ED8 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase1 @ 0x140A96A04 (VfFaultsInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140A9A2E8 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140A9B0C8 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

__int64 ViInitSystemPhase1()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx

  if ( ViVerifierEnabled )
  {
    VfPoolInitPhase1();
    VfSettingsMiscellaneousChecksInitPhase1(v2, v1);
    VfPendingInitPhase1();
  }
  if ( VfIsRuleClassEnabled(2u) )
    VfFaultsInitPhase1();
  result = (unsigned int)ViImageExecutionOptions;
  if ( ViImageExecutionOptions == 1 )
    _InterlockedOr((volatile signed __int32 *)0xFFFFF780000003A0LL, 1u);
  return result;
}
