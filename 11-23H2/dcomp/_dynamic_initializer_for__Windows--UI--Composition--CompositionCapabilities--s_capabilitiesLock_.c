/*
 * XREFs of _dynamic_initializer_for__Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock__ @ 0x180001820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock__()
{
  InitializeCriticalSection(&Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock__);
}
