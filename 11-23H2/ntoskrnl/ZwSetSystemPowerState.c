/*
 * XREFs of ZwSetSystemPowerState @ 0x14041E4A0
 * Callers:
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetSystemPowerState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
