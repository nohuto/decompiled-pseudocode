/*
 * XREFs of ?_OnDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18035DDB8
 * Callers:
 *     ?_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z @ 0x18035DE70 (-_OnMessageHandler@CortanaSharedExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ @ 0x1803588AC (-CortanaExperienceManager_SuspensionEnabled@CortanaProactiveTelemetry@@SAXXZ.c)
 *     ?_IsPendingActivate@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x18035DA98 (-_IsPendingActivate@CortanaSharedExperienceManager@@AEAA_NXZ.c)
 *     ?_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ @ 0x18035DAE4 (-_IsViewVisible@CortanaSharedExperienceManager@@AEAA_NXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18035EAB0 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnDeferredSuspensionTimer(CortanaSharedExperienceManager *this)
{
  struct _TP_TIMER **v1; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _TP_TIMER **)((char *)this + 472);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 59);
  if ( v3 )
  {
    if ( !IsThreadpoolTimerSet(v3) )
    {
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        v1,
        0LL);
      CortanaSharedExperienceManager::_ResetActivationTimeoutPolicy(this);
      if ( !CortanaSharedExperienceManager::_IsViewVisible(this)
        && !CortanaSharedExperienceManager::_IsPendingActivate(this) )
      {
        CortanaProactiveTelemetry::CortanaExperienceManager_SuspensionEnabled(v4);
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 62) + 96LL))(*((_QWORD *)this + 62));
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x5BB,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
            (const char *)(unsigned int)v5);
      }
    }
  }
  return 0LL;
}
