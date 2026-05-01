/*
 * XREFs of ?OnViewCreated@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803953A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18006BB90 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIClientWindo.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006BBE8 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@@012@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x1800896BC (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUn_ea_1800896BC.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBaseTrayFlyoutExperienceManager::OnViewCreated(
        CBaseTrayFlyoutExperienceManager *this,
        ExperienceManagerUtils **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  _DWORD *v5; // rcx
  void (__fastcall ***v6)(_QWORD, ExperienceManagerUtils **); // rcx
  __int64 v7; // rcx
  int v8; // eax
  HWND v9; // rax
  unsigned int v10; // ebx
  int v11; // eax
  void *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  int v17; // eax
  __int64 v19; // [rsp+30h] [rbp-19h] BYREF
  __int64 v20; // [rsp+38h] [rbp-11h] BYREF
  __int64 v21; // [rsp+40h] [rbp-9h] BYREF
  _QWORD *v22; // [rsp+48h] [rbp-1h] BYREF
  __int128 v23; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v24[24]; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v5 = (_DWORD *)wil::details::static_lazy<SingleViewExperienceLogging>::get(
                   (__int64)this,
                   _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)v5,
      (unsigned __int8 *)dword_1806AC979,
      0LL,
      0LL,
      2u,
      (PEVENT_DATA_DESCRIPTOR)v24);
  v6 = (void (__fastcall ***)(_QWORD, ExperienceManagerUtils **))*((_QWORD *)this + 42);
  if ( v6 )
    (**v6)(v6, a2);
  if ( *((_BYTE *)this + 417) )
  {
    v7 = *((_QWORD *)this + 2);
    if ( v7 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v7 + 24LL))(
             v7,
             ((unsigned __int64)this - 24) & -(__int64)(this != (CBaseTrayFlyoutExperienceManager *)48),
             (char *)this + 420);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x8D,
          (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  v9 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(a2[3], v4);
  if ( !v9 || SetPropW(v9, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v21 = 0LL;
    v11 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 3,
            &v21);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *(_QWORD *)&v23 = CBaseTrayFlyoutExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v23) = 0;
      *(_QWORD *)v24 = (char *)this - 48;
      *(_OWORD *)&v24[8] = v23;
      v12 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v13 = (__int64)v12;
      if ( v12 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v12);
        *(_OWORD *)(v13 + 16) = *(_OWORD *)v24;
        *(_QWORD *)(v13 + 32) = *(_QWORD *)&v24[16];
        *(_QWORD *)v13 = &Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::*)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *)>::DelegateInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,_lambda_76a34c4b5f294ba24d477bfd9713c64c_,-1,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>::`vftable';
      }
      else
      {
        v13 = 0LL;
      }
      *(_QWORD *)&v23 = v13;
      v20 = 0LL;
      LODWORD(v19) = 2;
      v22 = (_QWORD *)v13;
      Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
        &v20,
        (__int64)&GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd,
        &v22,
        (unsigned int *)&v19);
      v14 = v20;
      v19 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
      v15 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v16 = v15;
      if ( v15 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>((__int64)v15);
        v16[2] = 0LL;
        if ( v16 + 2 != &v19 )
        {
          v16[2] = v14;
          v19 = 0LL;
        }
        *v16 = off_18064E1C8;
      }
      else
      {
        v16 = 0LL;
      }
      v22 = v16;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v21 + 80LL))(v21, v16, (char *)this + 432);
      v10 = v17;
      if ( v17 >= 0 )
        v10 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
          (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D,
        (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v11);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  }
  else
  {
    v10 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (__int64)"internal\\shell\\private\\inc\\BaseTrayFlyoutExperience.cpp",
      (const char *)0x80004005LL);
  }
  return v10;
}
