/*
 * XREFs of _CGraphicsDeviceManager::ReleaseGraphicsDevice_::_1_::dtor$0 @ 0x1800BD98D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphicsDeviceManager::ReleaseGraphicsDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
