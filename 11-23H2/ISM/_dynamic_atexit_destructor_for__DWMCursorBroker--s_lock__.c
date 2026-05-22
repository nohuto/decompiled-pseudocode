/*
 * XREFs of _dynamic_atexit_destructor_for__DWMCursorBroker::s_lock__ @ 0x1800702D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__DWMCursorBroker::s_lock__()
{
  _Mtx_destroy_in_situ((_Mtx_t)&DWMCursorBroker::s_lock);
}
