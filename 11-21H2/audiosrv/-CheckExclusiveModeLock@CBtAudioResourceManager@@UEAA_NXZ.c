/*
 * XREFs of ?CheckExclusiveModeLock@CBtAudioResourceManager@@UEAA_NXZ @ 0x180113BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManager::CheckExclusiveModeLock(CBtAudioResourceManager *this)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 0, 0) != 0;
}
