/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x1801AE3FC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1 @ 0x18025CD20 (winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--InitializeAsync$_Resume.c)
 *     _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x18025D1CE (_winrt--Windows--Internal--Shell--implementation--DiscoverabilityManager--Initializ_ea_18025D1CE.c)
 *     _CToastCenterExperienceManager::OnShellReady_::_1_::dtor$11 @ 0x1802BB17C (_CToastCenterExperienceManager--OnShellReady_--_1_--dtor$11.c)
 *     _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$6 @ 0x1802C2790 (_CDesktopPositioner--_GetRestorePosition_--_1_--dtor$6.c)
 *     _CToastCenterExperienceManager::Close_::_1_::dtor$0 @ 0x1802C3FAA (_CToastCenterExperienceManager--Close_--_1_--dtor$0.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start_::_1_::dtor$3 @ 0x1802D65DF (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--Start_--_1_--dtor$3.c)
 *     _CToastCenterExperienceManager::RaiseToastPeekRegionClickedEvent_::_1_::dtor$0 @ 0x18043929D (_CToastCenterExperienceManager--RaiseToastPeekRegionClickedEvent_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
