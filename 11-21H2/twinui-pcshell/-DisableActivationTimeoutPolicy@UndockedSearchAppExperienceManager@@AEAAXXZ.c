/*
 * XREFs of ?DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009DF40
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180138C4C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UndockedSearchAppExperienceManager_ActivationTimeoutPolicyDisabled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18009E4D8 (-UndockedSearchAppExperienceManager_ActivationTimeoutPolicyDisabled@SearchAppExperienceManagerTe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::DisableActivationTimeoutPolicy(char *pv)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64 *); // rdi
  PTP_TIMER *v2; // rbx
  PTP_TIMER ThreadpoolTimer; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(pv + 64);
  if ( *((_QWORD *)pv + 8) )
  {
    pftDueTime = (struct _FILETIME)-1200000000LL;
    v2 = (PTP_TIMER *)(pv + 648);
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_23b9e37225fb098a3c1eb5310313a894_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      v2,
      ThreadpoolTimer);
    if ( *v2 )
    {
      SetThreadpoolTimer(*v2, &pftDueTime, 0, 0);
      v9 = 0LL;
      v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
             v1,
             &v9);
      v5 = retaddr;
      if ( v4 < 0 )
      {
        v6 = 2825LL;
      }
      else
      {
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ActivationTimeoutPolicyDisabled();
        v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 88LL))(v9, 1LL);
        v5 = retaddr;
        if ( v4 >= 0 )
        {
LABEL_6:
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
          return;
        }
        v6 = 2828LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v5,
        (void *)v6,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v4,
        v7);
      goto LABEL_6;
    }
  }
}
