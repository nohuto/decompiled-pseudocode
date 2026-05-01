/*
 * XREFs of ?ResetActivationTimeoutPolicy@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A338C
 * Callers:
 *     ?OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z @ 0x180176320 (-OnMessageHandler@MiniSearchExperienceManager@@AEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MiniSearchAppExperienceManager_ActivationTimeoutPolicyEnabled@MiniSearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1803A202C (-MiniSearchAppExperienceManager_ActivationTimeoutPolicyEnabled@MiniSearchAppExperienceManagerTel.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MiniSearchExperienceManager::ResetActivationTimeoutPolicy(struct _TP_TIMER **this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    this + 19,
    0LL);
  if ( this[5] )
  {
    v6 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
           &v6);
    v3 = (wil::details::in1diag3 *)retaddr;
    if ( v2 >= 0 )
    {
      MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivationTimeoutPolicyEnabled(retaddr);
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 88LL))(v6, 0LL);
      v3 = (wil::details::in1diag3 *)retaddr;
      if ( v2 >= 0 )
      {
LABEL_7:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
        return;
      }
      v4 = 1071LL;
    }
    else
    {
      v4 = 1068LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_7;
  }
}
