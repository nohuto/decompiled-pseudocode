/*
 * XREFs of ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180025C90
 * Callers:
 *     ?UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180026810 (-UpdateFocusedInputTarget@MPCInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x1800029D4 (-GetWindowForViewId@ViewHelper@@SA-AUWindow@WindowManagement@ApplicationModel@Internal@Windows@w.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x180002E9C (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180003110 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ @ 0x18001866C (--1-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VInputETW@@@details@wil@@QEAA@XZ @ 0x18001B888 (--1Completer@-$static_lazy@VInputETW@@@details@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001CCDC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001EA2C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ??$As@UIInputSiteTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180027080 (--$As@UIInputSiteTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180040A2C (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180045660 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     atexit @ 0x180056E08 (atexit.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIFocusInputTarget@@XZ @ 0x18005AA54 (--B-$ComPtrRef@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAU.c)
 *     ?InputAppDelegation@@YA_NI@Z @ 0x18005EB80 (-InputAppDelegation@@YA_NI@Z.c)
 *     ??1?$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x180068090 (--1-$ComPtr@UIResizeAreaClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?8UIInputTarget@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIInputTarget@@@01@$$T@Z @ 0x1801054C0 (--$-8UIInputTarget@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIInputTarget@@@01@$$T@Z.c)
 *     ??$?9UIDelegateInformationProvider@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIDelegateInformationProvider@@@01@$$T@Z @ 0x1801054D0 (--$-9UIDelegateInformationProvider@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UIDelegateInformationProvid.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180168BCC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z @ 0x18017CE54 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall DWMInputRouter::UpdateFocusedInputTarget(DWMInputRouter *this, struct IInputTarget *a2)
{
  char v4; // r12
  struct IInputTarget **v5; // r15
  __int64 v6; // rdi
  struct IInputTarget *v7; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rax
  char v10; // si
  char v11; // al
  int (__fastcall *v12)(char *, __int64); // rbx
  __int64 v13; // rax
  int v14; // eax
  bool v15; // al
  char *v16; // rcx
  const char *v17; // r9
  unsigned int v18; // eax
  const char *v19; // r9
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(struct IInputTarget *, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v22)(struct IInputTarget *, GUID *, __int64 *); // rbx
  int v23; // eax
  int v24; // eax
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  LPVOID v26; // rbx
  unsigned int v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  bool v33; // al
  unsigned int v34; // edx
  __int64 v35; // r9
  __int64 v36; // rcx
  int (__fastcall *v37)(struct IInputTarget *, GUID *, WINBOOL *); // rbx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // r8
  int v42; // r9d
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // ebx
  __int64 v47; // rbx
  __int64 v48; // rcx
  int v49; // [rsp+20h] [rbp-89h]
  WINBOOL fPending[2]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-61h] BYREF
  __int64 v52; // [rsp+50h] [rbp-59h] BYREF
  __int64 v53; // [rsp+58h] [rbp-51h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-49h] BYREF
  unsigned int v55; // [rsp+68h] [rbp-41h] BYREF
  int v56; // [rsp+6Ch] [rbp-3Dh]
  int v57[2]; // [rsp+70h] [rbp-39h] BYREF
  int *v58; // [rsp+78h] [rbp-31h] BYREF
  __int64 v59; // [rsp+80h] [rbp-29h] BYREF
  __int64 v60; // [rsp+88h] [rbp-21h] BYREF
  int v61; // [rsp+90h] [rbp-19h]
  __int64 v62; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v63[40]; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = 0;
  fPending[0] = 0;
  v56 = 0;
  v55 = 0;
  v5 = (struct IInputTarget **)((char *)this + 272);
  v6 = *((_QWORD *)this + 34);
  v59 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( *v5 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *v5;
    *v5 = a2;
    if ( v7 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 )
  {
    Context = 0LL;
    v8 = 0LL;
    v60 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(&v59, &Context) < 0 )
      goto LABEL_14;
    v9 = (__int64 *)(*(__int64 (__fastcall **)(LPVOID, int *))(*(_QWORD *)Context + 24LL))(Context, v57);
    v4 = 1;
    if ( &v60 != v9 )
    {
      v8 = *v9;
      *v9 = 0LL;
    }
    v60 = v8;
    if ( v8 )
      v10 = 1;
    else
LABEL_14:
      v10 = 0;
    if ( (v4 & 1) != 0 )
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(v57);
    if ( !v10 )
      goto LABEL_44;
    InputSite::GetAttachedObject<IDelegateInformationProvider>(v8, (__int64 *)fPending);
    if ( !*(_QWORD *)fPending
      || (v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 40LL))(*(_QWORD *)fPending), (v11 & 0xE) == 0)
      || (v11 & 1) != 0 )
    {
LABEL_43:
      Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(fPending);
LABEL_44:
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v60);
      Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(&Context);
      goto LABEL_45;
    }
    if ( !IsEdition(0xAuLL) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)fPending + 48LL))(
        *(_QWORD *)fPending,
        0LL,
        0LL,
        1LL);
      goto LABEL_43;
    }
    v51 = 0;
    *(_QWORD *)v57 = 0LL;
    v12 = *(int (__fastcall **)(char *, __int64))(*((_QWORD *)this + 2) + 32LL);
    v58 = v57;
    v13 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IFocusInputTarget>>::operator IFocusInputTarget * *(&v58);
    if ( v12((char *)this + 16, v13) >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v57 + 80LL))(*(_QWORD *)v57, &v51);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7A6,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v14,
          v49);
    }
    v15 = InputAppDelegation(v51);
    v16 = (char *)this + 280;
    if ( v15 )
    {
      if ( !(unsigned __int8)Microsoft::WRL::operator==<IInputTarget>(v16) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x7AE,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          v17);
      Microsoft::WRL::ComPtr<IMessageSession>::operator=((char *)this + 280, &v59);
      v55 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 32LL))(*(_QWORD *)fPending);
      goto LABEL_40;
    }
    if ( !(unsigned __int8)Microsoft::WRL::operator!=<IDelegateInformationProvider>(v16) )
    {
LABEL_39:
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)fPending + 48LL))(
        *(_QWORD *)fPending,
        0LL,
        0LL,
        1LL);
LABEL_40:
      Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(v57);
      goto LABEL_43;
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)fPending + 40LL))(*(_QWORD *)fPending);
    if ( !InputAppDelegation(v18) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x7B9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        v19);
    v58 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>((char *)this + 280, &v58) < 0 )
    {
LABEL_38:
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((char *)this + 280);
      Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(&v58);
      goto LABEL_39;
    }
    (*(void (__fastcall **)(int *, __int64 *))(*(_QWORD *)v58 + 24LL))(v58, &v62);
    v53 = 0LL;
    if ( (unsigned __int8)Microsoft::WRL::operator!=<IDelegateInformationProvider>(v5)
      && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IInputSiteTarget>(v20, &v53) >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v53 + 24LL))(v53, &v52);
      if ( v52 == v62 )
      {
        Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v52);
LABEL_37:
        Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(&v53);
        Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v62);
        goto LABEL_38;
      }
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v52);
    }
    InputSite::GetAttachedObject<IDelegateInformationProvider>(v62, &v52);
    if ( (unsigned __int8)Microsoft::WRL::operator!=<IDelegateInformationProvider>(&v52) )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v52 + 48LL))(v52, 0LL, 0LL, 1LL);
    Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(&v52);
    goto LABEL_37;
  }
LABEL_45:
  if ( IsEdition(0x3DDA1uLL) && a2 )
  {
    v53 = 0LL;
    v21 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v53);
    v56 = v21(a2, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v53);
    if ( v56 >= 0 )
    {
      v52 = 0LL;
      v22 = **(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v52);
      v23 = v22(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v52);
      if ( v23 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x805,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v23,
          v49);
      v51 = 0;
      v24 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v52 + 48LL))(v52, &v51);
      if ( v24 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x808,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v24,
          v49);
      if ( v51 )
      {
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewHelper::GetWindowForViewId(&Context, (__int64)ViewHierarchy);
        v26 = Context;
        if ( Context )
        {
          winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
            &Context,
            fPending);
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v53 + 72LL))(v53, v63);
        }
        if ( v26 )
          winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&Context);
      }
      Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(&v52);
    }
    else
    {
      v56 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v53);
  }
  if ( IsEdition(0xAuLL) )
  {
    LODWORD(v52) = 0;
    LODWORD(v53) = 0;
    v27 = 0;
    v51 = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v28 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2)(
              a2,
              &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
              fPending);
      if ( v28 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x81F,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v28,
          v49);
      v29 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 40LL))(*(_QWORD *)fPending, &v53);
      if ( v29 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x820,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v29,
          v49);
      if ( !v55 )
      {
        v30 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 72LL))(
                *(_QWORD *)fPending,
                &v55);
        if ( v30 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x823,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)v30,
            v49);
      }
      v31 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 32LL))(*(_QWORD *)fPending, &v52);
      if ( v31 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x825,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v31,
          v49);
      v32 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 80LL))(
              *(_QWORD *)fPending,
              &v51);
      if ( v32 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x826,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
          (const char *)(unsigned int)v32,
          v49);
      Microsoft::WRL::ComPtr<IResizeAreaClientProxy>::~ComPtr<IResizeAreaClientProxy>(fPending);
      v27 = v51;
    }
    IsEdition(0xAuLL);
    v33 = InputAppDelegation(v27);
    v35 = v34 | 4;
    if ( !v33 )
      v35 = v34;
    NtMITSetInputDelegationMode(v55, (unsigned int)v52, (unsigned int)v53, v35);
  }
  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`InputETW::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
  {
    v60 = (__int64)&`InputETW::Instance'::`2'::wrapper;
    Context = &qword_180278378;
    qword_180278378 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180278390 = (__int64)&`InputETW::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v61 = 0;
    wil::details::static_lazy<InputETW>::Completer::~Completer(&v60);
  }
  v36 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v36 > 5u && (*(_BYTE *)(v36 + 16) & 1) != 0 && (*(_QWORD *)(v36 + 24) & 1LL) == *(_QWORD *)(v36 + 24) )
  {
    v51 = 0;
    LODWORD(v53) = 0;
    LODWORD(v52) = 0;
    if ( a2 )
    {
      *(_QWORD *)fPending = 0LL;
      v37 = **(int (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
      if ( v37(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, fPending) >= 0 )
      {
        v38 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)fPending + 32LL))(
                *(_QWORD *)fPending,
                &v51);
        if ( v38 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8E,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v38,
            v49);
        v39 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 40LL))(*(_QWORD *)fPending, &v53);
        if ( v39 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8F,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v39,
            v49);
        v40 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 48LL))(*(_QWORD *)fPending, &v52);
        if ( v40 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x90,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inc\\InputETW.tlh",
            (const char *)(unsigned int)v40,
            v49);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)fPending);
    }
    v41 = *(_QWORD *)(wil::details::static_lazy<InputETW>::get(
                        v36,
                        _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v41 > 5u
      && (*(_BYTE *)(v41 + 16) & 1) != 0
      && (*(_QWORD *)(v41 + 24) & 1LL) == *(_QWORD *)(v41 + 24) )
    {
      v60 = (unsigned int)v52;
      Context = (LPVOID)(unsigned int)v53;
      *(_QWORD *)v57 = v51;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v41,
        (unsigned int)&unk_180237946,
        v41,
        v42,
        (__int64)v57,
        (__int64)&Context,
        (__int64)&v60);
    }
  }
  v43 = *((_QWORD *)this + 36);
  if ( v43
    && (v44 = (*(__int64 (__fastcall **)(__int64, __int64, struct IInputTarget *))(*(_QWORD *)v43 + 24LL))(v43, v6, a2),
        v45 = v44,
        v44 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x838,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v44,
      v49);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v59);
    return v45;
  }
  else
  {
    v47 = *((_QWORD *)this + 43);
    LODWORD(v52) = 0;
    v60 = (__int64)a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 8LL))(a2);
    *(_QWORD *)fPending = 0LL;
    if ( a2
      && (**(int (__fastcall ***)(struct IInputTarget *, GUID *, WINBOOL *))a2)(
           a2,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           fPending) >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)fPending + 48LL))(*(_QWORD *)fPending, &v52);
    }
    *(_DWORD *)(v47 + 72) = v52;
    v48 = *(_QWORD *)fPending;
    if ( *(_QWORD *)fPending )
    {
      *(_QWORD *)fPending = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    if ( a2 )
      (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a2 + 16LL))(a2);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::~ComPtr<HotkeyRegistrationForwarder>(&v59);
    return (unsigned int)v56;
  }
}
