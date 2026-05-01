/*
 * XREFs of _Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Start_::_1_::dtor$0 @ 0x1804A6C4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Start_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 72));
}
