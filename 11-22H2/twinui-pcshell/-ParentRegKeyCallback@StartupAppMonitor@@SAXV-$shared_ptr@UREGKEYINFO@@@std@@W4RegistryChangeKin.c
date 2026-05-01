/*
 * XREFs of ?ParentRegKeyCallback@StartupAppMonitor@@SAXV?$shared_ptr@UREGKEYINFO@@@std@@W4RegistryChangeKind@wil@@@Z @ 0x18063ECFC
 * Callers:
 *     _lambda_3c92ed9cb50454309e6daa2ca29a5fa1_::operator() @ 0x18063E578 (_lambda_3c92ed9cb50454309e6daa2ca29a5fa1_--operator().c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1801335B0 (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watc_ea_1801335B0.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CheckForChange@StartupNotification@@QEAAX_N@Z @ 0x1802E8A70 (-CheckForChange@StartupNotification@@QEAAX_N@Z.c)
 *     wistd::function_void___cdecl(enum_wil::RegistryChangeKind)_::function_void___cdecl(enum_wil::RegistryChangeKind)___lambda_f68c69481c14453c9aa040a1bc7d2eb1__void_ @ 0x18063D460 (wistd--function_void___cdecl(enum_wil--RegistryChangeKind)_--function_void___cdecl(_ea_18063D460.c)
 *     ?swap@?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x180641034 (-swap@-$unique_any_t@V-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_wat.c)
 *     ?RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ @ 0x180644984 (-RefreshRegKeyHandle@StartupRegKeyNotification@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall StartupAppMonitor::ParentRegKeyCallback(RTL_SRWLOCK *a1, int a2)
{
  __int64 v3; // rcx
  const WCHAR *v4; // rdx
  __int64 v5; // rdx
  const WCHAR *v6; // r8
  wil::details::registry_watcher_state *v7; // rbx
  std::_Ref_count_base *Ptr; // rcx
  wil::details::registry_watcher_state *v9; // [rsp+38h] [rbp-79h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-71h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-69h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v13; // [rsp+60h] [rbp-51h] BYREF
  std::_Ref_count_base *v14; // [rsp+68h] [rbp-49h]
  _QWORD v15[16]; // [rsp+78h] [rbp-39h] BYREF

  SRWLock = a1;
  if ( !a2 )
  {
    hKey = 0LL;
    v3 = *((_QWORD *)a1->Ptr + 10);
    v4 = (const WCHAR *)(v3 + 80);
    if ( *(_QWORD *)(v3 + 104) >= 8uLL )
      v4 = *(const WCHAR **)v4;
    if ( !RegOpenKeyExW(*(HKEY *)(v3 + 72), v4, 0, 0x20019u, &hKey) )
    {
      StartupRegKeyNotification::RefreshRegKeyHandle(*((StartupRegKeyNotification **)a1->Ptr + 10));
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v13,
        a1);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v12,
        &v13);
      wistd::function_void___cdecl_enum_wil::RegistryChangeKind__::function_void___cdecl_enum_wil::RegistryChangeKind____lambda_f68c69481c14453c9aa040a1bc7d2eb1__void_(
        v15,
        v12);
      v5 = *((_QWORD *)a1->Ptr + 10);
      v6 = (const WCHAR *)(v5 + 80);
      if ( *(_QWORD *)(v5 + 104) >= 8uLL )
        v6 = *(const WCHAR **)v6;
      v9 = 0LL;
      wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
        (__int64)&v9,
        *(HKEY *)(v5 + 72),
        v6,
        0,
        (__int64)v15);
      wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v15);
      wil::unique_any_t<wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_exception_policy>>::swap(
        (char *)a1->Ptr + 96,
        &v9);
      StartupNotification::CheckForChange(*((StartupNotification **)a1->Ptr + 10));
      v7 = v9;
      if ( v9 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)v9 + 19);
        SRWLock = (PSRWLOCK)((char *)v7 + 152);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 37, 0xFFFFFFFF) == 1 )
        {
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
            &SRWLock,
            0LL);
          wil::details::registry_watcher_state::`scalar deleting destructor'(v9);
        }
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
      }
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
    }
    if ( hKey )
      RegCloseKey(hKey);
  }
  Ptr = (std::_Ref_count_base *)a1[1].Ptr;
  if ( Ptr )
    std::_Ref_count_base::_Decref(Ptr);
}
