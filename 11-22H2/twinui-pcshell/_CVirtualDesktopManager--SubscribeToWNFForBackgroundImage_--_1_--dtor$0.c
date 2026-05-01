/*
 * XREFs of _CVirtualDesktopManager::SubscribeToWNFForBackgroundImage_::_1_::dtor$0 @ 0x1802B848F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::SubscribeToWNFForBackgroundImage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 32));
}
