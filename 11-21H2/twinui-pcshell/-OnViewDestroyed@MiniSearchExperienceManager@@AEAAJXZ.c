/*
 * XREFs of ?OnViewDestroyed@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A2C4C
 * Callers:
 *     ?OnViewWrapperViewEvent@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1803A2FA0 (-OnViewWrapperViewEvent@MiniSearchExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006BBE8 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008FBF8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x180114ED8 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4808 (-UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@XZ @ 0x1803A4B94 (-ensure_data@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

__int64 __fastcall MiniSearchExperienceManager::OnViewDestroyed(MiniSearchExperienceManager *this)
{
  char *v2; // rbx
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 256;
  if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((__int64 *)this + 32) )
  {
    v4 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data(v2);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v13,
      v4);
    v5 = v13;
    tip::details::test_common_data<0>::begin_update(v13 + 8);
    v6 = v5 + 158;
    if ( !v5 )
      v6 = 14LL;
    *(_BYTE *)v6 = 1;
    if ( v5 )
    {
      tip::details::test_common_data<0>::end_update(v5 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v13);
    }
    v3 = v14;
    if ( v14 )
      std::_Ref_count_base::_Decref(v14);
  }
  v7 = SearchAppLauncherLogging::Provider((__int64)v3);
  if ( *(_DWORD *)v7 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v7,
      (int)&unk_1806AEE02,
      0);
  MiniSearchExperienceManager::UnboostPriority(this);
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    if ( *((_QWORD *)this + 16) )
    {
      v16 = 0LL;
      v9 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
             &v16);
      if ( v9 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x309,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 88LL))(v16, *((_QWORD *)this + 16));
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x30A,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
          (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      v8 = *((_QWORD *)this + 5);
    }
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 344LL))(v8, 0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x30D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 5);
    *((_QWORD *)this + 16) = 0LL;
  }
  LODWORD(v16) = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
    (_QWORD *)this + 23,
    (unsigned int *)&v16);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), 0LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9));
  return 0LL;
}
