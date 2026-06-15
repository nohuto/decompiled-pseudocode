/*
 * XREFs of ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180039EC8
 * Callers:
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180039DCC (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000D380 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000F700 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18001044C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015B50 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180015D48 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x180016790 (__security_check_cookie.c)
 *     memset_0 @ 0x180017838 (memset_0.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001A514 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x18003403C (--1-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ.c)
 *     ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x1800375D4 (-ResetUserSettings@@YAXPEAVTSSession@@@Z.c)
 *     _freea @ 0x18003C108 (_freea.c)
 *     _alloca_probe @ 0x180048AB0 (_alloca_probe.c)
 *     memcpy_0 @ 0x180048B1C (memcpy_0.c)
 */

__int64 __fastcall TsSessionRefreshUserSid(struct TSSession *a1)
{
  __int64 v1; // rax
  unsigned __int16 *v3; // r14
  unsigned int v4; // ebx
  __int64 v5; // rdx
  DWORD *v7; // rbx
  BOOL v8; // r15d
  const char *v9; // r9
  size_t v10; // rcx
  __int64 v11; // rax
  void *v12; // rsp
  DWORD *p_cchReferencedDomainName; // rdi
  DWORD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rsp
  DWORD *v19; // rax
  void **v20; // rdi
  void *v21; // rdx
  DWORD LengthSid; // r15d
  void *v23; // rax
  void *v24; // r14
  void *v25; // rcx
  _BYTE v26[32]; // [rsp+0h] [rbp-40h] BYREF
  LPWSTR ReferencedDomainName; // [rsp+20h] [rbp-20h]
  DWORD cchReferencedDomainName; // [rsp+40h] [rbp+0h] BYREF
  DWORD cbSid; // [rsp+44h] [rbp+4h] BYREF
  LPWSTR StringSid; // [rsp+48h] [rbp+8h] BYREF
  void *v31; // [rsp+50h] [rbp+10h] BYREF
  enum _SID_NAME_USE peUse; // [rsp+58h] [rbp+18h] BYREF
  WCHAR v33[24]; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int16 v34[48]; // [rsp+90h] [rbp+50h] BYREF
  _BYTE Sid[256]; // [rsp+F0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+1E8h]

  v1 = *((_QWORD *)a1 + 3);
  v3 = (unsigned __int16 *)(v1 + 130);
  if ( *(_WORD *)(v1 + 96) )
  {
    ReferencedDomainName = (LPWSTR)(v1 + 130);
    v4 = StringCchPrintfW(v34, 0x2FuLL, (size_t *)L"%s\\%s");
    if ( (v4 & 0x80000000) != 0 )
    {
      v5 = 628LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v4);
      return v4;
    }
    v3 = v34;
  }
  if ( !*v3 )
  {
    *((_BYTE *)a1 + 1092) = 1;
    ResetUserSettings(a1);
    return *((_BYTE *)a1 + 1092) == 0 ? 0x80070490 : 0;
  }
  cbSid = 256;
  cchReferencedDomainName = 17;
  v7 = (DWORD *)Sid;
  v8 = LookupAccountNameW(0LL, v3, Sid, &cbSid, v33, &cchReferencedDomainName, &peUse);
  if ( GetLastError() == 122 )
  {
    v10 = (2LL * (cchReferencedDomainName + 1) + 16) & -(__int64)(2 * (unsigned __int64)(cchReferencedDomainName + 1) < 2 * (unsigned __int64)(cchReferencedDomainName + 1) + 16);
    if ( !v10 )
      goto LABEL_33;
    if ( v10 > 0x400 )
    {
      v14 = (DWORD *)malloc(v10);
      p_cchReferencedDomainName = v14;
      if ( !v14 )
        goto LABEL_18;
      *v14 = 56797;
    }
    else
    {
      v11 = v10 + 15;
      if ( v10 + 15 < v10 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      p_cchReferencedDomainName = &cchReferencedDomainName;
      if ( v26 == (_BYTE *)-64LL )
        goto LABEL_33;
      cchReferencedDomainName = 52428;
    }
    p_cchReferencedDomainName += 4;
LABEL_18:
    if ( p_cchReferencedDomainName )
    {
      v15 = cbSid + 16LL;
      v16 = v15 & -(__int64)(cbSid < v15);
      if ( !v16 )
        goto LABEL_32;
      if ( v16 > 0x400 )
      {
        v19 = (DWORD *)malloc(v15 & -(__int64)(cbSid < v15));
        v7 = v19;
        if ( !v19 )
          goto LABEL_28;
        *v19 = 56797;
      }
      else
      {
        v17 = v16 + 15;
        if ( v16 + 15 < v16 )
          v17 = 0xFFFFFFFFFFFFFF0LL;
        v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
        v7 = &cchReferencedDomainName;
        if ( v26 == (_BYTE *)-64LL )
          goto LABEL_32;
        cchReferencedDomainName = 52428;
      }
      v7 += 4;
LABEL_28:
      if ( v7 )
      {
        v8 = LookupAccountNameW(
               0LL,
               v3,
               v7,
               &cbSid,
               (LPWSTR)p_cchReferencedDomainName,
               &cchReferencedDomainName,
               &peUse);
        freea(v7);
        freea(p_cchReferencedDomainName);
        goto LABEL_30;
      }
LABEL_32:
      v4 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      freea(p_cchReferencedDomainName);
      return v4;
    }
LABEL_33:
    v4 = -2147024882;
    v5 = 647LL;
    goto LABEL_4;
  }
LABEL_30:
  if ( !v8 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x28F,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             v9);
  if ( !IsValidSid(v7) )
  {
    v4 = -2147024809;
    v5 = 657LL;
    goto LABEL_4;
  }
  v20 = (void **)((char *)a1 + 1096);
  v21 = (void *)*((_QWORD *)a1 + 137);
  if ( !v21 || !EqualSid(v7, v21) )
  {
    *((_BYTE *)a1 + 1092) = 0;
    LengthSid = GetLengthSid(v7);
    v23 = operator new(LengthSid);
    v24 = v23;
    if ( !v23 )
    {
      v4 = -2147024882;
      v31 = 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_48;
    }
    memset_0(v23, 0, LengthSid);
    v31 = v24;
    memcpy_0(v24, v7, LengthSid);
    if ( v20 != &v31 )
    {
      v25 = *v20;
      v31 = 0LL;
      *v20 = v24;
      if ( v25 )
        operator delete(v25);
    }
    StringSid = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)a1 + 138,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&StringSid,
      0LL);
    if ( ConvertSidToStringSidW(*v20, &StringSid) )
    {
      if ( !StringSid )
      {
        v4 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A3,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x8007000ELL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&StringSid);
LABEL_48:
        std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(&v31);
        return v4;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        (void **)a1 + 138,
        (void **)&StringSid);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&StringSid);
    std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(&v31);
  }
  return *((_BYTE *)a1 + 1092) == 0 ? 0x80070490 : 0;
}
