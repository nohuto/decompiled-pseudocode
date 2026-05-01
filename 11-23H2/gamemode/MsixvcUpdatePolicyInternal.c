/*
 * XREFs of MsixvcUpdatePolicyInternal @ 0x180004DC4
 * Callers:
 *     MsixvcUpdatePolicyString @ 0x1800054E0 (MsixvcUpdatePolicyString.c)
 *     MsixvcUpdatePolicyUInt64 @ 0x180005530 (MsixvcUpdatePolicyUInt64.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800027A8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z @ 0x180005BD0 (--$-0PEB_W@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEB_WUDummy@Details@23@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180005C50 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005C6C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180007C20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=66
__int64 __fastcall MsixvcUpdatePolicyInternal(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int ActivationFactory; // eax
  int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  HRESULT v14; // eax
  void *v15; // rdx
  unsigned int v16; // r8d
  IUnknown *v17; // rbx
  ULONG (__stdcall *AddRef)(IUnknown *); // rdi
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  HRESULT v22; // eax
  int v23; // edx
  unsigned int v24; // r8d
  HSTRING v25; // rbx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 (__fastcall *v29)(__int64, __int64, _QWORD, _QWORD, int *); // rdi
  __int64 v30; // rax
  HRESULT v31; // eax
  int v32; // edx
  unsigned int v33; // r8d
  HSTRING v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rcx
  unsigned __int64 v37; // r9
  __int64 v38; // rbx
  __int64 (__fastcall *v39)(__int64, _QWORD); // rdi
  __int64 v40; // rax
  __int64 v41; // rbx
  __int64 (__fastcall *v42)(__int64, _QWORD); // rdi
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 (__fastcall *v45)(__int64, _QWORD); // rdi
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  IUnknown *v50; // rcx
  int dwAuthnLevel; // [rsp+20h] [rbp-71h]
  int v53[2]; // [rsp+40h] [rbp-51h] BYREF
  _BYTE v54[8]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v55; // [rsp+50h] [rbp-41h] BYREF
  __int64 v56; // [rsp+58h] [rbp-39h] BYREF
  IUnknown *pProxy; // [rsp+60h] [rbp-31h] BYREF
  __int64 v58; // [rsp+68h] [rbp-29h] BYREF
  int v59; // [rsp+70h] [rbp-21h] BYREF
  __int64 v60; // [rsp+78h] [rbp-19h] BYREF
  __int64 v61; // [rsp+80h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-9h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  v58 = a1;
  v60 = a2;
  v61 = a4;
  pProxy = 0LL;
  v56 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Package", 0x28u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419, &pProxy);
  v11 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v12 = (unsigned int)ActivationFactory;
    v13 = 51LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
      (const char *)v12);
    goto LABEL_65;
  }
  v14 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, (OLECHAR *)0xFFFFFFFFFFFFFFFFLL, 0, 3u, 0LL, 0x40u);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(retaddr, v15, v16, (const char *)(unsigned int)v14, dwAuthnLevel);
  v17 = pProxy;
  AddRef = pProxy->lpVtbl[17].AddRef;
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v58);
  v20 = ((__int64 (__fastcall *)(IUnknown *, _QWORD, _QWORD, __int64 *))AddRef)(v17, 0LL, *(_QWORD *)(v19 + 24), &v56);
  v11 = v20;
  if ( v20 < 0 )
  {
    v12 = (unsigned int)v20;
    v13 = 53LL;
    goto LABEL_14;
  }
  if ( (int)IsDeveloperModeEnabled(&v59) < 0 || !v59 )
  {
    v21 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v56 + 416LL))(v56, v54);
    v11 = v21;
    if ( v21 < 0 )
    {
      v12 = (unsigned int)v21;
      v13 = 62LL;
      goto LABEL_14;
    }
    if ( !v54[0] )
    {
      v11 = -2147024809;
      v12 = 2147942487LL;
      v13 = 63LL;
      goto LABEL_14;
    }
  }
  v55 = 0LL;
  *(_QWORD *)v53 = 0LL;
  string = 0LL;
  v22 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &string);
  if ( v22 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22, v23, v24);
    JUMPOUT(0x1800054C9LL);
  }
  v25 = string;
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  v26 = RoGetActivationFactory(v25, &GUID_93b105c2_0759_4c56_b8da_6e8f72ac464e, &v55);
  v11 = v26;
  if ( v26 < 0 )
  {
    v27 = 68LL;
LABEL_58:
    v37 = (unsigned int)v26;
    goto LABEL_59;
  }
  v28 = v55;
  v29 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int *))(*(_QWORD *)v55 + 728LL);
  v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v60);
  v26 = v29(v28, v56, *(_QWORD *)(v30 + 24), a3, v53);
  v11 = v26;
  if ( v26 < 0 )
  {
    v27 = 69LL;
    goto LABEL_58;
  }
  if ( *(_QWORD *)v53 )
  {
    v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v53 + 216LL))(*(_QWORD *)v53, a5);
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 92LL;
      goto LABEL_58;
    }
    if ( a4 )
    {
      v44 = *(_QWORD *)v53;
      v45 = *(__int64 (__fastcall **)(__int64, _QWORD))(**(_QWORD **)v53 + 200LL);
      v46 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v61);
      v26 = v45(v44, *(_QWORD *)(v46 + 24));
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 96LL;
        goto LABEL_58;
      }
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v53 + 184LL))(*(_QWORD *)v53);
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 100LL;
        goto LABEL_58;
      }
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 56LL))(v55, *(_QWORD *)v53);
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 103LL;
      goto LABEL_58;
    }
    goto LABEL_60;
  }
  string = 0LL;
  v31 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackagePolicy", 0x2Eu, &hstringHeader, &string);
  if ( v31 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v31, v32, v33);
    __debugbreak();
  }
  v34 = string;
  v35 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 )
  {
    *(_QWORD *)v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  *(_QWORD *)v53 = 0LL;
  v11 = RoActivateInstance(v34, &v58);
  if ( v11 >= 0 )
  {
    if ( *(_QWORD *)&GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v36 = v58;
      *(_QWORD *)v53 = v58;
      goto LABEL_32;
    }
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v58)(
            v58,
            &GUID_d8cc81b3_171d_4e8b_8663_79cc87408d04,
            v53);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
  v36 = *(_QWORD *)v53;
LABEL_32:
  if ( v11 >= 0 )
  {
    v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 136LL))(v36, v56);
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 74LL;
      goto LABEL_58;
    }
    v38 = *(_QWORD *)v53;
    v39 = *(__int64 (__fastcall **)(__int64, _QWORD))(**(_QWORD **)v53 + 152LL);
    v40 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v60);
    v26 = v39(v38, *(_QWORD *)(v40 + 24));
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 75LL;
      goto LABEL_58;
    }
    v26 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v53 + 168LL))(*(_QWORD *)v53, a3);
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 76LL;
      goto LABEL_58;
    }
    v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v53 + 216LL))(*(_QWORD *)v53, a5);
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 77LL;
      goto LABEL_58;
    }
    if ( a4 )
    {
      v41 = *(_QWORD *)v53;
      v42 = *(__int64 (__fastcall **)(__int64, _QWORD))(**(_QWORD **)v53 + 200LL);
      v43 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v61);
      v26 = v42(v41, *(_QWORD *)(v43 + 24));
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 81LL;
        goto LABEL_58;
      }
    }
    else
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v53 + 184LL))(*(_QWORD *)v53);
      v11 = v26;
      if ( v26 < 0 )
      {
        v27 = 85LL;
        goto LABEL_58;
      }
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 48LL))(v55, *(_QWORD *)v53);
    v11 = v26;
    if ( v26 < 0 )
    {
      v27 = 88LL;
      goto LABEL_58;
    }
LABEL_60:
    v11 = 0;
    goto LABEL_61;
  }
  v37 = (unsigned int)v11;
  v27 = 73LL;
LABEL_59:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (int)"onecoreuap\\xbox\\gamemode\\dll\\exports.cpp",
    (const char *)v37);
LABEL_61:
  v47 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 )
  {
    *(_QWORD *)v53 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  v48 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
LABEL_65:
  v49 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
  v50 = pProxy;
  if ( pProxy )
  {
    pProxy = 0LL;
    ((void (__fastcall *)(IUnknown *))v50->lpVtbl->Release)(v50);
  }
  return (unsigned int)v11;
}
