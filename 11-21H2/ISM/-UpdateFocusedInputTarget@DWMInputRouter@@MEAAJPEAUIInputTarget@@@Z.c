/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800147E0
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180014600 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180001DF0 (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800074C4 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x180037D84 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18004A308 (atexit.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@XZ @ 0x180081E94 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18013B420 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  char v4; // r15
  int v5; // r12d
  __int64 v6; // rbx
  struct IInputTarget *v7; // rcx
  _QWORD *v8; // rdi
  unsigned __int64 *v9; // rax
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
  BOOL inited; // eax
  void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // r13
  void ***v33; // r12
  void *v34; // rax
  int v35; // eax
  char v36; // al
  __int64 (__fastcall *v37)(struct IInputTarget *, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v38)(struct IInputTarget *, GUID *, __int64 *); // rdi
  int v39; // eax
  int v40; // eax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  LPVOID v42; // rdi
  __int64 v43; // r8
  int (__fastcall *v44)(struct IInputTarget *, GUID *, WINBOOL *); // rdi
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // r9d
  __int64 v49; // r8
  int v50; // [rsp+20h] [rbp-79h]
  WINBOOL fPending[2]; // [rsp+40h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-51h] BYREF
  __int64 v53; // [rsp+50h] [rbp-49h] BYREF
  __int64 v54; // [rsp+58h] [rbp-41h] BYREF
  _QWORD *v55; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v56; // [rsp+68h] [rbp-31h] BYREF
  int v57; // [rsp+70h] [rbp-29h]
  __int64 v58; // [rsp+78h] [rbp-21h] BYREF
  _QWORD v59[2]; // [rsp+80h] [rbp-19h] BYREF
  _BYTE v60[40]; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = 0;
  fPending[0] = 0;
  v5 = 0;
  LODWORD(v54) = 0;
  v6 = *((_QWORD *)this + 34);
  v59[1] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (struct IInputTarget *)*((_QWORD *)this + 34);
  if ( v7 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = (struct IInputTarget *)*((_QWORD *)this + 34);
    }
    *((_QWORD *)this + 34) = a2;
    if ( v7 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 )
  {
    v53 = 0LL;
    v8 = 0LL;
    v55 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v6)(v6, &GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea, &v53) < 0 )
      goto LABEL_13;
    v9 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v53 + 24LL))(v53, &Context);
    v4 = 1;
    if ( &v56 != v9 )
    {
      v8 = (_QWORD *)*v9;
      *v9 = 0LL;
    }
    v55 = v8;
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
      v30 = 0LL;
      *(_QWORD *)fPending = 0LL;
      v31 = v8[61];
      v32 = v8[62];
      if ( v31 != v32 )
      {
        while ( 1 )
        {
          v33 = *(void ****)(v31 + 8);
          v34 = **v33;
          Context = v34;
          if ( v30 )
          {
            *(_QWORD *)fPending = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
            v35 = ((__int64 (__fastcall *)(void ***, GUID *, WINBOOL *))Context)(
                    v33,
                    &GUID_f6f9433e_5957_4930_a4c4_4da30644521c,
                    fPending);
          }
          else
          {
            v35 = ((__int64 (__fastcall *)(void ***, GUID *, WINBOOL *))v34)(
                    v33,
                    &GUID_f6f9433e_5957_4930_a4c4_4da30644521c,
                    fPending);
          }
          if ( v35 >= 0 )
            break;
          v31 += 16LL;
          if ( v31 == v32 )
            break;
          v30 = *(_QWORD *)fPending;
        }
        v30 = *(_QWORD *)fPending;
      }
      if ( v30 )
      {
        v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
        if ( (v36 & 0xE) != 0 && (v36 & 1) == 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)fPending + 48LL))(
            *(_QWORD *)fPending,
            0LL,
            0LL,
            1LL);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    v12 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v5 = v54;
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0x3DDA1) != 0 && a2 )
  {
    v53 = 0LL;
    v37 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v53);
    v5 = v37(a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v53);
    if ( v5 >= 0 )
    {
      v54 = 0LL;
      v38 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v54);
      v39 = v38(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v54);
      if ( v39 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x783,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v39,
          v50);
      LODWORD(v55) = 0;
      v40 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v54 + 48LL))(v54, &v55);
      if ( v40 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x786,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v40,
          v50);
      if ( (_DWORD)v55 )
      {
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewHelper::GetWindowForViewId(&Context, (__int64)ViewHierarchy);
        v42 = Context;
        if ( Context )
        {
          winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
            &Context,
            fPending);
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v53 + 72LL))(v53, v60);
        }
        if ( v42 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&Context);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v54);
    }
    else
    {
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v53);
  }
  if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
    __fastfail(7u);
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    v13 = 0LL;
    LODWORD(v55) = 0;
    v14 = 0LL;
    LODWORD(v53) = 0;
    v15 = 0;
    LODWORD(v54) = 0;
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
          (void *)0x79D,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v16,
          v50);
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)fPending + 72LL))(*(_QWORD *)fPending, &v55);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x79E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v17,
          v50);
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 32LL))(*(_QWORD *)fPending, &v53);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x79F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v18,
          v50);
      v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 80LL))(*(_QWORD *)fPending, &v54);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7A0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v19,
          v50);
      v20 = *(_QWORD *)fPending;
      if ( *(_QWORD *)fPending )
      {
        *(_QWORD *)fPending = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v13 = (unsigned int)v55;
      v14 = (unsigned int)v53;
      v15 = v54;
    }
    v43 = (v15 & 4) != 0;
    if ( (v15 & 8) != 0 )
      v43 = (unsigned int)v43 | 2;
    NtMITSetInputDelegationMode(v13, v14, v43);
  }
  Context = 0LL;
  inited = __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context);
  v22 = &`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && fPending[0] )
  {
    v56 = (unsigned __int64)&`InputETW::Instance'::`2'::wrapper;
    Context = &qword_180242E40;
    qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v57 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v56);
  }
  v23 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v23 > 5u && (*(_BYTE *)(v23 + 16) & 1) != 0 && (*(_QWORD *)(v23 + 24) & 1LL) == *(_QWORD *)(v23 + 24) )
  {
    LODWORD(v55) = 0;
    LODWORD(v53) = 0;
    LODWORD(v54) = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v44 = **(int (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
      if ( v44(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, fPending) >= 0 )
      {
        v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)fPending + 32LL))(*(_QWORD *)fPending, &v55);
        if ( v45 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x86,
            (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v45,
            v50);
        v46 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 40LL))(*(_QWORD *)fPending, &v53);
        if ( v46 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x87,
            (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v46,
            v50);
        v47 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 48LL))(*(_QWORD *)fPending, &v54);
        if ( v47 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x88,
            (unsigned int)"onecoreuap\\Windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v47,
            v50);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
    }
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    {
      v56 = (unsigned __int64)&`InputETW::Instance'::`2'::wrapper;
      Context = &qword_180242E40;
      qword_180242E40 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180242E58 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v57 = 0;
      wil::details::static_lazy<InputETW>::Completer::~Completer(&v56);
    }
    v49 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v49 > 5u
      && (*(_BYTE *)(v49 + 16) & 1) != 0
      && (*(_QWORD *)(v49 + 24) & 1LL) == *(_QWORD *)(v49 + 24) )
    {
      v58 = (unsigned int)v54;
      v59[0] = (unsigned int)v53;
      v56 = (unsigned int)v55;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v49,
        (unsigned int)&unk_180206577,
        v49,
        v48,
        (__int64)&v56,
        (__int64)v59,
        (__int64)&v58);
    }
  }
  v24 = *((_QWORD *)this + 35);
  if ( v24
    && (v25 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInputTarget *))(*(_QWORD *)v24 + 24LL))(v24, v6, a2),
        v26 = v25,
        v25 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7AD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v25,
      v50);
  }
  else
  {
    v27 = *((_QWORD *)this + 42);
    LODWORD(v54) = 0;
    v56 = (unsigned __int64)a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *, void *))(*(_QWORD *)a2 + 8LL))(a2, v22);
    *(_QWORD *)fPending = 0LL;
    if ( a2
      && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           fPending) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 48LL))(*(_QWORD *)fPending, &v54);
    }
    *(_DWORD *)(v27 + 72) = v54;
    v28 = *(_QWORD *)fPending;
    if ( *(_QWORD *)fPending )
    {
      *(_QWORD *)fPending = 0LL;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v28 + 16LL))(v28, v22);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *, void *))(*(_QWORD *)a2 + 16LL))(a2, v22);
    v26 = v5;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 16LL))(v6, v22);
  return v26;
}
