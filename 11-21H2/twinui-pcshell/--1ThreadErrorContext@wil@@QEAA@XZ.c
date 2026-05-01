/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x180166A00
 * Callers:
 *     _CToastCenterExperienceManager::OnShellReady_::_1_::dtor$10 @ 0x18021A6B4 (_CToastCenterExperienceManager--OnShellReady_--_1_--dtor$10.c)
 *     _Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start_::_1_::dtor$3 @ 0x18021CFCD (_Windows--Internal--Shell--TaskFlow--DataEngine--AppViewListener--Start_--_1_--dtor$3.c)
 *     _CDesktopPositioner::_GetRestorePosition_::_1_::dtor$6 @ 0x18021DBA8 (_CDesktopPositioner--_GetRestorePosition_--_1_--dtor$6.c)
 *     _CToastCenterExperienceManager::Close_::_1_::dtor$0 @ 0x18022337A (_CToastCenterExperienceManager--Close_--_1_--dtor$0.c)
 *     _CToastCenterExperienceManager::RaiseToastPeekRegionClickedEvent_::_1_::dtor$0 @ 0x180364CAB (_CToastCenterExperienceManager--RaiseToastPeekRegionClickedEvent_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
