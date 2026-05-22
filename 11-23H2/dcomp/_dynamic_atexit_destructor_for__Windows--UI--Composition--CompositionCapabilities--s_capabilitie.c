/*
 * XREFs of _dynamic_atexit_destructor_for__Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock__ @ 0x1800B2210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock__()
{
  DeleteCriticalSection(&Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock);
}
