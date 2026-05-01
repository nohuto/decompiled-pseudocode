/*
 * XREFs of ??1?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180392954
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$10 @ 0x1802B4A69 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_1802B4A69.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$11 @ 0x1802B4A82 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_1802B4A82.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$2 @ 0x1802B6B3E (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$2.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$3 @ 0x1802B6B57 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$3.c)
 *     _REGKEYINFO::REGKEYINFO_::_1_::dtor$3 @ 0x1802B98FF (_REGKEYINFO--REGKEYINFO_--_1_--dtor$3.c)
 *     _CScreenClippingExperienceManager::RegisterForHotKeyHandling_::_1_::dtor$4 @ 0x1802C1B32 (_CScreenClippingExperienceManager--RegisterForHotKeyHandling_--_1_--dtor$4.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$12 @ 0x18063EEEE (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$12.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$5 @ 0x18063EEFA (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$5.c)
 *     _StartupAppMonitor::RegKeyCallback_::_1_::dtor$8 @ 0x18063F1D9 (_StartupAppMonitor--RegKeyCallback_--_1_--dtor$8.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$46 @ 0x18063FB7E (_StartupAppMonitor--StartMonitor_--_1_--dtor$46.c)
 * Callees:
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

void __fastcall wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
        __int64 *a1)
{
  __int64 v1; // rdi
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    AcquireSRWLockExclusive((PSRWLOCK)(v1 + 152));
    SRWLock = (PSRWLOCK)(v1 + 152);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 148), 0xFFFFFFFF) == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
        &SRWLock,
        0LL);
      wil::details::registry_watcher_state::`scalar deleting destructor'((wil::details::registry_watcher_state *)v1);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
