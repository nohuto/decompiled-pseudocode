/*
 * XREFs of _dynamic_initializer_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__ @ 0x1400012E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__()
{
  InitializeCriticalSectionEx(&CAudioPump::s_AudioPumpTimerResolutionCountLock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__);
}
