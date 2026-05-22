/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800241B0
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180025300 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180002564 (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180002718 (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002CC0 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001AE88 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001D97C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x18003F300 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     atexit @ 0x180056078 (atexit.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18015A94C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  char v4; // r15
  int v5; // r13d
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 *v9; // rax
  char v10; // r12
  LPVOID v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // al
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // edi
  __int64 v25; // rdi
  __int64 v26; // rcx
  char v28; // al
  __int64 (__fastcall *v29)(struct IInputTarget *, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v30)(struct IInputTarget *, GUID *, __int64 *); // rdi
  int v31; // eax
  int v32; // eax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  LPVOID v34; // rdi
  __int64 v35; // r8
  int (__fastcall *v36)(struct IInputTarget *, GUID *, WINBOOL *); // rdi
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // r8
  int v41; // r9d
  int v42; // [rsp+20h] [rbp-69h]
  WINBOOL fPending[2]; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v44; // [rsp+48h] [rbp-41h] BYREF
  __int64 v45; // [rsp+50h] [rbp-39h] BYREF
  __int64 v46; // [rsp+58h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-29h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-21h] BYREF
  int v49; // [rsp+70h] [rbp-19h]
  __int64 v50; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v51[40]; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = 0;
  fPending[0] = 0;
  v5 = 0;
  v6 = *((_QWORD *)this + 34);
  v50 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( *((struct IInputTarget **)this + 34) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 34);
    *((_QWORD *)this + 34) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 )
  {
    *(_QWORD *)fPending = 0LL;
    v8 = 0LL;
    v46 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, WINBOOL *))v6)(
           v6,
           &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea,
           fPending) < 0 )
      goto LABEL_13;
    v9 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)fPending + 24LL))(
                      *(_QWORD *)fPending,
                      &Context);
    v4 = 1;
    if ( &v48 != (unsigned __int64 *)v9 )
    {
      v8 = *v9;
      *v9 = 0LL;
    }
    v46 = v8;
    if ( v8 )
      v10 = 1;
    else
LABEL_13:
      v10 = 0;
    if ( (v4 & 1) != 0 )
    {
      v11 = Context;
      if ( Context )
      {
        Context = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    if ( v10 )
    {
      InputSite::GetAttachedObject<IDelegateInformationProvider>(v8, &v45);
      if ( v45 )
      {
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 40LL))(v45);
        if ( (v28 & 0xE) != 0 && (v28 & 1) == 0 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v45 + 48LL))(v45, 0LL, 0LL, 1LL);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v45);
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v12 = *(_QWORD *)fPending;
    if ( *(_QWORD *)fPending )
    {
      *(_QWORD *)fPending = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x3DDA1) != 0 && a2 )
  {
    v46 = 0LL;
    v29 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v46);
    v5 = v29(a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v46);
    if ( v5 >= 0 )
    {
      v45 = 0LL;
      v30 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v45);
      v31 = v30(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v45);
      if ( v31 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7A4,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v31,
          v42);
      v44 = 0;
      v32 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v45 + 48LL))(v45, &v44);
      if ( v32 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7A7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v32,
          v42);
      if ( v44 )
      {
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewHelper::GetWindowForViewId(&Context, (__int64)ViewHierarchy);
        v34 = Context;
        if ( Context )
        {
          winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
            &Context,
            fPending);
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v46 + 72LL))(v46, v51);
        }
        if ( v34 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&Context);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v45);
    }
    else
    {
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v46);
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    v13 = 0LL;
    v44 = 0;
    v14 = 0LL;
    LODWORD(v46) = 0;
    v15 = 0;
    LODWORD(v45) = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v16 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2)(
              a2,
              &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
              fPending);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7BE,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v16,
          v42);
      v17 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 72LL))(
              *(_QWORD *)fPending,
              &v44);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7BF,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v17,
          v42);
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 32LL))(*(_QWORD *)fPending, &v46);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7C0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v18,
          v42);
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 80LL))(*(_QWORD *)fPending, &v45);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7C1,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v19,
          v42);
      v20 = *(_QWORD *)fPending;
      if ( *(_QWORD *)fPending )
      {
        *(_QWORD *)fPending = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v13 = v44;
      v14 = (unsigned int)v46;
      v15 = v45;
    }
    v35 = (v15 & 4) != 0;
    if ( (v15 & 8) != 0 )
      v35 = (unsigned int)v35 | 2;
    NtMITSetInputDelegationMode(v13, v14, v35);
  }
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
  {
    v48 = (unsigned __int64)&`InputETW::Instance'::`2'::wrapper;
    Context = &qword_180268F98;
    qword_180268F98 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180268FB0 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v49 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v48);
  }
  v21 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v21 > 5u && (*(_BYTE *)(v21 + 16) & 1) != 0 && (*(_QWORD *)(v21 + 24) & 1LL) == *(_QWORD *)(v21 + 24) )
  {
    v44 = 0;
    LODWORD(v46) = 0;
    LODWORD(v45) = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v36 = **(int (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
      if ( v36(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, fPending) >= 0 )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 32LL))(
                *(_QWORD *)fPending,
                &v44);
        if ( v37 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8E,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v37,
            v42);
        v38 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 40LL))(*(_QWORD *)fPending, &v46);
        if ( v38 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v38,
            v42);
        v39 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 48LL))(*(_QWORD *)fPending, &v45);
        if ( v39 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x90,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v39,
            v42);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
    }
    v40 = *(_QWORD *)(wil::details::static_lazy<InputETW>::get(
                        v21,
                        _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v40 > 5u
      && (*(_BYTE *)(v40 + 16) & 1) != 0
      && (*(_QWORD *)(v40 + 24) & 1LL) == *(_QWORD *)(v40 + 24) )
    {
      Context = (LPVOID)(unsigned int)v45;
      *(_QWORD *)fPending = (unsigned int)v46;
      v48 = v44;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v40,
        (unsigned int)&unk_180228914,
        v40,
        v41,
        (__int64)&v48,
        (__int64)fPending,
        (__int64)&Context);
    }
  }
  v22 = *((_QWORD *)this + 35);
  if ( v22
    && (v23 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInputTarget *))(*(_QWORD *)v22 + 24LL))(v22, v6, a2),
        v24 = v23,
        v23 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7CE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v23,
      v42);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v50);
    return v24;
  }
  else
  {
    v25 = *((_QWORD *)this + 42);
    LODWORD(v45) = 0;
    v48 = (unsigned __int64)a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    *(_QWORD *)fPending = 0LL;
    if ( a2
      && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           fPending) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 48LL))(*(_QWORD *)fPending, &v45);
    }
    *(_DWORD *)(v25 + 72) = v45;
    v26 = *(_QWORD *)fPending;
    if ( *(_QWORD *)fPending )
    {
      *(_QWORD *)fPending = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    return (unsigned int)v5;
  }
}
