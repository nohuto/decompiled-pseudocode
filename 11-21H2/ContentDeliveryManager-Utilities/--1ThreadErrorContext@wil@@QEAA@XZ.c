/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x1800297AC
 * Callers:
 *     _ContentManagement::AppManager::UninstallApp_::_1_::dtor$0 @ 0x1800EEC93 (_ContentManagement--AppManager--UninstallApp_--_1_--dtor$0.c)
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x1800EED11 (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 *     _ContentManagement::AppManager::StartProductInstallWithOverrides_::_1_::dtor$0 @ 0x1800F1E39 (_ContentManagement--AppManager--StartProductInstallWithOverrides_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
