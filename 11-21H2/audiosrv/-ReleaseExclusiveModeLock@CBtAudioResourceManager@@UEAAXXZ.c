/*
 * XREFs of ?ReleaseExclusiveModeLock@CBtAudioResourceManager@@UEAAXXZ @ 0x18003BE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManager::ReleaseExclusiveModeLock(CBtAudioResourceManager *this)
{
  _InterlockedExchange((volatile __int32 *)this + 14, 0);
}
