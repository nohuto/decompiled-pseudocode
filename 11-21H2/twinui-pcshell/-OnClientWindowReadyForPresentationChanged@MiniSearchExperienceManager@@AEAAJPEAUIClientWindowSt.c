/*
 * XREFs of ?OnClientWindowReadyForPresentationChanged@MiniSearchExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x1803A23E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??1?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ @ 0x18004319C (--1-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??$?8UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@01@$$T@Z @ 0x180179DFC (--$-8UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@U.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ?BringToForeground@MiniSearchExperienceManager@@AEAAJXZ @ 0x1801A74F4 (-BringToForeground@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     ?Uncloak@MiniSearchExperienceManager@@AEAAJXZ @ 0x1801A8200 (-Uncloak@MiniSearchExperienceManager@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MiniSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged@AEAE@MiniSearchAppExperienceManagerTelemetry@@SAXAEAE@Z @ 0x1803A0888 (--$MiniSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged@AEAE@MiniSearchAppEx.c)
 *     ?CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A163C (-CompleteMiniSearchActivationTest@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@XZ @ 0x1803A4B94 (-ensure_data@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

__int64 __fastcall MiniSearchExperienceManager::OnClientWindowReadyForPresentationChanged(
        MiniSearchExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  __int64 *v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  const char *v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // rdx
  ExperienceManagerUtils **v15; // rcx
  __int64 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v19; // [rsp+28h] [rbp-48h]
  void **v20; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v21[40]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  char v24; // [rsp+90h] [rbp+20h] BYREF

  v5 = (__int64 *)((char *)this + 256);
  v6 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data((char *)this + 256);
  v20 = &tip::test_watcher<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v21,
    (struct wil::details::IFailureCallback *)&v20,
    0LL,
    *v6 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v22,
    v6);
  if ( tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool(v5) )
  {
    v7 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data(v5);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v18,
      v7);
    v8 = v18;
    tip::details::test_common_data<0>::begin_update(v18 + 8);
    v9 = v8 + 157;
    if ( !v8 )
      v9 = 13LL;
    *(_BYTE *)v9 = 1;
    if ( v8 )
    {
      tip::details::test_common_data<0>::end_update(v8 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v18);
    }
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
  }
  if ( GetCurrentThreadId() != *((_DWORD *)this + 36) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3BA,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      v10);
  v24 = 0;
  v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, char *))(*(_QWORD *)a2 + 72LL))(
          a2,
          &v24);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 808LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_22;
  }
  MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_OnClientWindowReadyForPresentationChanged<unsigned char &>(&v24);
  if ( v24 )
  {
    if ( Microsoft::WRL::operator==<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>((_QWORD *)this + 5) )
    {
      v12 = -2147019873;
LABEL_22:
      tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)&v20);
      return v12;
    }
    v16 = ExperienceManagerUtils::WindowFromViewWrapper(*v15, v14);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9), v16);
    v11 = MiniSearchExperienceManager::Uncloak(this);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 820LL;
      goto LABEL_21;
    }
    if ( *((_BYTE *)this + 224) )
    {
      v11 = MiniSearchExperienceManager::BringToForeground(this);
      v12 = v11;
      if ( v11 < 0 )
      {
        v13 = 823LL;
        goto LABEL_21;
      }
    }
    MiniSearchExperienceManager::CompleteMiniSearchActivationTest((struct _TP_TIMER **)this);
  }
  tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)&v20);
  return 0LL;
}
