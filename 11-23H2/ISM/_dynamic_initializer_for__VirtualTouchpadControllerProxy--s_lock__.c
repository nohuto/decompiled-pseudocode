/*
 * XREFs of _dynamic_initializer_for__VirtualTouchpadControllerProxy::s_lock__ @ 0x180001FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__VirtualTouchpadControllerProxy::s_lock__()
{
  InitializeCriticalSectionEx(&VirtualTouchpadControllerProxy::s_lock, 0, 0);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__VirtualTouchpadControllerProxy::s_lock__);
}
