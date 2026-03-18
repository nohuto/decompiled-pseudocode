/*
 * XREFs of RtlBootStatusDisableFlushing @ 0x14036F1D8
 * Callers:
 *     PopRecordLongPowerButtonPressDetected @ 0x14085E520 (PopRecordLongPowerButtonPressDetected.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlBootStatusDisableFlushing(char a1)
{
  BootStatDisableFlush = a1;
}
