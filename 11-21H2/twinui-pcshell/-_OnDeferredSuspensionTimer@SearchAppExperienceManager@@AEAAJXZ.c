/*
 * XREFs of ?_OnDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18038B9C4
 * Callers:
 *     ?_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18038BA70 (-_OnMessageHandler@SearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ @ 0x1803588AC (-CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?_IsPendingActivate@SearchAppExperienceManager@@AEAA_NXZ @ 0x18038B710 (-_IsPendingActivate@SearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?_IsViewVisible@SearchAppExperienceManager@@AEAA_NXZ @ 0x18038B75C (-_IsViewVisible@SearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x18038C690 (-_ResetActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnDeferredSuspensionTimer(SearchAppExperienceManager *this)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _TP_TIMER **)((char *)this + 480);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 60);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v1,
        0LL);
      SearchAppExperienceManager::_ResetActivationTimeoutPolicy(this);
      if ( !SearchAppExperienceManager::_IsViewVisible(this) && !SearchAppExperienceManager::_IsPendingActivate(this) )
      {
        CortanaProactiveTelemetry::CortanaExperienceManager_SuspensionEnabled(v4);
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 96LL))(*((_QWORD *)this + 63));
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x543,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
      }
    }
  }
  return 0LL;
}
