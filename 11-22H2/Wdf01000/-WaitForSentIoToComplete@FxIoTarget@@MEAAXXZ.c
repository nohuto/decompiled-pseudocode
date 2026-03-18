/*
 * XREFs of ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x1C0054360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxIoTarget::WaitForSentIoToComplete(FxIoTarget *this)
{
  KeEnterCriticalRegion();
  KeWaitForSingleObject(&this->m_SentIoEvent, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
}
