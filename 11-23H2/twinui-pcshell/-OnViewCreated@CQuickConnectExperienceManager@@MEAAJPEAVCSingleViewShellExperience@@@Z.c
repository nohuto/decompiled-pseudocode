/*
 * XREFs of ?OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18044E320
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800E2B7C (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180174BCC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180174EA4 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ExperienceManager_OnViewCreated_Params@AEAU_GUID@@@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x18044AEBC (--$ExperienceManager_OnViewCreated_Params@AEAU_GUID@@@ExperienceManager_OnViewCreated@QuickConne.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18044BDA8 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_18044BDA8.c)
 *     ??1ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAA@XZ @ 0x18044C1D8 (--1ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ @ 0x18044D274 (-ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation@ExperienceManager_On.c)
 *     ?StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ @ 0x18044F8F4 (-StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18044FCCC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CQuickConnectExperienceManager::OnViewCreated(
        CQuickConnectExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  IUnknown *v8; // rax
  IUnknown *v9; // rbx
  struct IUnknownVtbl *v10; // rdi
  IUnknown *v11; // rax
  IUnknown *v12; // rbx
  int v13; // eax
  int v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v16[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  IUnknown *v18; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v20[24]; // [rsp+50h] [rbp-B0h]
  _QWORD v21[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"ExperienceManager_OnViewCreated");
  v21[0] = &QuickConnectTelemetry::ExperienceManager_OnViewCreated::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewCreated::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewCreated *)v21);
  QuickConnectTelemetry::ExperienceManager_OnViewCreated::ExperienceManager_OnViewCreated_Params<_GUID &>(
    (__int64)v21,
    (__int128 *)this + 16);
  v5 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 6), v4);
  if ( !v5 || SetPropW(v5, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v17 = 0LL;
    v7 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 3,
           &v17);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *(_QWORD *)&v19 = CQuickConnectExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v19) = 0;
      *(_QWORD *)v20 = (char *)this - 48;
      *(_OWORD *)&v20[8] = v19;
      v8 = (IUnknown *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v9 = v8;
      if ( v8 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v8);
        *(_OWORD *)&v9[2].lpVtbl = *(_OWORD *)v20;
        v9[4].lpVtbl = *(struct IUnknownVtbl **)&v20[16];
        v9->lpVtbl = (struct IUnknownVtbl *)&Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_76a34c4b5f294ba24d477bfd9713c64c_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
      }
      else
      {
        v9 = 0LL;
      }
      *(_QWORD *)&v19 = v9;
      *(_QWORD *)v16 = 0LL;
      v15[0] = 2;
      v18 = v9;
      Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
        (__int64 *)v16,
        &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
        &v18,
        v15);
      v10 = *(struct IUnknownVtbl **)v16;
      *(_QWORD *)v15 = *(_QWORD *)v16;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v15);
      v11 = (IUnknown *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v11;
      if ( v11 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v11);
        v12[2].lpVtbl = 0LL;
        if ( &v12[2] != (IUnknown *)v15 )
        {
          v12[2].lpVtbl = v10;
          *(_QWORD *)v15 = 0LL;
        }
        v12->lpVtbl = (struct IUnknownVtbl *)off_1807D50F0;
      }
      else
      {
        v12 = 0LL;
      }
      v18 = v12;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v15);
      v13 = (*(__int64 (__fastcall **)(__int64, IUnknown *, char *))(*(_QWORD *)v17 + 80LL))(
              v17,
              v12,
              (char *)this + 16);
      v6 = v13;
      if ( v13 >= 0 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewCreated::ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation((QuickConnectTelemetry::ExperienceManager_OnViewCreated *)v21);
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x277,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v16);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
  }
  else
  {
    v6 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80004005LL);
  }
  QuickConnectTelemetry::ExperienceManager_OnViewCreated::~ExperienceManager_OnViewCreated((QuickConnectTelemetry::ExperienceManager_OnViewCreated *)v21);
  return v6;
}
