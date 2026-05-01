/*
 * XREFs of ?DisableActivationTimeoutPolicy@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A1768
 * Callers:
 *     ?ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z @ 0x1801A731C (-ActivateAppAsync@MiniSearchExperienceManager@@AEAAX_N@Z.c)
 *     ?OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803A27C8 (-OnViewCreated@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MiniSearchAppExperienceManager_ActivationTimeoutPolicyDisabled@MiniSearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1803A1FC4 (-MiniSearchAppExperienceManager_ActivationTimeoutPolicyDisabled@MiniSearchAppExperienceManagerTe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MiniSearchExperienceManager::DisableActivationTimeoutPolicy(char *pv)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64 *); // rdi
  struct _TP_TIMER **v2; // rbx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(pv + 40);
  if ( *((_QWORD *)pv + 5) )
  {
    pftDueTime = (struct _FILETIME)-1200000000LL;
    v2 = (struct _TP_TIMER **)(pv + 152);
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)lambda_31d9aebde343b87b5381b850a02e5e3d_::_lambda_invoker_cdecl_,
                        pv,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v2,
      ThreadpoolTimer);
    if ( *v2 )
    {
      SetThreadpoolTimer(*v2, &pftDueTime, 0, 0);
      v8 = 0LL;
      v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             v1,
             &v8);
      v5 = retaddr;
      if ( v4 >= 0 )
      {
        MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_ActivationTimeoutPolicyDisabled();
        v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 88LL))(v8, 1LL);
        v5 = retaddr;
        if ( v4 >= 0 )
        {
LABEL_8:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
          return;
        }
        v6 = 1054LL;
      }
      else
      {
        v6 = 1051LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v5,
        (void *)v6,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
      goto LABEL_8;
    }
  }
}
