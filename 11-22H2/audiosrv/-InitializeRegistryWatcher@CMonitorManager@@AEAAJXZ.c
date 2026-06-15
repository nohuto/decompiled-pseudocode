/*
 * XREFs of ?InitializeRegistryWatcher@CMonitorManager@@AEAAJXZ @ 0x18005B760
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005A578 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 * Callees:
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x18005B89C (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ??1?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ @ 0x18005BC94 (--1-$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x18005BCAC (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800DDCF8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800DDE94 (WPP_SF_d.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x18012C248 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18012FA80 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::InitializeRegistryWatcher(CMonitorManager *this)
{
  unsigned int v2; // esi
  HKEY *phkResult; // rdi
  HKEY v4; // r14
  int v5; // edx
  LSTATUS v6; // ebx
  int v7; // r8d
  int v8; // r9d
  wil::details::registry_watcher_state *v9; // rbx
  DWORD LastError; // ebx
  unsigned int v12; // edx
  wil::details::registry_watcher_state *v13; // [rsp+38h] [rbp-59h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v15[8]; // [rsp+48h] [rbp-49h] BYREF
  _QWORD v16[15]; // [rsp+50h] [rbp-41h] BYREF

  v2 = 0;
  phkResult = (HKEY *)((char *)this + 368);
  v4 = (HKEY)*((_QWORD *)this + 46);
  if ( v4 )
  {
    LastError = GetLastError();
    RegCloseKey(v4);
    SetLastError(LastError);
  }
  *phkResult = 0LL;
  v6 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\HoloSI\\Audio",
         0,
         0xF003Fu,
         phkResult);
  if ( v6 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids, 0LL);
    }
    if ( v6 > 0 )
      return (unsigned __int16)v6 | 0x80070000;
    else
      return (unsigned int)v6;
  }
  else
  {
    v16[0] = off_18016F450;
    v16[1] = this;
    v16[13] = v16;
    v13 = 0LL;
    wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
      (unsigned int)&v13,
      v5,
      v7,
      v8,
      (__int64)v15);
    if ( (wil::details::registry_watcher_state **)((char *)this + 360) == &v13 )
    {
      v9 = v13;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        (char *)this + 360,
        v13);
      v9 = 0LL;
      v13 = 0LL;
    }
    if ( v9 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)v9 + 19);
      SRWLock = (PSRWLOCK)((char *)v9 + 152);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 37, 0xFFFFFFFF) == 1 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          &SRWLock,
          0LL);
        wil::details::registry_watcher_state::`scalar deleting destructor'(v13, v12);
      }
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    wistd::function<void (enum wil::RegistryChangeKind)>::~function<void (enum wil::RegistryChangeKind)>(v15);
    if ( !*((_QWORD *)this + 45) )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_b5388cf61bd131ee0088e27738ffac5a_Traceguids);
      }
      return (unsigned int)-2147024882;
    }
  }
  return v2;
}
