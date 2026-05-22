/*
 * XREFs of _PenDevice::PenDevice_::_1_::dtor$1 @ 0x18018987F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenDevice::PenDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>(*(_QWORD *)(a2 + 48) + 80LL);
}
