/*
 * XREFs of ?RegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18063F02C
 * Callers:
 *     _lambda_f68c69481c14453c9aa040a1bc7d2eb1_::operator() @ 0x18063E630 (_lambda_f68c69481c14453c9aa040a1bc7d2eb1_--operator().c)
 *     _lambda_f9d92d283d219251b39b1fca3d115af1_::operator() @ 0x18063E694 (_lambda_f9d92d283d219251b39b1fca3d115af1_--operator().c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x1800C4F00 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801335B0 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watc_ea_1801335B0.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x1802E8A70 (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 *     wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_3c92ed9cb50454309e6daa2ca29a5fa1__void_ @ 0x18063D400 (wistd--function_void___cdecl(enum_wil--RegistryChangeKind)_--function_void___cdecl(enum_wil--Reg.c)
 *     ?swap@?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x180641034 (-swap@-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_wat.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall StartupAppMonitor::RegKeyCallback(RTL_SRWLOCK *a1, int a2)
{
  const WCHAR *v3; // rbx
  __int64 v4; // rcx
  wil::details::registry_watcher_state *v5; // rbx
  std::_Ref_count_base *Ptr; // rcx
  wil::details::registry_watcher_state *v7; // [rsp+38h] [rbp-69h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v10; // [rsp+58h] [rbp-49h] BYREF
  std::_Ref_count_base *v11; // [rsp+60h] [rbp-41h]
  _QWORD v12[16]; // [rsp+68h] [rbp-39h] BYREF

  SRWLock = a1;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
        (HKEY *)(*((_QWORD *)a1->Ptr + 10) + 64LL),
        0LL);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v10,
        a1);
      v3 = L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion";
      if ( *(_DWORD *)(*((_QWORD *)a1->Ptr + 10) + 56LL) != 2 )
        v3 = L"Software\\Microsoft\\Windows\\CurrentVersion";
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v9,
        &v10);
      wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_3c92ed9cb50454309e6daa2ca29a5fa1__void_(
        v12,
        v9);
      v4 = *((_QWORD *)a1->Ptr + 10);
      v7 = 0LL;
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
        (__int64)&v7,
        *(HKEY *)(v4 + 72),
        v3,
        0,
        (__int64)v12);
      wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v12);
      wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>>::swap(
        (char *)a1->Ptr + 96,
        &v7);
      v5 = v7;
      if ( v7 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)v7 + 19);
        SRWLock = (PSRWLOCK)((char *)v5 + 152);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 37, 0xFFFFFFFF) == 1 )
        {
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
            &SRWLock,
            0LL);
          wil::details::registry_watcher_state::`scalar deleting destructor'(v7);
        }
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
      }
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
  }
  else
  {
    StartupNotification::CheckForChange(*((StartupNotification **)a1->Ptr + 10));
  }
  Ptr = (std::_Ref_count_base *)a1[1].Ptr;
  if ( Ptr )
    std::_Ref_count_base::_Decref(Ptr);
}
