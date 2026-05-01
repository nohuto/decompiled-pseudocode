/*
 * XREFs of _lambda_8e74cd273561b15a8d8b985ad84a422d_::operator() @ 0x18000C1B0
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_8e74cd273561b15a8d8b985ad84a422d___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::Invoke @ 0x18000C180 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18000C180.c)
 * Callees:
 *     _lambda_29d63c76f0f654d29c7f89e3cbbbdc35_::operator() @ 0x18000C354 (_lambda_29d63c76f0f654d29c7f89e3cbbbdc35_--operator().c)
 *     ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000C500 (--$Unmarshal@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x18000C540 (--$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperie.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800743DC (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013751C (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAA.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_8e74cd273561b15a8d8b985ad84a422d_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  void **v8; // rax
  void *v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v14; // rdx
  void *v15; // [rsp+20h] [rbp-69h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-61h] BYREF
  __int128 v17; // [rsp+30h] [rbp-59h]
  __int64 v18; // [rsp+40h] [rbp-49h]
  __int128 v19; // [rsp+48h] [rbp-41h] BYREF
  __int64 v20; // [rsp+58h] [rbp-31h]
  char v21; // [rsp+60h] [rbp-29h]
  _BYTE v22[32]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v23[24]; // [rsp+90h] [rbp+7h] BYREF
  int v24; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  char v26; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v27; // [rsp+F8h] [rbp+6Fh] BYREF
  void *v28; // [rsp+108h] [rbp+7Fh] BYREF

  v6 = a1 + 24;
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    a1 + 24,
    v22);
  v28 = 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v17 = v6;
  *((_QWORD *)&v17 + 1) = &v28;
  v18 = v7;
  v19 = v17;
  v20 = v7;
  v21 = 1;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 48LL))(a2, &v27) >= 0 )
  {
    v15 = (void *)v27;
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::IncomingWindowReadinessEvent<HWND__ *>(v6, &v15);
  }
  v8 = (void **)ExperienceManagerUtils::AsStrong<IInspectable>(v16, a1);
  v9 = 0LL;
  if ( &v15 != v8 )
  {
    v9 = *v8;
    *v8 = 0LL;
  }
  v15 = v28;
  v28 = v9;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v16);
  if ( !v28 )
    goto LABEL_11;
  v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v26);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35D,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v10,
      (int)v15);
  }
  else
  {
    if ( !v26 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x367,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x80070015LL,
        (int)v15);
      goto LABEL_11;
    }
    v15 = 0LL;
    v12 = CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
            (CMarshaledInterface *)(a1 + 16),
            &v15);
    v11 = v12;
    if ( v12 < 0 )
    {
      v14 = 866LL;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v15 + 24LL))(v15, a2, a3);
      v11 = v12;
      if ( v12 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
LABEL_11:
        v11 = 0;
        goto LABEL_12;
      }
      v14 = 867LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v12,
      (int)v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  }
LABEL_12:
  v21 = 0;
  lambda_29d63c76f0f654d29c7f89e3cbbbdc35_::operator()(&v19);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v28);
  if ( v24 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v22);
  return v11;
}
