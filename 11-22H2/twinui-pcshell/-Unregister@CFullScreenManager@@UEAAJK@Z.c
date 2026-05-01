/*
 * XREFs of ?Unregister@CFullScreenManager@@UEAAJK@Z @ 0x1803F16E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFullScreenManager::Unregister(RTL_SRWLOCK *this, int a2)
{
  return CGITRegistrationList::Unregister(this + 5, a2);
}
