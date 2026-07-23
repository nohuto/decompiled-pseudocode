/*
 * XREFs of PopFxDerefAndCompleteDirectedPowerTransition @ 0x14058A068
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x14028D2E0 (PopFxHandleReportDevicePoweredOn.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x14028E24C (PopFxNotifyPreDIrpCompletion.c)
 *     PoFxCompleteDirectedPowerDown @ 0x1405883A0 (PoFxCompleteDirectedPowerDown.c)
 * Callees:
 *     PopFxBugCheck @ 0x1405890D0 (PopFxBugCheck.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140589B8C (PopFxCompleteDirectedPowerTransition.c)
 */

LONG __fastcall PopFxDerefAndCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, char a2)
{
  LONG result; // eax

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 824), 0, 0) & 0x20) == 0 )
    PopFxBugCheck(0x910uLL, 1uLL, BugCheckParameter3, 0LL);
  result = _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter3 + 1160));
  if ( !result )
    return PopFxCompleteDirectedPowerTransition(BugCheckParameter3, a2);
  if ( result < 0 )
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  return result;
}
