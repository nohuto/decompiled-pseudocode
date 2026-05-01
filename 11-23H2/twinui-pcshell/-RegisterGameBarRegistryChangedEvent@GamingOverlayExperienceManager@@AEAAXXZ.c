/*
 * XREFs of ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A42E8
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A8E70 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1?$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ @ 0x1800A3E20 (--1-$function@$$A6AXAEBE@Z@wistd@@QEAA@XZ.c)
 *     ?UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z @ 0x1800A4148 (-UpdateNexusEnabledWnf@GamingOverlayExperienceManager@@AEAAX_N@Z.c)
 *     ?UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A4208 (-UpdateGamepadIntervalValues@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?create@?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJPEAUHKEY__@@PEBG_N$$QEAV?$function@$$A6AXW4RegistryChangeKind@wil@@@Z@wistd@@@Z @ 0x1800A68EC (-create@-$registry_watcher_t@V-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@det.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUregistry_watcher_state@23@@Z @ 0x1800A6BD4 (-reset@-$unique_storage@U-$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@.c)
 *     ??_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z @ 0x1800A6D50 (--_Gregistry_watcher_state@details@wil@@QEAAPEAXI@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1800A6DD0 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800C4EC4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9808 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@@@details@wil@@QEAA_NXZ @ 0x1801DBAC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GamingOverlayExperienceManager::RegisterGameBarRegistryChangedEvent(
        GamingOverlayExperienceManager *this)
{
  HKEY *phkResult; // rax
  __int64 v3; // r9
  wil::details::registry_watcher_state *v4; // rbx
  unsigned int v5; // edx
  const char *v6; // r9
  wil::details::registry_watcher_state *v7; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v8[8]; // [rsp+60h] [rbp-51h] BYREF
  HKEY hKey[2]; // [rsp+68h] [rbp-49h] BYREF
  _BYTE v10[8]; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v11[15]; // [rsp+80h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  hKey[0] = 0LL;
  phkResult = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(hKey);
  if ( !RegCreateKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\GameBar", 0, 0LL, 0, 0x20019u, 0LL, phkResult, 0LL) )
  {
    v11[0] = off_1807A0640;
    v11[1] = this;
    v11[13] = v11;
    v7 = 0LL;
    LOBYTE(v3) = 1;
    wil::registry_watcher_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
      &v7,
      -2147483647LL,
      L"Software\\Microsoft\\GameBar",
      v3,
      v10);
    if ( (wil::details::registry_watcher_state **)((char *)this + 824) == &v7 )
    {
      v4 = v7;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::registry_watcher_state *,void (*)(wil::details::registry_watcher_state *),&void wil::details::delete_registry_watcher_state(wil::details::registry_watcher_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::registry_watcher_state *,wil::details::registry_watcher_state *,0,std::nullptr_t>>::reset(
        (char *)this + 824,
        v7);
      v4 = 0LL;
      v7 = 0LL;
    }
    if ( v4 )
    {
      wil::srwlock::lock_exclusive((char *)v4 + 152, v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v4 + 37, 0xFFFFFFFF) == 1 )
      {
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
          v8,
          0LL);
        wil::details::registry_watcher_state::`scalar deleting destructor'(v7, v5);
      }
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((CAutoSRWExclusiveLock *)v8);
    }
    wistd::function<void (unsigned char const &)>::~function<void (unsigned char const &)>((__int64)v10);
    if ( !*((_QWORD *)this + 103) )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x1087,
        (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
        v6);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_GameBarEmDmaCompliance>::GetImpl'::`2'::impl) )
      GamingOverlayExperienceManager::UpdateNexusEnabledWnf(this, 1);
    GamingOverlayExperienceManager::UpdateGamepadIntervalValues(this);
  }
  if ( hKey[0] )
    RegCloseKey(hKey[0]);
}
