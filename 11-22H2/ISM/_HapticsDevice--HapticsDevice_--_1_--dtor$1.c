/*
 * XREFs of _HapticsDevice::HapticsDevice_::_1_::dtor$1 @ 0x1801B8845
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HapticsDevice::HapticsDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>(*(_QWORD *)(a2 + 48) + 72LL);
}
