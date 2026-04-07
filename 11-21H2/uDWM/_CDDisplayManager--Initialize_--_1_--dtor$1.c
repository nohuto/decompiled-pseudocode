/*
 * XREFs of _CDDisplayManager::Initialize_::_1_::dtor$1 @ 0x1800AF0BD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayManager::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
