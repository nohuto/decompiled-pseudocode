/*
 * XREFs of ??R_lambda_decfc2b5d7d156b6ba938ed014370ad3_@@QEBAJXZ @ 0x18002E3C8
 * Callers:
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18003B0E0 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180023EEC (--$-0PEBG@StringReference@Internal@Windows@@QEAA@AEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall _lambda_decfc2b5d7d156b6ba938ed014370ad3_::operator()(__int64 a1)
{
  HSTRING *v2; // r14
  unsigned int v3; // ebx
  PCWSTR v5; // rcx
  HSTRING *v6; // rdi
  int v7; // eax
  const WCHAR *v8; // rcx
  PCWSTR v9; // rcx
  int v10; // eax
  const WCHAR *v11; // rcx
  PCWSTR v12; // rcx
  const WCHAR *v13; // rcx
  HSTRING v14; // rbx
  __int64 v15; // rcx
  int ActivationFactory; // eax
  __int64 v17; // rcx
  PCWSTR v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64 *); // rdi
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  PCWSTR v25; // rcx
  HSTRING v26; // rbx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  PCWSTR v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  PCWSTR v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  PCWSTR v44; // rcx
  int v45; // [rsp+28h] [rbp-29h]
  PCWSTR v46; // [rsp+38h] [rbp-19h] BYREF
  __int64 v47; // [rsp+40h] [rbp-11h] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-9h] BYREF
  __int64 v49; // [rsp+50h] [rbp-1h] BYREF
  __int64 v50; // [rsp+58h] [rbp+7h] BYREF
  __int64 v51; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+68h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v2 = *(HSTRING **)a1;
  if ( WindowsIsStringEmpty(**(HSTRING **)a1) )
  {
    v3 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)0x80070057LL,
      v45);
    return v3;
  }
  v46 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.System.LauncherOptions", 0x1Eu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v46 = 0LL;
  v3 = RoActivateInstance(string, &StringRawBuffer);
  if ( (v3 & 0x80000000) == 0 )
  {
    if ( *(_QWORD *)&GUID_bafa21d8_b071_4cd8_853e_341203e557d3.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_bafa21d8_b071_4cd8_853e_341203e557d3.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      v46 = StringRawBuffer;
    }
    else
    {
      v3 = (**(__int64 (__fastcall ***)(PCWSTR, GUID *, PCWSTR *))StringRawBuffer)(
             StringRawBuffer,
             &GUID_bafa21d8_b071_4cd8_853e_341203e557d3,
             &v46);
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)StringRawBuffer + 16LL))(StringRawBuffer);
    }
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v3,
      v45);
    v5 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v3;
  }
  v6 = *(HSTRING **)(a1 + 8);
  if ( !WindowsIsStringEmpty(*v6) )
  {
    StringRawBuffer = 0LL;
    v7 = (**(__int64 (__fastcall ***)(PCWSTR, GUID *, PCWSTR *))v46)(
           v46,
           &GUID_3ba08eb4_6e40_4dce_a1a3_2f53950afb49,
           &StringRawBuffer);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14B,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v7,
        v45);
      v8 = StringRawBuffer;
      if ( StringRawBuffer )
      {
        StringRawBuffer = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      v9 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return v3;
    }
    v10 = (*(__int64 (__fastcall **)(PCWSTR, HSTRING))(*(_QWORD *)StringRawBuffer + 56LL))(StringRawBuffer, *v6);
    v3 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14B,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v10,
        v45);
      v11 = StringRawBuffer;
      if ( StringRawBuffer )
      {
        StringRawBuffer = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v12 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v12 + 16LL))(v12);
      }
      return v3;
    }
    v13 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      StringRawBuffer = 0LL;
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v47 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.Uri", 0x16u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v14 = string;
  v15 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  ActivationFactory = RoGetActivationFactory(v14, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, &v47);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v45);
    v17 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v18 + 16LL))(v18);
    }
    return v3;
  }
  v50 = 0LL;
  v19 = v47;
  v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v47 + 48LL);
  StringRawBuffer = WindowsGetStringRawBuffer(*v2, 0LL);
  v21 = (_QWORD *)Windows::Internal::StringReference::StringReference((__int64)&string, &StringRawBuffer);
  v22 = v20(v19, *v21, &v50);
  v3 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v22,
      v45);
    v23 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    v25 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v25 + 16LL))(v25);
    }
    return v3;
  }
  v49 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.System.Launcher", 0x17u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v26 = string;
  v27 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = RoGetActivationFactory(v26, &GUID_277151c3_9e3e_42f6_91a4_5dfdeb232451, &v49);
  v3 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v28,
      v45);
    v29 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v32 + 16LL))(v32);
    }
    return v3;
  }
  v51 = 0LL;
  v33 = (*(__int64 (__fastcall **)(__int64, __int64, PCWSTR, __int64 *))(*(_QWORD *)v49 + 72LL))(v49, v50, v46, &v51);
  v3 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v33,
      v45);
    v34 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    v35 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = v47;
    if ( v47 )
    {
      v47 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v38 + 16LL))(v38);
    }
    return v3;
  }
  v39 = v51;
  v51 = 0LL;
  ***(_QWORD ***)(a1 + 16) = v39;
  v40 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  }
  v41 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
  v42 = v50;
  if ( v50 )
  {
    v50 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  v43 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
  v44 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(PCWSTR))(*(_QWORD *)v44 + 16LL))(v44);
  }
  return 0LL;
}
