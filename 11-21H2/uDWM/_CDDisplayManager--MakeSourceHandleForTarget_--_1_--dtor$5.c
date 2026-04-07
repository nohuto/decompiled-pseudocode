/*
 * XREFs of _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$5 @ 0x1800AF5EA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
