/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x14036F378
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x14085E760 (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  BootStatDisableFlush = a1;
}
