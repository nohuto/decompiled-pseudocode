/*
 * XREFs of ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180138C4C
 * Callers:
 *     ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180092840 (-OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006BB90 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006BBE8 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ??4?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800727D8 (--4-$ComPtr@UISnappedWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18008FBF8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x180092A3C (-Provider@SearchAppLauncherLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009DF40 (-DisableActivationTimeoutPolicy@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E01C (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x18009E598 (-UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled@SearchAppExperienceManagerTe.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1800F9E14 (--B-$com_ptr_t@UIWindowManagementEvents@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetViewImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180138FEC (-SetViewImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180139078 (-SetZBand@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_93476770441aba3d23e91e227d0f076e___ @ 0x180199068 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal--Shell--ViewM.c)
 *     _lambda_93476770441aba3d23e91e227d0f076e_::_lambda_93476770441aba3d23e91e227d0f076e_ @ 0x18019B260 (_lambda_93476770441aba3d23e91e227d0f076e_--_lambda_93476770441aba3d23e91e227d0f076e_.c)
 *     ??1Iterator@?$ObjectArrayAdapterImpl@UISwitchItemElement@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@@details@@QEAA@XZ @ 0x18019B910 (--1Iterator@-$ObjectArrayAdapterImpl@UISwitchItemElement@@V-$ComPtr@UISwitchItemElement@@@WRL@Mi.c)
 *     ??1?$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ @ 0x18019BCE0 (--1-$test_data_control@U_tip_SearchHideTest@@@tip@@QEAA@XZ.c)
 *     ??1?$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ @ 0x18019BD4C (--1-$test_watcher@U_tip_WinXMenuEnumerationTest@@@tip@@QEAA@XZ.c)
 *     ??B?$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ @ 0x18019C118 (--B-$tip_test@U_tip_GuidedSnapAssistTest@@@tip@@QEBA_NXZ.c)
 *     ??C?$test_data_control@U_tip_SearchFullActivationTest@@@tip@@QEBAPEAU_tip_SearchFullActivationTest@@XZ @ 0x18019C13C (--C-$test_data_control@U_tip_SearchFullActivationTest@@@tip@@QEBAPEAU_tip_SearchFullActivationTe.c)
 *     ?data@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_data_control@U_tip_SearchFullActivationTest@@@2@XZ @ 0x18019C174 (-data@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_data_control@U_tip_SearchFu.c)
 *     ?CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18019E640 (-CancelLastResortSuspensionTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     ?watch_errors@?$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SearchFullActivationTest@@@2@XZ @ 0x1801A3430 (-watch_errors@-$tip_test@U_tip_SearchFullActivationTest@@@tip@@QEAA-AV-$test_watcher@U_tip_Searc.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall UndockedSearchAppExperienceManager::OnViewCreated(
        char *pv,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  char *v4; // r14
  __int64 v5; // rcx
  const struct _tlgProvider_t *v6; // rax
  int v7; // eax
  _OWORD *v8; // rbx
  _OWORD *v9; // rax
  _OWORD *v10; // rsi
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  const char *v19; // r9
  __int64 result; // rax
  int v21[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v22[24]; // [rsp+28h] [rbp-A0h] BYREF
  __int128 v23; // [rsp+40h] [rbp-88h] BYREF
  __int64 v24; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v25[104]; // [rsp+60h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  void *v27; // [rsp+D0h] [rbp+8h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+D8h] [rbp+10h] BYREF
  __int64 v29; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+20h] BYREF

  v4 = pv + 728;
  tip::tip_test<_tip_SearchFullActivationTest>::watch_errors(pv + 728, v25);
  v6 = SearchAppLauncherLogging::Provider(v5);
  if ( *(_DWORD *)v6 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v6,
      (int)&unk_1806AC6A1,
      0);
  v28 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
  v30 = 0LL;
  v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
         &v28,
         &v30);
  try
  {
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A0,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v7,
        v21[0]);
    *(_QWORD *)&v23 = UndockedSearchAppExperienceManager::OnClientWindowReadyForPresentationChanged;
    DWORD2(v23) = 0;
    *(_QWORD *)v22 = pv;
    *(_OWORD *)&v22[8] = v23;
    v8 = 0LL;
    v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    v27 = v9;
    if ( v9 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v9);
      v10[1] = *(_OWORD *)v22;
      *((_QWORD *)v10 + 4) = *(_QWORD *)&v22[16];
      *(_QWORD *)v10 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_58529df093aa1427e3883a5b04cbabb2_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
      v8 = v10;
      v27 = 0LL;
    }
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v27);
    *(_QWORD *)&v23 = v8;
    v29 = 0LL;
    LODWORD(v27) = 2;
    *(_QWORD *)v21 = v8;
    Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
      &v29,
      (__int64)&GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
      v21,
      (unsigned int *)&v27);
    v11 = lambda_93476770441aba3d23e91e227d0f076e_::_lambda_93476770441aba3d23e91e227d0f076e_(v22, pv, &v29);
    Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_93476770441aba3d23e91e227d0f076e___(
      v21,
      v11);
    details::ObjectArrayAdapterImpl<ISwitchItemElement,Microsoft::WRL::ComPtr<ISwitchItemElement>>::Iterator::~Iterator(v22);
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 80LL))(v30, *(_QWORD *)v21, &v24);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v12,
        v21[0]);
    Microsoft::WRL::ComPtr<ISnappedWindow>::operator=((__int64 *)pv + 8, (__int64 *)&v28);
    *((_QWORD *)pv + 24) = v24;
    v13 = UndockedSearchAppExperienceManager::SetZBand((UndockedSearchAppExperienceManager *)pv);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5BA,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
    if ( !*((_QWORD *)pv + 8) )
      goto LABEL_17;
    v27 = 0LL;
    v14 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 8,
            (__int64 *)&v27);
    v15 = retaddr;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v27 + 80LL))(v27, 2LL);
      v15 = retaddr;
      if ( v14 >= 0 )
      {
LABEL_16:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
LABEL_17:
        UndockedSearchAppExperienceManager::SetViewImportance((UndockedSearchAppExperienceManager *)pv);
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl)
          || wil::com_ptr_t<IWindowManagementEvents,wil::err_returncode_policy>::operator bool((_QWORD *)pv + 82) )
        {
          SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_DeferredSuspensionTimerCanceled(v17);
          wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
            (struct _TP_TIMER **)pv + 82,
            0LL);
        }
        UndockedSearchAppExperienceManager::CancelLastResortSuspensionTimer((UndockedSearchAppExperienceManager *)pv);
        UndockedSearchAppExperienceManager::BoostPriority(pv);
        UndockedSearchAppExperienceManager::DisableActivationTimeoutPolicy(pv);
        if ( (unsigned __int8)tip::tip_test<_tip_GuidedSnapAssistTest>::operator bool(v4) )
        {
          v18 = tip::tip_test<_tip_SearchFullActivationTest>::data(v4, v22);
          *(_BYTE *)(tip::test_data_control<_tip_SearchFullActivationTest>::operator->(v18) + 17) = 1;
          tip::test_data_control<_tip_SearchHideTest>::~test_data_control<_tip_SearchHideTest>(v22);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v21);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v28);
        tip::test_watcher<_tip_WinXMenuEnumerationTest>::~test_watcher<_tip_WinXMenuEnumerationTest>(v25);
        return 0LL;
      }
      v16 = 3088LL;
    }
    else
    {
      v16 = 3086LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v15,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_16;
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x5CE,
                     (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
                     v19);
    return (unsigned int)v27;
  }
  return result;
}
