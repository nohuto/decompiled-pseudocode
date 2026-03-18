/*
 * XREFs of ExSetPoolFlags @ 0x140607A98
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D18 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140AC2E70 (VfInitVerifierComponents.c)
 *     VfDriverApplyDifVerification @ 0x140ACA308 (VfDriverApplyDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140ADAD94 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViIovInitialization @ 0x140ADC388 (ViIovInitialization.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADEE5C (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
