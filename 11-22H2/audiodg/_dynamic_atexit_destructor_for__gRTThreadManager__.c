/*
 * XREFs of _dynamic_atexit_destructor_for__gRTThreadManager__ @ 0x140036F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__gRTThreadManager__()
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&gRTThreadManager);
}
