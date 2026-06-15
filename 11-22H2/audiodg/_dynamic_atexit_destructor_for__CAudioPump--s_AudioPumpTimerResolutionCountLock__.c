/*
 * XREFs of _dynamic_atexit_destructor_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__ @ 0x140036EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CAudioPump::s_AudioPumpTimerResolutionCountLock__()
{
  DeleteCriticalSection(&CAudioPump::s_AudioPumpTimerResolutionCountLock);
}
