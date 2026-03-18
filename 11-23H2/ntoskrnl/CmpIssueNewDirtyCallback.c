/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1407E426C
 * Callers:
 *     HvpMarkDirty @ 0x140747110 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x14087482C (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x14058D794 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
