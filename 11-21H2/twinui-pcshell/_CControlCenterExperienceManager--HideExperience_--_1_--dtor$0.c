/*
 * XREFs of _CControlCenterExperienceManager::HideExperience_::_1_::dtor$0 @ 0x18021A6EA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CControlCenterExperienceManager::HideExperience_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a2 + 64));
}
