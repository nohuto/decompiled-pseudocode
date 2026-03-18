/*
 * XREFs of ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C4E70
 * Callers:
 *     W32CalloutDispatch @ 0x1C00DE840 (W32CalloutDispatch.c)
 * Callees:
 *     <none>
 */

void EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(void)
{
  if ( EnterLeaveCritMitRitHandOffHazard::_slSemWaiters )
  {
    KeReleaseSemaphore(
      (PRKSEMAPHORE)WPP_MAIN_CB.Dpc.DpcListEntry.Next,
      0,
      EnterLeaveCritMitRitHandOffHazard::_slSemWaiters,
      0);
    EnterLeaveCritMitRitHandOffHazard::_slSemWaiters = 0;
  }
}
