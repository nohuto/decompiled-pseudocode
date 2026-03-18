/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140ADAD94
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140ADADD4 (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140AE06B4 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x140606C5C (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x140607A98 (ExSetPoolFlags.c)
 */

void VfSettingsApplyMiscellaneousChecks()
{
  int v0; // ecx

  v0 = (VfRuleClasses & 0x400000) == 0 ? 0x206 : 0;
  if ( (MmVerifierData & 0x800) != 0 )
    ExSetPoolFlags(v0);
  else
    ExClearPoolFlags(v0);
}
