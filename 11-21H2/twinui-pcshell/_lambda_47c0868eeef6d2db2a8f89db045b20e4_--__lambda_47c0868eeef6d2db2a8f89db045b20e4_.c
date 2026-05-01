/*
 * XREFs of _lambda_47c0868eeef6d2db2a8f89db045b20e4_::__lambda_47c0868eeef6d2db2a8f89db045b20e4_ @ 0x180191D70
 * Callers:
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004D9FC (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?HideExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x18004DAFC (-HideExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ @ 0x18004DBD8 (-OnVisibilityChanged@CControlCenterExperienceManager@@AEAAXXZ.c)
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x18004DD9C (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     __lambda_9d3043a0a526c8b68512f884d1ed5c9d_::operator()_::_1_::dtor$12 @ 0x180194676 (__lambda_9d3043a0a526c8b68512f884d1ed5c9d_--operator()_--_1_--dtor$12.c)
 *     __lambda_9d3043a0a526c8b68512f884d1ed5c9d_::operator()_::_1_::dtor$25 @ 0x18019468E (__lambda_9d3043a0a526c8b68512f884d1ed5c9d_--operator()_--_1_--dtor$25.c)
 *     _Win32AppStateManager::TerminateApp_::_1_::dtor$3 @ 0x180568B25 (_Win32AppStateManager--TerminateApp_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_47c0868eeef6d2db2a8f89db045b20e4_::__lambda_47c0868eeef6d2db2a8f89db045b20e4_(__int64 a1)
{
  return wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)(a1 + 8));
}
