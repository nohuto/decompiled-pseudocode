/*
 * XREFs of ??1ThreadErrorContext@wil@@QEAA@XZ @ 0x18002C7A0
 * Callers:
 *     _ContentManagement::AppManager::UninstallApp_::_1_::dtor$0 @ 0x1800D5AA2 (_ContentManagement--AppManager--UninstallApp_--_1_--dtor$0.c)
 *     _ContentManagement::AppManager::StartProductInstall_::_1_::dtor$0 @ 0x1800D87ED (_ContentManagement--AppManager--StartProductInstall_--_1_--dtor$0.c)
 *     _ContentManagement::AppManager::StartProductInstallWithOverrides_::_1_::dtor$0 @ 0x1800D87FF (_ContentManagement--AppManager--StartProductInstallWithOverrides_--_1_--dtor$0.c)
 *     _CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger_::_1_::dtor$1 @ 0x1800DD7D0 (_CreativeFramework--CommonHelper--RegisterBackgroundTaskWithWnfTrigger_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ThreadErrorContext::~ThreadErrorContext(wil::ThreadErrorContext *this)
{
  if ( *(_QWORD *)this )
    *(_DWORD *)(*(_QWORD *)this + 16LL) = *((_DWORD *)this + 3);
}
