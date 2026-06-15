/*
 * XREFs of _IsFixedFormatApo_::_1_::dtor$0 @ 0x18014A8B3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFixedFormatApo_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>::~com_ptr_t<ISessionInternalEvents,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
