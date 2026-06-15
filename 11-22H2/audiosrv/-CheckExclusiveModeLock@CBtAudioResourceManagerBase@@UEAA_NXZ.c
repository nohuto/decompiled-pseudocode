/*
 * XREFs of ?CheckExclusiveModeLock@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800F5B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManagerBase::CheckExclusiveModeLock(CBtAudioResourceManagerBase *this)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 20, 0, 0) != 0;
}
