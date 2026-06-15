/*
 * XREFs of ?AcquireExclusiveModeLock@CBtAudioResourceManager@@UEAA_NK@Z @ 0x180113A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManager::AcquireExclusiveModeLock(CBtAudioResourceManager *this, signed __int32 a2)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 14, a2, 0) == 0;
}
