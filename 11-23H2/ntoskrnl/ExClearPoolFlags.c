/*
 * XREFs of ExClearPoolFlags @ 0x1406071AC
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140ACA798 (VfDriverRemoveDifVerification.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140ADAD84 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViPtPluginUnload @ 0x140ADF1D0 (ViPtPluginUnload.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
