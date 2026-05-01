/*
 * XREFs of CapabilityHelper::CreateSecurityAttributesForUWPCapability_0 @ 0x180710308
 * Callers:
 *     ?SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x180718844 (-SetIsImmersiveRemoteSession@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800EC96C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x1800ECB78 (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801ABC4C (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1801B84A0 (-reset@-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18050276C (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
_QWORD *__fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability_0(_QWORD *a1)
{
  __int64 v2; // rcx
  const struct HWND__ *v3; // rax
  int v4; // eax
  const char *v5; // r9
  __int64 v6; // rdx
  WCHAR *v7; // rcx
  WCHAR v8; // ax
  WCHAR *v9; // rax
  __int64 v10; // rdx
  WCHAR *v11; // rax
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rcx
  WCHAR *v16; // rdx
  __int64 v17; // rax
  char *v18; // r8
  WCHAR v19; // r9
  WCHAR *v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  WCHAR *v23; // rax
  __int64 v24; // r8
  const char *v25; // r9
  __int64 v26; // rcx
  WCHAR *v27; // rdx
  __int64 v28; // rax
  char *v29; // r8
  WCHAR v30; // r9
  WCHAR *v31; // rax
  __int64 v32; // rdx
  WCHAR *v33; // rax
  __int64 v34; // r8
  const char *v35; // r9
  __int64 v36; // rcx
  WCHAR *v37; // rdx
  __int64 v38; // rax
  char *v39; // r8
  WCHAR v40; // r9
  WCHAR *v41; // rax
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  HANDLE CurrentProcess; // rax
  const char *v45; // r9
  int v46; // eax
  void *v47; // rcx
  __int64 v48; // rdx
  WCHAR *v49; // rax
  __int64 v50; // r8
  const char *v51; // r9
  __int64 v52; // rcx
  WCHAR *v53; // rdx
  __int64 v54; // rax
  char *v55; // rdi
  WCHAR v56; // r8
  WCHAR *v57; // rax
  __int64 v58; // rdx
  WCHAR *v59; // rax
  __int64 v60; // r8
  const char *v61; // r9
  __int64 v62; // rcx
  WCHAR *v63; // rdx
  __int64 v64; // rax
  char *v65; // r8
  WCHAR v66; // r9
  WCHAR *v67; // rax
  __int64 v68; // rdx
  WCHAR *v69; // rax
  __int64 v70; // r8
  const char *v71; // r9
  __int64 v72; // rcx
  WCHAR *v73; // rdx
  __int64 v74; // rax
  char *v75; // r8
  WCHAR v76; // r9
  WCHAR *v77; // rax
  __int64 v78; // rdx
  WCHAR *v79; // rax
  __int64 v80; // r8
  const char *v81; // r9
  __int64 v82; // rbx
  WCHAR *v83; // rcx
  char *v84; // rax
  WCHAR v85; // dx
  WCHAR *v86; // rax
  const char *v87; // r9
  int v89; // [rsp+28h] [rbp-E0h]
  LPWSTR StringSid; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v91; // [rsp+38h] [rbp-D0h]
  HLOCAL v92; // [rsp+40h] [rbp-C8h] BYREF
  HLOCAL hMem; // [rsp+48h] [rbp-C0h] BYREF
  void *v94; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-B0h] BYREF
  void *v96; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v97; // [rsp+68h] [rbp-A0h]
  __int64 v98; // [rsp+78h] [rbp-90h]
  __int128 v99; // [rsp+80h] [rbp-88h] BYREF
  _BYTE Sid[48]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v101[48]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR StringSecurityDescriptor[1024]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+930h] [rbp+828h]

  v92 = a1;
  v99 = 0LL;
  v2 = 0x7FFFLL;
  v3 = &stru_180813A90;
  do
  {
    if ( !*(_WORD *)v3 )
      break;
    v3 = (const struct HWND__ *)((char *)v3 + 2);
    --v2;
  }
  while ( v2 );
  if ( !v2 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x15,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v2 == 0 ? (const char *)0xC000000DLL : 0,
      v89);
  LOWORD(v99) = 2 * (0x7FFF - v2);
  WORD1(v99) = v99 + 2;
  *((_QWORD *)&v99 + 1) = &stru_180813A90;
  v4 = RtlDeriveCapabilitySidsFromName(&v99, v101, Sid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(
      retaddr,
      (void *)0x1E,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v4,
      v89);
  v92 = 0LL;
  StringSid = 0LL;
  LOBYTE(v91) = 1;
  if ( !ConvertSidToStringSidW(Sid, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x22,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v5);
  if ( (_BYTE)v91 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v92,
      StringSid);
  v6 = 1024LL;
  v7 = StringSecurityDescriptor;
  do
  {
    if ( v6 == -2147482622 )
      break;
    v8 = *(WCHAR *)((char *)v7 + (char *)L"D:AI" - (char *)StringSecurityDescriptor);
    if ( !v8 )
      break;
    *v7++ = v8;
    --v6;
  }
  while ( v6 );
  v9 = v7 - 1;
  if ( v6 )
    v9 = v7;
  *v9 = 0;
  if ( !v6 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)0x8007007ALL,
      (int)&v92);
  v10 = 1024LL;
  v11 = StringSecurityDescriptor;
  do
  {
    if ( !*v11 )
      break;
    ++v11;
    --v10;
  }
  while ( v10 );
  v12 = (1024 - v10) & -(__int64)(v10 != 0);
  v13 = v10 == 0 ? (const char *)0x80070057LL : 0LL;
  v14 = 2147483646LL;
  if ( v10 )
  {
    v15 = 1024 - v12;
    v16 = &StringSecurityDescriptor[v12];
    if ( v12 != 1024 )
    {
      v17 = 2147483646LL;
      v18 = (char *)((char *)L"(A;CI;KA;;;" - (char *)v16);
      do
      {
        if ( !v17 )
          break;
        v19 = *(_WORD *)&v18[(_QWORD)v16];
        if ( !v19 )
          break;
        *v16++ = v19;
        --v17;
        --v15;
      }
      while ( v15 );
    }
    v20 = v16 - 1;
    if ( v15 )
      v20 = v16;
    *v20 = 0;
    v13 = v15 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v13,
      (int)&v92);
  v21 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)v92);
  if ( v21 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v21,
      (int)&v92);
  v22 = 1024LL;
  v23 = StringSecurityDescriptor;
  do
  {
    if ( !*v23 )
      break;
    ++v23;
    --v22;
  }
  while ( v22 );
  v24 = (1024 - v22) & -(__int64)(v22 != 0);
  v25 = v22 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v22 )
  {
    v26 = 1024 - v24;
    v27 = &StringSecurityDescriptor[v24];
    if ( v24 != 1024 )
    {
      v28 = 2147483646LL;
      v29 = (char *)((char *)L")" - (char *)v27);
      do
      {
        if ( !v28 )
          break;
        v30 = *(_WORD *)&v29[(_QWORD)v27];
        if ( !v30 )
          break;
        *v27++ = v30;
        --v28;
        --v26;
      }
      while ( v26 );
    }
    v31 = v27 - 1;
    if ( v26 )
      v31 = v27;
    *v31 = 0;
    v25 = v26 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v25,
      (int)&v92);
  v32 = 1024LL;
  v33 = StringSecurityDescriptor;
  do
  {
    if ( !*v33 )
      break;
    ++v33;
    --v32;
  }
  while ( v32 );
  v34 = (1024 - v32) & -(__int64)(v32 != 0);
  v35 = v32 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v32 )
  {
    v36 = 1024 - v34;
    v37 = &StringSecurityDescriptor[v34];
    if ( v34 != 1024 )
    {
      v38 = 2147483646LL;
      v39 = (char *)((char *)L"(A;OICIID;KA;;;" - (char *)v37);
      do
      {
        if ( !v38 )
          break;
        v40 = *(_WORD *)&v39[(_QWORD)v37];
        if ( !v40 )
          break;
        *v37++ = v40;
        --v38;
        --v36;
      }
      while ( v36 );
    }
    v41 = v37 - 1;
    if ( v36 )
      v41 = v37;
    *v41 = 0;
    v35 = v36 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v35 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v35,
      (int)&v92);
  hObject = 0LL;
  StringSid = 0LL;
  LOBYTE(v91) = 1;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 0, (PHANDLE)&StringSid) )
    goto LABEL_70;
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError == -2147023888 )
  {
    CurrentProcess = GetCurrentProcess();
    if ( OpenProcessToken(CurrentProcess, 8u, (PHANDLE)&StringSid) )
    {
LABEL_70:
      LastError = 0;
      goto LABEL_73;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
  }
LABEL_73:
  if ( LastError < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)LastError,
      (int)&hObject);
  if ( (_BYTE)v91 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      StringSid);
  wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(&v94);
  hMem = 0LL;
  StringSid = 0LL;
  LOBYTE(v91) = 1;
  if ( !ConvertSidToStringSidW(*(PSID *)v94, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x37,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v45);
  if ( (_BYTE)v91 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &hMem,
      StringSid);
  v46 = StringCchCatW(StringSecurityDescriptor, 1024LL, (char *)hMem);
  if ( v46 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      (const char *)(unsigned int)v46,
      (int)&hMem);
  if ( hMem )
    LocalFree(hMem);
  v47 = v94;
  v94 = 0LL;
  if ( v47 )
    operator delete(v47);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  v48 = 1024LL;
  v49 = StringSecurityDescriptor;
  do
  {
    if ( !*v49 )
      break;
    ++v49;
    --v48;
  }
  while ( v48 );
  v50 = (1024 - v48) & -(__int64)(v48 != 0);
  v51 = v48 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v48 )
  {
    v52 = 1024 - v50;
    v53 = &StringSecurityDescriptor[v50];
    if ( v50 != 1024 )
    {
      v54 = 2147483646LL;
      v55 = (char *)((char *)L")" - (char *)v53);
      do
      {
        if ( !v54 )
          break;
        v56 = *(_WORD *)&v55[(_QWORD)v53];
        if ( !v56 )
          break;
        *v53++ = v56;
        --v54;
        --v52;
      }
      while ( v52 );
    }
    v57 = v53 - 1;
    if ( v52 )
      v57 = v53;
    *v57 = 0;
    v51 = v52 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v51 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v51,
      (int)&hMem);
  v58 = 1024LL;
  v59 = StringSecurityDescriptor;
  do
  {
    if ( !*v59 )
      break;
    ++v59;
    --v58;
  }
  while ( v58 );
  v60 = (1024 - v58) & -(__int64)(v58 != 0);
  v61 = v58 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v58 )
  {
    v62 = 1024 - v60;
    v63 = &StringSecurityDescriptor[v60];
    if ( v60 != 1024 )
    {
      v64 = 2147483646LL;
      v65 = (char *)((char *)L"(A;OICIID;KA;;;SY)" - (char *)v63);
      do
      {
        if ( !v64 )
          break;
        v66 = *(_WORD *)&v65[(_QWORD)v63];
        if ( !v66 )
          break;
        *v63++ = v66;
        --v64;
        --v62;
      }
      while ( v62 );
    }
    v67 = v63 - 1;
    if ( v62 )
      v67 = v63;
    *v67 = 0;
    v61 = v62 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v61 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v61,
      (int)&hMem);
  v68 = 1024LL;
  v69 = StringSecurityDescriptor;
  do
  {
    if ( !*v69 )
      break;
    ++v69;
    --v68;
  }
  while ( v68 );
  v70 = (1024 - v68) & -(__int64)(v68 != 0);
  v71 = v68 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v68 )
  {
    v72 = 1024 - v70;
    v73 = &StringSecurityDescriptor[v70];
    if ( v70 != 1024 )
    {
      v74 = 2147483646LL;
      v75 = (char *)((char *)L"(A;OICIID;KA;;;BA)" - (char *)v73);
      do
      {
        if ( !v74 )
          break;
        v76 = *(_WORD *)&v75[(_QWORD)v73];
        if ( !v76 )
          break;
        *v73++ = v76;
        --v74;
        --v72;
      }
      while ( v72 );
    }
    v77 = v73 - 1;
    if ( v72 )
      v77 = v73;
    *v77 = 0;
    v71 = v72 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v71 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v71,
      (int)&hMem);
  v78 = 1024LL;
  v79 = StringSecurityDescriptor;
  do
  {
    if ( !*v79 )
      break;
    ++v79;
    --v78;
  }
  while ( v78 );
  v80 = (1024 - v78) & -(__int64)(v78 != 0);
  v81 = v78 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v78 )
  {
    v82 = 1024 - v80;
    v83 = &StringSecurityDescriptor[v80];
    if ( 1024 != v80 )
    {
      v84 = (char *)((char *)L"(A;OICIID;KR;;;RC)" - (char *)v83);
      do
      {
        if ( !v14 )
          break;
        v85 = *(_WORD *)&v84[(_QWORD)v83];
        if ( !v85 )
          break;
        *v83++ = v85;
        --v14;
        --v82;
      }
      while ( v82 );
    }
    v86 = v83 - 1;
    if ( v82 )
      v86 = v83;
    *v86 = 0;
    v81 = v82 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v81 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v81,
      (int)&hMem);
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  StringSid = 0LL;
  LOBYTE(v91) = 1;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          StringSecurityDescriptor,
          1u,
          (PSECURITY_DESCRIPTOR *)&StringSid,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x44,
      (int)"shellcommon\\internal\\shell\\inc\\private\\CapabilityHelper.h",
      v87);
  if ( (_BYTE)v91 )
    wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &v96,
      StringSid);
  LODWORD(v97) = 24;
  *((_QWORD *)&v97 + 1) = v96;
  *a1 = v96;
  v96 = 0LL;
  *(_OWORD *)(a1 + 1) = v97;
  a1[3] = v98;
  if ( v92 )
    LocalFree(v92);
  return a1;
}
