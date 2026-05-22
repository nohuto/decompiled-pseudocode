/*
 * XREFs of CallOnThreadExit::_dynamic_atexit_destructor_for__s_mutex__ @ 0x180083C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void CallOnThreadExit::_dynamic_atexit_destructor_for__s_mutex__()
{
  _Mtx_destroy_in_situ((_Mtx_t)&unk_1802780E0);
}
