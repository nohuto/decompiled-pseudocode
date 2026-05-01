/*
 * XREFs of ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x18001FB30
 * Callers:
 *     <none>
 * Callees:
 *     ?StartSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FE20 (-StartSearchAppHideRequestedTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FEEC (-RequestSearchAppToHide@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18001FF78 (-UnregisterViewCoordinatorEvents@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?HideView@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x1800465EC (-HideView@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008FBF8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerCanceled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1800926C8 (-UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerCanceled@SearchAppExperienceManag.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180092F30 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x18009F6E0 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ??B?$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1800F9E14 (--B-$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$HideInitiatedWhileAnotherHideInProgress@AEAW4SearchAppState@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4SearchAppState@@@Z @ 0x1801990AC (--$HideInitiatedWhileAnotherHideInProgress@AEAW4SearchAppState@@@SearchAppExperienceManagerTelem.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??1?$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ @ 0x18019BD4C (--1-$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_data_control@U_tip_SearchFullActivationTest@@@tip@@QEBAPEAU_tip_SearchFullActivationTest@@XZ @ 0x18019C13C (--C-$test_data_control@U_tip_SearchFullActivationTest@@@tip@@QEBAPEAU_tip_SearchFullActivationTe.c)
 *     ??C?$test_data_control@U_tip_SearchHideTest@@@tip@@QEBAPEAU_tip_SearchHideTest@@XZ @ 0x18019C158 (--C-$test_data_control@U_tip_SearchHideTest@@@tip@@QEBAPEAU_tip_SearchHideTest@@XZ.c)
 *     ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174 (-data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchFu.c)
 *     ?data@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchHideTest@@@2@XZ @ 0x18019C1A0 (-data@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchHideTest@@@2.c)
 *     ?CancelVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E688 (-CancelVisibilityChangedTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E788 (-CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E7CC (-CompleteHideTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z @ 0x1801A1900 (-StartHideTest@UndockedSearchAppExperienceManager@@AEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?watch_errors@?$tip_test@U_tip_SearchHideTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SearchHideTest@@@2@XZ @ 0x1801A3488 (-watch_errors@-$tip_test@U_tip_SearchHideTest@@@tip@@QEAA-AV-$test_watcher@U_tip_SearchHideTest@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall UndockedSearchAppExperienceManager::Hide(UndockedSearchAppExperienceManager *this)
{
  char v2; // bl
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  bool v6; // r14
  __int64 v7; // rcx
  int v8; // eax
  _DWORD *v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  const char *v12; // r9
  __int64 result; // rax
  int v14[2]; // [rsp+20h] [rbp-58h] BYREF
  char v15; // [rsp+28h] [rbp-50h]
  _BYTE v16[64]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v18; // [rsp+80h] [rbp+8h] BYREF

  v2 = 0;
  v18 = 0;
  v3 = SearchAppLauncherLogging::Provider();
  if ( *(_DWORD *)v3 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v3,
      &unk_1806AC526,
      0LL);
  if ( (unsigned __int8)tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((char *)this + 728) )
  {
    v4 = tip::tip_test<_tip_SearchFullActivationTest>::data((char *)this + 728, v14);
    *(_BYTE *)(tip::test_data_control<_tip_SearchFullActivationTest>::operator->(v4) + 18) = 1;
    tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v14);
    UndockedSearchAppExperienceManager::CompleteFullActivationTest(this);
  }
  v6 = 1;
  if ( (unsigned __int8)tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((char *)this + 760) )
  {
    v5 = tip::tip_test<_tip_SearchHideTest>::data((char *)this + 760, v14);
    v2 = 1;
    if ( !*(_BYTE *)(tip::test_data_control<_tip_SearchHideTest>::operator->(v5) + 8) )
      v6 = 0;
  }
  if ( (v2 & 1) != 0 )
    tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v14);
  if ( v6 )
    UndockedSearchAppExperienceManager::StartHideTest(this, 1);
  tip::tip_test<_tip_SearchHideTest>::watch_errors((char *)this + 760, v16);
  try
  {
    UndockedSearchAppExperienceManager::UnregisterViewCoordinatorEvents(this);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl)
      || (unsigned __int8)wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool((char *)this + 752) )
    {
      SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SearchAppHideRequestedTimerCanceled();
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (char *)this + 752,
        0LL);
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl) )
      UndockedSearchAppExperienceManager::CancelVisibilityChangedTimeoutTimer(this);
    *(_QWORD *)v14 = this;
    v15 = 1;
    v7 = *((_QWORD *)this + 8);
    if ( !v7 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39A,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)0x8007139FLL,
        v14[0]);
    v18 = 1;
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 352LL))(v7, &v18);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39C,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v8,
        v14[0]);
    v9 = (_DWORD *)((char *)this + 640);
    if ( v18 == 1 )
    {
      *v9 = 6;
      if ( (unsigned __int8)tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool((char *)this + 760) )
      {
        v11 = tip::tip_test<_tip_SearchHideTest>::data((char *)this + 760, v14);
        *(_BYTE *)(tip::test_data_control<_tip_SearchHideTest>::operator->(v11) + 15) = 1;
        tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v14);
        UndockedSearchAppExperienceManager::CompleteHideTest(this);
      }
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
        (char *)this + 272,
        this);
      *(_OWORD *)((char *)this + 120) = 0LL;
    }
    else if ( (unsigned int)(*v9 - 9) <= 2 )
    {
      SearchAppExperienceManagerTelemetry::HideInitiatedWhileAnotherHideInProgress<enum SearchAppState &>((char *)this + 640);
    }
    else if ( *((_DWORD *)this + 34) == 1
           || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 56LL))(*((_QWORD *)this + 12)) )
    {
      *v9 = 9;
      v10 = UndockedSearchAppExperienceManager::HideView(this);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3B6,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
          (const char *)(unsigned int)v10,
          v14[0]);
    }
    else
    {
      *v9 = 11;
      UndockedSearchAppExperienceManager::RequestSearchAppToHide(this);
      UndockedSearchAppExperienceManager::StartSearchAppHideRequestedTimer(this);
    }
    UndockedSearchAppExperienceManager::UnboostPriority(this);
    tip::test_watcher<_tip_WinXMenuEnumerationTest>::~test_watcher<_tip_WinXMenuEnumerationTest>(v16);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3DC,
                           (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                           v12);
  }
  return result;
}
