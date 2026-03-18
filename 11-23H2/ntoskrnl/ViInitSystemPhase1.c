/*
 * XREFs of ViInitSystemPhase1 @ 0x140B532E4
 * Callers:
 *     VerifierInitSystem @ 0x140B53244 (VerifierInitSystem.c)
 * Callees:
 *     VfIsRuleClassEnabled @ 0x140ABD450 (VfIsRuleClassEnabled.c)
 *     VfPendingInitPhase1 @ 0x140AD1890 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase1 @ 0x140AD5ED0 (VfFaultsInitPhase1.c)
 *     VfPoolInitPhase1 @ 0x140ADA148 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140ADAEB8 (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

char ViInitSystemPhase1()
{
  char result; // al

  if ( ViVerifierEnabled )
  {
    VfPoolInitPhase1();
    VfSettingsMiscellaneousChecksInitPhase1();
    VfPendingInitPhase1();
  }
  result = VfIsRuleClassEnabled(2u);
  if ( result )
    result = VfFaultsInitPhase1();
  if ( ViImageExecutionOptions == 1 )
  {
    result = MmWriteableSharedUserData;
    _InterlockedOr((volatile signed __int32 *)(MmWriteableSharedUserData + 928), 1u);
  }
  return result;
}
