/*
 * XREFs of ExClearPoolFlags @ 0x140606C5C
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140ACA7A8 (VfDriverRemoveDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140ADAD94 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViPtPluginUnload @ 0x140ADF1E0 (ViPtPluginUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
