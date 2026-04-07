/*
 * XREFs of _CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor$4 @ 0x1800AF5DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayManager::MakeSourceHandleForTarget_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
