/*
 * XREFs of ?ReleaseAllWaiters@EnterLeaveCritMitRitHandOffHazard@@SAXXZ @ 0x1C00C5A80
 * Callers:
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 * Callees:
 *     <none>
 */

void EnterLeaveCritMitRitHandOffHazard::ReleaseAllWaiters(void)
{
  if ( EnterLeaveCritMitRitHandOffHazard::_slSemWaiters )
  {
    KeReleaseSemaphore(
      (PRKSEMAPHORE)EnterLeaveCritMitRitHandOffHazard::_spkSem,
      0,
      EnterLeaveCritMitRitHandOffHazard::_slSemWaiters,
      0);
    EnterLeaveCritMitRitHandOffHazard::_slSemWaiters = 0;
  }
}
