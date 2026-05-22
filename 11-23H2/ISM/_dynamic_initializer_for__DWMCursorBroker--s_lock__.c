/*
 * XREFs of _dynamic_initializer_for__DWMCursorBroker::s_lock__ @ 0x180002260
 * Callers:
 *     <none>
 * Callees:
 *     ??0recursive_mutex@std@@QEAA@XZ @ 0x180054068 (--0recursive_mutex@std@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__DWMCursorBroker::s_lock__(std::recursive_mutex *a1)
{
  std::recursive_mutex::recursive_mutex(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__DWMCursorBroker::s_lock__);
}
