/*
 * XREFs of ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800465EC
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ?HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019EF60 (-HideWithArgs@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18038F478 (-OnSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800467B0 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x18009F6E0 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_data_control@U_tip_SearchHideTest@@@tip@@QEBAPEAU_tip_SearchHideTest@@XZ @ 0x18019C158 (--C-$test_data_control@U_tip_SearchHideTest@@@tip@@QEBAPEAU_tip_SearchHideTest@@XZ.c)
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 *     ?ClipOutAppRectWhenNotActive@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E6D0 (-ClipOutAppRectWhenNotActive@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A087C (-ResetAppRectClip@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?StartLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801A1A2C (-StartLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UndockedSearchAppExperienceManager_HideView@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801A21C0 (-UndockedSearchAppExperienceManager_HideView@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@QEAA_NXZ @ 0x1801A2398 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::HideView(UndockedSearchAppExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // rcx
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_HideView();
  if ( *((_QWORD *)this + 8) )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl) )
    {
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
        (char *)this + 272,
        this);
      *(_OWORD *)((char *)this + 120) = 0LL;
    }
    v10 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
           (char *)this + 64,
           &v10);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 2395LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v2,
        v8[0]);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v10);
      return v3;
    }
    v2 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 2396LL;
      goto LABEL_15;
    }
    if ( (unsigned __int8)tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((char *)this + 760) )
    {
      v5 = tip::tip_test<_tip_SearchHideTest>::data((char *)this + 760, v8);
      *(_BYTE *)(tip::test_data_control<_tip_SearchHideTest>::operator->(v5) + 9) = 1;
      tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v8);
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl) )
      UndockedSearchAppExperienceManager::ResetAppRectClip(this);
    else
      UndockedSearchAppExperienceManager::ClipOutAppRectWhenNotActive(this);
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 344LL))(*((_QWORD *)this + 8), 3LL);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 2418LL;
      goto LABEL_15;
    }
    UndockedSearchAppExperienceManager::StartLastResortSuspensionTimer(this);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl) )
    {
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
        (char *)this + 272,
        this);
      *(_OWORD *)((char *)this + 120) = 0LL;
    }
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v10);
  }
  *((_DWORD *)this + 160) = 10;
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, 0LL);
  return 0LL;
}
