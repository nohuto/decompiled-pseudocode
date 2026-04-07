/*
 * XREFs of _CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor$2 @ 0x180066082
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphicsDeviceManager::InitializeGraphicsDevice_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>::~com_ptr_t<Windows::Devices::Display::Core::IDisplayState,wil::err_returncode_policy>((__int64 *)(a2 + 168));
}
