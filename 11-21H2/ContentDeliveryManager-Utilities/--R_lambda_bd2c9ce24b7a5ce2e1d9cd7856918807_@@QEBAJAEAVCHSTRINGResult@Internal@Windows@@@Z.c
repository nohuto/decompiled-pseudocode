/*
 * XREFs of ??R_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z @ 0x18002B7F8
 * Callers:
 *     ?Run@?$COperationLambdaVar@$0A@V_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCHSTRINGResult@23@@Z @ 0x180044A70 (-Run@-$COperationLambdaVar@$0A@V_lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_@@VCHSTRINGResult@Inter.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180025F34 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Sec.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800265C8 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18003F5AC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=34
__int64 __fastcall _lambda_bd2c9ce24b7a5ce2e1d9cd7856918807_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  int ActivationFactory; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  int v12; // eax
  HRESULT v13; // edx
  __int64 v14; // r8
  int v15; // eax
  int (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rdi
  int v17; // eax
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  __int64 (__fastcall **v24)(__int64, GUID *, __int64 *); // rax
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, HSTRING *); // rdi
  int v28; // eax
  const WCHAR *StringRawBuffer; // rax
  HRESULT v30; // eax
  int v31; // edx
  unsigned int v32; // r8d
  int v33; // eax
  HRESULT v34; // eax
  int v35; // edx
  unsigned int v36; // r8d
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, __int64, _QWORD, PVOID); // rdi
  HSTRING_HEADER *v43; // rax
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  DWORD v47; // edx
  int v48; // r8d
  __int64 *v49; // rcx
  __int64 (__fastcall ***v50)(_QWORD, GUID *, __int64 *); // rdi
  int v51; // eax
  __int64 v52; // rax
  int v53; // eax
  int v54; // eax
  HSTRING v55; // rdi
  HSTRING *v56; // rbx
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  __int64 v60; // rax
  int v61; // eax
  int v62; // eax
  HSTRING v63; // rdi
  HSTRING *v64; // rbx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-B9h]
  HSTRING v66; // [rsp+40h] [rbp-99h] BYREF
  __int64 *v67; // [rsp+48h] [rbp-91h] BYREF
  int (__fastcall ***v68)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-89h] BYREF
  __int64 *v69; // [rsp+58h] [rbp-81h] BYREF
  __int64 *v70; // [rsp+60h] [rbp-79h] BYREF
  __int64 (__fastcall ***v71)(__int64, GUID *, __int64 *); // [rsp+68h] [rbp-71h] BYREF
  __int64 v72; // [rsp+70h] [rbp-69h] BYREF
  __int64 *v73; // [rsp+78h] [rbp-61h] BYREF
  __int64 *v74; // [rsp+80h] [rbp-59h] BYREF
  __int64 v75; // [rsp+88h] [rbp-51h] BYREF
  __int64 v76; // [rsp+90h] [rbp-49h] BYREF
  __int64 *v77; // [rsp+98h] [rbp-41h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-39h]
  __int64 (__fastcall ***v79)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp-31h] BYREF
  unsigned int v80; // [rsp+B0h] [rbp-29h] BYREF
  unsigned int v81; // [rsp+B4h] [rbp-25h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-21h] BYREF
  int v83; // [rsp+C0h] [rbp-19h] BYREF
  HSTRING v84; // [rsp+C8h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-9h] BYREF
  HSTRING string; // [rsp+E8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  v84 = 0LL;
  v4 = 0;
  v69 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    goto LABEL_513;
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, &v69);
  v9 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EA,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory,
      bIgnoreCase);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v68 = 0LL;
  v11 = *v69;
  v68 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v11 + 96))(v69, &v68);
  v9 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v12,
      bIgnoreCase);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v67 = 0LL;
  v15 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(
          v68,
          v13,
          v14);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v15,
      bIgnoreCase);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v16 = (*v68)[8];
  v67 = 0LL;
  v17 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 **))v16)(v68, &v67);
  v9 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v17,
      bIgnoreCase);
    if ( v67 )
      (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v81 = 0;
  v18 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v67 + 56))(v67, &v81);
  v9 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F4,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v18,
      bIgnoreCase);
    if ( v67 )
      (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v19 = 0;
  if ( !v81 )
  {
LABEL_77:
    v55 = v84;
    v56 = (HSTRING *)(a2 + 16);
    if ( !v84 || v84 != *v56 )
    {
      WindowsDeleteString(*v56);
      *v56 = 0LL;
      WindowsDuplicateString(v55, (HSTRING *)(a2 + 16));
    }
    if ( v67 )
      (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v4;
  }
  while ( 1 )
  {
    v70 = 0LL;
    v20 = *v67;
    v70 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v20 + 48))(v67, v19, &v70);
    v9 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F9,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v21,
        bIgnoreCase);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v71 = 0LL;
    v22 = *v70;
    v71 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(v22 + 48))(
            v70,
            &v71);
    v9 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FC,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v23,
        bIgnoreCase);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v72 = 0LL;
    v24 = *v71;
    v72 = 0LL;
    v25 = (*v24)((__int64)v71, &GUID_4a01eb05_4e42_41d4_b518_e008a5163614, &v72);
    v9 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FF,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v25,
        bIgnoreCase);
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v66 = 0LL;
    v26 = v72;
    v27 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v72 + 56LL);
    WindowsDeleteString(0LL);
    v66 = 0LL;
    v28 = v27(v26, &v66);
    v9 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x202,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v28,
        bIgnoreCase);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v66, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"consumers", -1, 0) != 2 )
      goto LABEL_70;
    v74 = 0LL;
    string = 0LL;
    v30 = WindowsCreateStringReference(
            L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager",
            0x45u,
            &hstringHeader,
            &string);
    if ( v30 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v30, v31, v32);
LABEL_513:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
LABEL_514:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v34, v35, v36);
      JUMPOUT(0x18002DFC0LL);
    }
    v33 = RoGetActivationFactory(string, &GUID_6aca7c92_a581_4479_9c10_752eff44fd34, &v74);
    v9 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x207,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v33,
        bIgnoreCase);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v76 = 0LL;
    string = 0LL;
    v34 = WindowsCreateStringReference(
            L"Windows.Security.Authentication.Web.Core.WebTokenRequest",
            0x38u,
            &hstringHeader,
            &string);
    if ( v34 < 0 )
      goto LABEL_514;
    v37 = RoGetActivationFactory(string, &GUID_6cf2141c_0ff0_4c67_b84f_99ddbe4a72c9, &v76);
    v9 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20A,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v37,
        bIgnoreCase);
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v75 = 0LL;
    v38 = *v70;
    v75 = 0LL;
    v39 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v38 + 48))(v70, &v75);
    v9 = v39;
    if ( v39 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x20D,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v39,
        bIgnoreCase);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v78 = 0LL;
    v73 = 0LL;
    v41 = v76;
    v42 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, PVOID))(*(_QWORD *)v76 + 56LL);
    v78 = 0LL;
    v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const WCHAR **)&off_180109298,
            v40);
    bIgnoreCase = 0;
    v44 = v42(v41, v75, *(_QWORD *)(a1 + 8), v43[1].Reserved.Reserved1);
    v9 = v44;
    if ( v44 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x211,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v44,
        0);
      if ( v73 )
        (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
      if ( v78 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v79 = 0LL;
    v45 = *v74;
    v79 = 0LL;
    v46 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v45 + 56))(
            v74,
            v78,
            v70,
            &v79);
    v9 = v46;
    if ( v46 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x214,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v46,
        0);
      if ( v79 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
      if ( v73 )
        (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
      if ( v78 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v49 = v73;
    v73 = 0LL;
    if ( v49 )
      (*(void (__fastcall **)(__int64 *))(*v49 + 16))(v49);
    v50 = v79;
    v9 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult *> *>(
           v79,
           v47,
           v48);
    if ( (v9 & 0x80000000) == 0 )
      v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 **))(*v50)[8])(
             v50,
             &v73);
    if ( (v9 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x216,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)v9,
        0);
      if ( v79 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
      if ( v73 )
        (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
      if ( v78 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v51 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v73 + 56))(v73, &v83);
    v9 = v51;
    if ( v51 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x219,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v51,
        0);
      if ( v79 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
      if ( v73 )
        (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
      if ( v78 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v77 = 0LL;
    if ( !v83 )
      break;
    v52 = *v73;
    v77 = 0LL;
    v53 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v52 + 64))(v73, &v77);
    v9 = v53;
    if ( v53 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22B,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v53,
        0);
      if ( v77 )
        (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
      if ( v79 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
      if ( v73 )
        (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
      if ( v78 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v54 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v77 + 48))(v77, &v80);
    v9 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22D,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v54,
        0);
      if ( v77 )
        (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
      if ( v79 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
      if ( v73 )
        (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
      if ( v78 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
      if ( v75 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      if ( v76 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
      if ( v74 )
        (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
      WindowsDeleteString(v66);
      v66 = 0LL;
      if ( v72 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      if ( v71 )
        ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
      if ( v70 )
        (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
      if ( v67 )
        (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
      if ( v68 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
      if ( v69 )
        (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
      return v9;
    }
    v4 = v80;
    if ( v77 )
      (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
    if ( v79 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
    if ( v73 )
      (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    if ( v75 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    if ( v76 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    if ( v74 )
      (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
LABEL_70:
    WindowsDeleteString(v66);
    v66 = 0LL;
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    if ( v71 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
    if ( v70 )
      (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
    if ( ++v19 >= v81 )
      goto LABEL_77;
  }
  v57 = *v73;
  v77 = 0LL;
  v58 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v57 + 48))(v73, &v77);
  v9 = v58;
  if ( v58 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21D,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v58,
      0);
    if ( v77 )
      (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
    if ( v79 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
    if ( v73 )
      (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    if ( v75 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    if ( v76 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    if ( v74 )
      (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
    WindowsDeleteString(v66);
    v66 = 0LL;
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    if ( v71 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
    if ( v70 )
      (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
    if ( v67 )
      (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v80 = 0;
  v59 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v77 + 56))(v77, &v80);
  v9 = v59;
  if ( v59 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21F,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v59,
      0);
    if ( v77 )
      (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
    if ( v79 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
    if ( v73 )
      (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    if ( v75 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    if ( v76 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    if ( v74 )
      (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
    WindowsDeleteString(v66);
    v66 = 0LL;
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    if ( v71 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
    if ( v70 )
      (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
    if ( v67 )
      (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  if ( v80 != 1 )
  {
    v9 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x220,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)0x8000FFFFLL,
      0);
    if ( v77 )
      (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
    if ( v79 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
    if ( v73 )
      (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    if ( v75 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    if ( v76 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    if ( v74 )
      (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
    WindowsDeleteString(v66);
    v66 = 0LL;
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    if ( v71 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
    if ( v70 )
      (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
    if ( v67 )
      (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v82 = 0LL;
  v60 = *v77;
  v82 = 0LL;
  v61 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v60 + 48))(v77, 0LL, &v82);
  v9 = v61;
  if ( v61 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x222,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v61,
      0);
    if ( v82 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
    if ( v77 )
      (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
    if ( v79 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
    if ( v73 )
      (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    if ( v75 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    if ( v76 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    if ( v74 )
      (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
    WindowsDeleteString(v66);
    v66 = 0LL;
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    if ( v71 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
    if ( v70 )
      (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
    if ( v67 )
      (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v62 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v82 + 48LL))(v82, &v84);
  v9 = v62;
  if ( v62 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x223,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v62,
      0);
    if ( v82 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
    if ( v77 )
      (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
    if ( v79 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
    if ( v73 )
      (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    if ( v75 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    if ( v76 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    if ( v74 )
      (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
    WindowsDeleteString(v66);
    v66 = 0LL;
    if ( v72 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    if ( v71 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
    if ( v70 )
      (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
    if ( v67 )
      (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
    if ( v68 )
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
    if ( v69 )
      (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
    return v9;
  }
  v63 = v84;
  v64 = (HSTRING *)(a2 + 16);
  if ( !v84 || v84 != *v64 )
  {
    WindowsDeleteString(*v64);
    *v64 = 0LL;
    WindowsDuplicateString(v63, (HSTRING *)(a2 + 16));
  }
  if ( v82 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
  if ( v77 )
    (*(void (__fastcall **)(__int64 *))(*v77 + 16))(v77);
  if ( v79 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v79)[2])(v79);
  if ( v73 )
    (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
  if ( v78 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
  if ( v75 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
  if ( v76 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
  if ( v74 )
    (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
  WindowsDeleteString(v66);
  v66 = 0LL;
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
  if ( v71 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v71)[2])(v71);
  if ( v70 )
    (*(void (__fastcall **)(__int64 *))(*v70 + 16))(v70);
  if ( v67 )
    (*(void (__fastcall **)(__int64 *))(*v67 + 16))(v67);
  if ( v68 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v68)[2])(v68);
  if ( v69 )
    (*(void (__fastcall **)(__int64 *))(*v69 + 16))(v69);
  return 0LL;
}
