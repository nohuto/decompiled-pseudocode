/*
 * XREFs of _dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_csLock__ @ 0x1802C7B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__GameDVR_OutputDebug::s_csLock__()
{
  DeleteCriticalSection(&GameDVR_OutputDebug::s_csLock);
}
