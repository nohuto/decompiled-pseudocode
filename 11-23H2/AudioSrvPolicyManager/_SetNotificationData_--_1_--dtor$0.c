/*
 * XREFs of _SetNotificationData_::_1_::dtor$0 @ 0x1800499DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SetNotificationData_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>((void **)(a2 + 96));
}
