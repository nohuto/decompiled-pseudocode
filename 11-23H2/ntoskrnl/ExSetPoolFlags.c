/*
 * XREFs of ExSetPoolFlags @ 0x140607FE8
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D08 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140AC2E60 (VfInitVerifierComponents.c)
 *     VfDriverApplyDifVerification @ 0x140ACA2F8 (VfDriverApplyDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140ADAD84 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViIovInitialization @ 0x140ADC378 (ViIovInitialization.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADEE4C (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
