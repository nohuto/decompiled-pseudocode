/*
 * XREFs of _dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock__ @ 0x180001880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock__()
{
  InitializeCriticalSectionEx(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock__);
}
