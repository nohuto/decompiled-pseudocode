/*
 * XREFs of ?ReleaseExclusiveModeLock@CBtAudioResourceManagerBase@@UEAAXXZ @ 0x18004D780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBtAudioResourceManagerBase::ReleaseExclusiveModeLock(CBtAudioResourceManagerBase *this)
{
  _InterlockedExchange((volatile __int32 *)this + 20, 0);
}
