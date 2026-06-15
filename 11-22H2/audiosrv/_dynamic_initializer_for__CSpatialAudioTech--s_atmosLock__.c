/*
 * XREFs of _dynamic_initializer_for__CSpatialAudioTech::s_atmosLock__ @ 0x180001730
 * Callers:
 *     <none>
 * Callees:
 *     ??0CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18005598C (--0CriticalSection@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

int dynamic_initializer_for__CSpatialAudioTech::s_atmosLock__()
{
  Microsoft::WRL::Wrappers::CriticalSection::CriticalSection((Microsoft::WRL::Wrappers::CriticalSection *)&CSpatialAudioTech::s_atmosLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CSpatialAudioTech::s_atmosLock__);
}
