/*
 * XREFs of CapabilityHelper::CreateSecurityAttributesForUWPCapability @ 0x1800E57D0
 * Callers:
 *     ?PreCreateVolatileRegkey@StartDocked@@YAXXZ @ 0x1800657CC (-PreCreateVolatileRegkey@StartDocked@@YAXXZ.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065868 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800C8D08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800E607C (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA?AV?$unique_ptr@U_TOKEN_USER@@U?$default_delete@U_TOKEN_USER@@@wistd@@@wistd@@PEAX@Z @ 0x180148C0C (--$GetTokenInfoWrap@U_TOKEN_USER@@Uerr_exception_policy@wil@@$0A@@details@wil@@YA-AV-$unique_ptr.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180176FCC (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18044C430 (-_Throw_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CapabilityHelper::CreateSecurityAttributesForUWPCapability(__int64 a1)
{
  __int64 v2; // rdx
  const struct HWND__ *v3; // rax
  int v4; // eax
  unsigned int v5; // r8d
  const char *v6; // r9
  __int64 v7; // rdx
  WCHAR *v8; // rcx
  WCHAR v9; // ax
  WCHAR *v10; // rax
  __int64 v11; // rdx
  WCHAR *v12; // rax
  __int64 v13; // r8
  const char *v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rcx
  WCHAR *v17; // rdx
  __int64 v18; // rax
  char *v19; // r8
  WCHAR v20; // r9
  WCHAR *v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  WCHAR *v24; // rax
  __int64 v25; // r8
  const char *v26; // r9
  __int64 v27; // rcx
  WCHAR *v28; // rdx
  __int64 v29; // rax
  char *v30; // r8
  WCHAR v31; // r9
  WCHAR *v32; // rax
  __int64 v33; // rdx
  WCHAR *v34; // rax
  __int64 v35; // r8
  const char *v36; // r9
  __int64 v37; // rcx
  WCHAR *v38; // rdx
  __int64 v39; // rax
  char *v40; // r8
  WCHAR v41; // r9
  WCHAR *v42; // rax
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  HANDLE CurrentProcess; // rax
  const char *v46; // r9
  int v47; // eax
  void *v48; // rcx
  __int64 v49; // rdx
  WCHAR *v50; // rax
  __int64 v51; // r8
  const char *v52; // r9
  __int64 v53; // rcx
  WCHAR *v54; // rdx
  __int64 v55; // rax
  char *v56; // rdi
  WCHAR v57; // r8
  WCHAR *v58; // rax
  __int64 v59; // rdx
  WCHAR *v60; // rax
  __int64 v61; // r8
  const char *v62; // r9
  __int64 v63; // rcx
  WCHAR *v64; // rdx
  __int64 v65; // rax
  char *v66; // r8
  WCHAR v67; // r9
  WCHAR *v68; // rax
  __int64 v69; // rdx
  WCHAR *v70; // rax
  __int64 v71; // r8
  const char *v72; // r9
  __int64 v73; // rcx
  WCHAR *v74; // rdx
  __int64 v75; // rax
  char *v76; // r8
  WCHAR v77; // r9
  WCHAR *v78; // rax
  __int64 v79; // rdx
  WCHAR *v80; // rax
  __int64 v81; // r8
  const char *v82; // r9
  __int64 v83; // rbx
  WCHAR *v84; // rcx
  char *v85; // rax
  WCHAR v86; // dx
  WCHAR *v87; // rax
  const char *v88; // r9
  LPWSTR v89; // r14
  LPWSTR v90; // rsi
  DWORD v92; // ebx
  int v93; // [rsp+28h] [rbp-E0h]
  LPWSTR StringSid; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v95; // [rsp+38h] [rbp-D0h]
  unsigned __int16 *v96; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v97; // [rsp+48h] [rbp-C0h] BYREF
  void *v98; // [rsp+50h] [rbp-B8h] BYREF
  int v99[2]; // [rsp+58h] [rbp-B0h] BYREF
  LPWSTR v100; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v101; // [rsp+68h] [rbp-A0h]
  __int64 v102; // [rsp+78h] [rbp-90h]
  __int128 v103; // [rsp+80h] [rbp-88h] BYREF
  _BYTE Sid[48]; // [rsp+90h] [rbp-78h] BYREF
  char v105[56]; // [rsp+C0h] [rbp-48h] BYREF
  WCHAR StringSecurityDescriptor[1024]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+930h] [rbp+828h]

  v96 = (unsigned __int16 *)a1;
  v103 = 0LL;
  v2 = 0x7FFFLL;
  v3 = &stru_180689FE8;
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
      (unsigned int)&stru_180689FE8,
      v2 == 0 ? (const char *)0xC000000DLL : 0,
      v93);
  LOWORD(v103) = 2 * (0x7FFF - v2);
  WORD1(v103) = v103 + 2;
  *((_QWORD *)&v103 + 1) = &stru_180689FE8;
  v4 = RtlDeriveCapabilitySidsFromName(&v103, v105, Sid);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_NtStatus(retaddr, (void *)0x1E, v5, (const char *)(unsigned int)v4, v93);
  v96 = 0LL;
  StringSid = 0LL;
  LOBYTE(v95) = 1;
  if ( !ConvertSidToStringSidW(Sid, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x22,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v6);
  if ( (_BYTE)v95 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v96,
      StringSid);
  v7 = 1024LL;
  v8 = StringSecurityDescriptor;
  do
  {
    if ( v7 == -2147482622 )
      break;
    v9 = *(WCHAR *)((char *)v8 + (char *)L"D:AI" - (char *)StringSecurityDescriptor);
    if ( !v9 )
      break;
    *v8++ = v9;
    --v7;
  }
  while ( v7 );
  v10 = v8 - 1;
  if ( v7 )
    v10 = v8;
  *v10 = 0;
  if ( !v7 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      (const char *)0x8007007ALL,
      (int)&v96);
  v11 = 1024LL;
  v12 = StringSecurityDescriptor;
  do
  {
    if ( !*v12 )
      break;
    ++v12;
    --v11;
  }
  while ( v11 );
  v13 = (1024 - v11) & -(__int64)(v11 != 0);
  v14 = v11 == 0 ? (const char *)0x80070057LL : 0LL;
  v15 = 2147483646LL;
  if ( v11 )
  {
    v16 = 1024 - v13;
    v17 = &StringSecurityDescriptor[v13];
    if ( v13 != 1024 )
    {
      v18 = 2147483646LL;
      v19 = (char *)((char *)L"(A;CI;KA;;;" - (char *)v17);
      do
      {
        if ( !v18 )
          break;
        v20 = *(_WORD *)&v19[(_QWORD)v17];
        if ( !v20 )
          break;
        *v17++ = v20;
        --v18;
        --v16;
      }
      while ( v16 );
    }
    v21 = v17 - 1;
    if ( v16 )
      v21 = v17;
    *v21 = 0;
    v14 = v16 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v14,
      (int)&v96);
  v22 = StringCchCatW(StringSecurityDescriptor, 0x400uLL, v96);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2A,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      (const char *)(unsigned int)v22,
      (int)&v96);
  v23 = 1024LL;
  v24 = StringSecurityDescriptor;
  do
  {
    if ( !*v24 )
      break;
    ++v24;
    --v23;
  }
  while ( v23 );
  v25 = (1024 - v23) & -(__int64)(v23 != 0);
  v26 = v23 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v23 )
  {
    v27 = 1024 - v25;
    v28 = &StringSecurityDescriptor[v25];
    if ( v25 != 1024 )
    {
      v29 = 2147483646LL;
      v30 = (char *)((char *)L")" - (char *)v28);
      do
      {
        if ( !v29 )
          break;
        v31 = *(_WORD *)&v30[(_QWORD)v28];
        if ( !v31 )
          break;
        *v28++ = v31;
        --v29;
        --v27;
      }
      while ( v27 );
    }
    v32 = v28 - 1;
    if ( v27 )
      v32 = v28;
    *v32 = 0;
    v26 = v27 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v26 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v26,
      (int)&v96);
  v33 = 1024LL;
  v34 = StringSecurityDescriptor;
  do
  {
    if ( !*v34 )
      break;
    ++v34;
    --v33;
  }
  while ( v33 );
  v35 = (1024 - v33) & -(__int64)(v33 != 0);
  v36 = v33 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v33 )
  {
    v37 = 1024 - v35;
    v38 = &StringSecurityDescriptor[v35];
    if ( v35 != 1024 )
    {
      v39 = 2147483646LL;
      v40 = (char *)((char *)L"(A;OICIID;KA;;;" - (char *)v38);
      do
      {
        if ( !v39 )
          break;
        v41 = *(_WORD *)&v40[(_QWORD)v38];
        if ( !v41 )
          break;
        *v38++ = v41;
        --v39;
        --v37;
      }
      while ( v37 );
    }
    v42 = v38 - 1;
    if ( v37 )
      v42 = v38;
    *v42 = 0;
    v36 = v37 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v36 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2E,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v36,
      (int)&v96);
  *(_QWORD *)v99 = 0LL;
  StringSid = 0LL;
  LOBYTE(v95) = 1;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 0, (PHANDLE)&StringSid) )
    goto LABEL_61;
  LastError = GetLastError();
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError == -2147023888 )
  {
    CurrentProcess = GetCurrentProcess();
    if ( OpenProcessToken(CurrentProcess, 8u, (PHANDLE)&StringSid) )
    {
LABEL_61:
      LastError = 0;
      goto LABEL_62;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
  }
LABEL_62:
  if ( LastError < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      (const char *)(unsigned int)LastError,
      (int)v99);
  if ( (_BYTE)v95 )
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (void **)v99,
      StringSid);
  wil::details::GetTokenInfoWrap<_TOKEN_USER,wil::err_exception_policy,0>(&v98, *(_QWORD *)v99);
  v97 = 0LL;
  StringSid = 0LL;
  LOBYTE(v95) = 1;
  if ( !ConvertSidToStringSidW(*(PSID *)v98, &StringSid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x37,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v46);
  if ( (_BYTE)v95 )
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v97,
      StringSid);
  v47 = StringCchCatW(StringSecurityDescriptor, 0x400uLL, v97);
  if ( v47 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x39,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      (const char *)(unsigned int)v47,
      (int)&v97);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v97);
  v48 = v98;
  v98 = 0LL;
  if ( v48 )
    operator delete(v48, 0x10uLL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v99);
  v49 = 1024LL;
  v50 = StringSecurityDescriptor;
  do
  {
    if ( !*v50 )
      break;
    ++v50;
    --v49;
  }
  while ( v49 );
  v51 = (1024 - v49) & -(__int64)(v49 != 0);
  v52 = v49 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v49 )
  {
    v53 = 1024 - v51;
    v54 = &StringSecurityDescriptor[v51];
    if ( v51 != 1024 )
    {
      v55 = 2147483646LL;
      v56 = (char *)((char *)L")" - (char *)v54);
      do
      {
        if ( !v55 )
          break;
        v57 = *(_WORD *)&v56[(_QWORD)v54];
        if ( !v57 )
          break;
        *v54++ = v57;
        --v55;
        --v53;
      }
      while ( v53 );
    }
    v58 = v54 - 1;
    if ( v53 )
      v58 = v54;
    *v58 = 0;
    v52 = v53 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v52 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v52,
      (int)&v97);
  v59 = 1024LL;
  v60 = StringSecurityDescriptor;
  do
  {
    if ( !*v60 )
      break;
    ++v60;
    --v59;
  }
  while ( v59 );
  v61 = (1024 - v59) & -(__int64)(v59 != 0);
  v62 = v59 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v59 )
  {
    v63 = 1024 - v61;
    v64 = &StringSecurityDescriptor[v61];
    if ( v61 != 1024 )
    {
      v65 = 2147483646LL;
      v66 = (char *)((char *)L"(A;OICIID;KA;;;SY)" - (char *)v64);
      do
      {
        if ( !v65 )
          break;
        v67 = *(_WORD *)&v66[(_QWORD)v64];
        if ( !v67 )
          break;
        *v64++ = v67;
        --v65;
        --v63;
      }
      while ( v63 );
    }
    v68 = v64 - 1;
    if ( v63 )
      v68 = v64;
    *v68 = 0;
    v62 = v63 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v62 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v62,
      (int)&v97);
  v69 = 1024LL;
  v70 = StringSecurityDescriptor;
  do
  {
    if ( !*v70 )
      break;
    ++v70;
    --v69;
  }
  while ( v69 );
  v71 = (1024 - v69) & -(__int64)(v69 != 0);
  v72 = v69 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v69 )
  {
    v73 = 1024 - v71;
    v74 = &StringSecurityDescriptor[v71];
    if ( v71 != 1024 )
    {
      v75 = 2147483646LL;
      v76 = (char *)((char *)L"(A;OICIID;KA;;;BA)" - (char *)v74);
      do
      {
        if ( !v75 )
          break;
        v77 = *(_WORD *)&v76[(_QWORD)v74];
        if ( !v77 )
          break;
        *v74++ = v77;
        --v75;
        --v73;
      }
      while ( v73 );
    }
    v78 = v74 - 1;
    if ( v73 )
      v78 = v74;
    *v78 = 0;
    v72 = v73 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v72 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v72,
      (int)&v97);
  v79 = 1024LL;
  v80 = StringSecurityDescriptor;
  do
  {
    if ( !*v80 )
      break;
    ++v80;
    --v79;
  }
  while ( v79 );
  v81 = (1024 - v79) & -(__int64)(v79 != 0);
  v82 = v79 == 0 ? (const char *)0x80070057LL : 0LL;
  if ( v79 )
  {
    v83 = 1024 - v81;
    v84 = &StringSecurityDescriptor[v81];
    if ( 1024 != v81 )
    {
      v85 = (char *)((char *)L"(A;OICIID;KR;;;RC)" - (char *)v84);
      do
      {
        if ( !v15 )
          break;
        v86 = *(_WORD *)&v85[(_QWORD)v84];
        if ( !v86 )
          break;
        *v84++ = v86;
        --v15;
        --v83;
      }
      while ( v83 );
    }
    v87 = v84 - 1;
    if ( v83 )
      v87 = v84;
    *v87 = 0;
    v82 = v83 == 0 ? (const char *)0x8007007ALL : 0LL;
  }
  if ( (int)v82 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x41,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v82,
      (int)&v97);
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  StringSid = 0LL;
  LOBYTE(v95) = 1;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          StringSecurityDescriptor,
          1u,
          (PSECURITY_DESCRIPTOR *)&StringSid,
          0LL) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x44,
      (unsigned int)"internal\\shellcommonshell\\private\\inc\\CapabilityHelper.h",
      v88);
  if ( (_BYTE)v95 )
  {
    v89 = StringSid;
    v90 = v100;
    if ( v100 )
    {
      v92 = GetLastError();
      LocalFree(v90);
      SetLastError(v92);
    }
    v100 = v89;
  }
  LODWORD(v101) = 24;
  *((_QWORD *)&v101 + 1) = v100;
  *(_QWORD *)a1 = v100;
  v100 = 0LL;
  *(_OWORD *)(a1 + 8) = v101;
  *(_QWORD *)(a1 + 24) = v102;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v100);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v96);
  return a1;
}
