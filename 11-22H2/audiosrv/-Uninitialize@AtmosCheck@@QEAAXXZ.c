/*
 * XREFs of ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x18015DC58
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800F0560 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x18015415C (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18015A0D8 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUwnf_subscription_state_base@23@@Z @ 0x180014FF8 (-reset@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180120644 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?CancelGracePeriodTimer@AtmosCheck@@AEAAXXZ @ 0x18015A9B0 (-CancelGracePeriodTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ @ 0x18015AA64 (-CancelLicenseRefreshTimer@AtmosCheck@@AEAAXXZ.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x18015DDCC (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ @ 0x18015DFEC (-UnregisterFromUserWatcherNotifications@AtmosCheck@@AEAAXXZ.c)
 */

void __fastcall AtmosCheck::Uninitialize(AtmosCheck *this)
{
  bool v1; // zf
  DWORD *v3; // rsi
  DWORD *i; // rdi
  HRESULT v5; // eax
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  const char *v9; // r9
  HKEY v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 217) == 0;
  *((_BYTE *)this + 696) = 1;
  *((_BYTE *)this + 100) = 0;
  if ( !v1 )
  {
    v3 = (DWORD *)*((_QWORD *)this + 85);
    for ( i = (DWORD *)*((_QWORD *)this + 84); i != v3; ++i )
    {
      v5 = CoCancelCall(*i, 0);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x97,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  if ( *((_BYTE *)this + 97) )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 30,
      0LL);
    AtmosCheck::UnregisterFromUserWatcherNotifications(this);
    AtmosCheck::UninitializeAppServiceMode(this);
    v6 = (void *)*((_QWORD *)this + 14);
    if ( v6 )
    {
      UnregisterWaitEx(v6, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 14) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 13);
    if ( v7 )
    {
      CloseHandle(v7);
      *((_QWORD *)this + 13) = 0LL;
    }
    AtmosCheck::CancelLicenseRefreshTimer(this);
    AtmosCheck::CancelGracePeriodTimer(this);
  }
  if ( *((_QWORD *)this + 17) )
  {
    v8 = (void *)*((_QWORD *)this + 16);
    if ( v8 )
    {
      if ( !UnregisterWaitEx(v8, (HANDLE)0xFFFFFFFFFFFFFFFFLL) )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xBA,
          (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          v9);
      *((_QWORD *)this + 16) = 0LL;
    }
    CloseHandle(*((HANDLE *)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  v10 = (HKEY)*((_QWORD *)this + 15);
  if ( v10 )
  {
    RegCloseKey(v10);
    *((_QWORD *)this + 15) = 0LL;
  }
  AtmosCheck::UnregisterAppDeploymentNotifications(this);
}
