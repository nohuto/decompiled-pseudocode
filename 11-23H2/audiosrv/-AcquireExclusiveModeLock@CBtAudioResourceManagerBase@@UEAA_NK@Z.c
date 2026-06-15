/*
 * XREFs of ?AcquireExclusiveModeLock@CBtAudioResourceManagerBase@@UEAA_NK@Z @ 0x1800F5830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtAudioResourceManagerBase::AcquireExclusiveModeLock(
        CBtAudioResourceManagerBase *this,
        signed __int32 a2)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)this + 20, a2, 0) == 0;
}
