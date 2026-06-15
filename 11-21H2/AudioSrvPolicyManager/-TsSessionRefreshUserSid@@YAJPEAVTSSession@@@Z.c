/*
 * XREFs of ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180030428
 * Callers:
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800302C8 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180002430 (__security_check_cookie.c)
 *     memset_0 @ 0x1800034E8 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180006834 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800073B4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002B774 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x18002C9C0 (-ResetUserSettings@@YAXPEAVTSSession@@@Z.c)
 *     _alloca_probe @ 0x1800443E0 (_alloca_probe.c)
 *     memcpy_0 @ 0x180044443 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionRefreshUserSid(struct TSSession *a1)
{
  __int64 v2; // rax
  unsigned __int16 *v3; // rdi
  int v4; // ebx
  __int64 v5; // rdx
  DWORD *v7; // rbx
  BOOL v8; // r15d
  const char *v9; // r9
  size_t v10; // rcx
  __int64 v11; // rax
  void *v12; // rsp
  DWORD *p_cchReferencedDomainName; // rsi
  DWORD *v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rsp
  DWORD *v19; // rax
  __int64 v20; // rdx
  char *v21; // rsi
  void *v22; // rdx
  DWORD LengthSid; // edi
  HANDLE ProcessHeap; // rax
  void *v25; // rax
  void *v26; // r15
  void *v27; // rbx
  void *v28; // rdi
  HANDLE v29; // rax
  LPWSTR v30; // r15
  void *v31; // r13
  DWORD LastError; // edi
  DWORD v33; // edi
  HANDLE v34; // rax
  HANDLE v35; // rax
  _BYTE v36[32]; // [rsp+0h] [rbp-40h] BYREF
  LPWSTR ReferencedDomainName; // [rsp+20h] [rbp-20h]
  DWORD cchReferencedDomainName; // [rsp+40h] [rbp+0h] BYREF
  DWORD cbSid; // [rsp+44h] [rbp+4h] BYREF
  LPWSTR StringSid; // [rsp+48h] [rbp+8h] BYREF
  enum _SID_NAME_USE peUse; // [rsp+50h] [rbp+10h] BYREF
  char v42; // [rsp+58h] [rbp+18h] BYREF
  WCHAR v43[24]; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int16 v44[48]; // [rsp+90h] [rbp+50h] BYREF
  _BYTE Sid[256]; // [rsp+F0h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+1E8h]

  v2 = *((_QWORD *)a1 + 3);
  v3 = (unsigned __int16 *)(v2 + 130);
  if ( *(_WORD *)(v2 + 96) )
  {
    ReferencedDomainName = (LPWSTR)(v2 + 130);
    v4 = StringCchPrintfW(v44, 47LL, L"%s\\%s");
    if ( v4 < 0 )
    {
      v5 = 623LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v4);
      return (unsigned int)v4;
    }
    v3 = v44;
  }
  if ( !*v3 )
  {
    *((_BYTE *)a1 + 1092) = 1;
    ResetUserSettings(a1);
    return *((_BYTE *)a1 + 1092) == 0 ? 0x80070490 : 0;
  }
  cbSid = 256;
  v7 = (DWORD *)Sid;
  cchReferencedDomainName = 17;
  v8 = LookupAccountNameW(0LL, v3, Sid, &cbSid, v43, &cchReferencedDomainName, &peUse);
  if ( GetLastError() == 122 )
  {
    v10 = (2LL * (cchReferencedDomainName + 1) + 16) & -(__int64)(2 * (unsigned __int64)(cchReferencedDomainName + 1) < 2 * (unsigned __int64)(cchReferencedDomainName + 1) + 16);
    if ( !v10 )
      goto LABEL_36;
    if ( v10 > 0x400 )
    {
      v14 = (DWORD *)malloc(v10);
      p_cchReferencedDomainName = v14;
      if ( !v14 )
        goto LABEL_17;
      *v14 = 56797;
    }
    else
    {
      v11 = v10 + 15;
      if ( v10 + 15 < v10 )
        v11 = 0xFFFFFFFFFFFFFF0LL;
      v12 = alloca(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      p_cchReferencedDomainName = &cchReferencedDomainName;
      if ( v36 == (_BYTE *)-64LL )
        goto LABEL_36;
      cchReferencedDomainName = 52428;
    }
    p_cchReferencedDomainName += 4;
LABEL_17:
    if ( p_cchReferencedDomainName )
    {
      v15 = cbSid + 16LL;
      v16 = v15 & -(__int64)(cbSid < v15);
      if ( !v16 )
        goto LABEL_34;
      if ( v16 > 0x400 )
      {
        v19 = (DWORD *)malloc(v15 & -(__int64)(cbSid < v15));
        v7 = v19;
        if ( !v19 )
          goto LABEL_27;
        *v19 = 56797;
      }
      else
      {
        v17 = v16 + 15;
        if ( v16 + 15 < v16 )
          v17 = 0xFFFFFFFFFFFFFF0LL;
        v18 = alloca(v17 & 0xFFFFFFFFFFFFFFF0uLL);
        v7 = &cchReferencedDomainName;
        if ( v36 == (_BYTE *)-64LL )
          goto LABEL_34;
        cchReferencedDomainName = 52428;
      }
      v7 += 4;
LABEL_27:
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
        if ( *(v7 - 4) == 56797 )
          free(v7 - 4);
        if ( *(p_cchReferencedDomainName - 4) == 56797 )
          free(p_cchReferencedDomainName - 4);
        goto LABEL_32;
      }
LABEL_34:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x285,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
      if ( *(p_cchReferencedDomainName - 4) == 56797 )
        free(p_cchReferencedDomainName - 4);
      return 2147942414LL;
    }
LABEL_36:
    v20 = 642LL;
    goto LABEL_37;
  }
LABEL_32:
  if ( !v8 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x28A,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             v9);
  if ( !IsValidSid(v7) )
  {
    v4 = -2147024809;
    v5 = 652LL;
    goto LABEL_4;
  }
  v21 = (char *)a1 + 1096;
  v22 = (void *)*((_QWORD *)a1 + 137);
  if ( !v22 || !EqualSid(v7, v22) )
  {
    *((_BYTE *)a1 + 1092) = 0;
    LengthSid = GetLengthSid(v7);
    ProcessHeap = GetProcessHeap();
    v25 = HeapAlloc(ProcessHeap, 0, LengthSid);
    v26 = v25;
    if ( v25 )
    {
      memset_0(v25, 0, LengthSid);
      memcpy_0(v26, v7, LengthSid);
      v27 = v26;
      if ( v21 != &v42 )
      {
        v27 = 0LL;
        v28 = *(void **)v21;
        *(_QWORD *)v21 = v26;
        if ( v28 )
        {
          v29 = GetProcessHeap();
          HeapFree(v29, 0, v28);
        }
      }
      v30 = 0LL;
      StringSid = 0LL;
      v31 = (void *)*((_QWORD *)a1 + 138);
      if ( v31 )
      {
        LastError = GetLastError();
        CoTaskMemFree(v31);
        SetLastError(LastError);
        v30 = StringSid;
      }
      *((_QWORD *)a1 + 138) = 0LL;
      if ( v30 )
      {
        v33 = GetLastError();
        CoTaskMemFree(v30);
        SetLastError(v33);
      }
      if ( ConvertSidToStringSidW(*(PSID *)v21, &StringSid) )
      {
        if ( !StringSid )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x29E,
            (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
            (const char *)0x8007000ELL);
          if ( StringSid )
            CoTaskMemFree(StringSid);
          if ( v27 )
          {
            v34 = GetProcessHeap();
            HeapFree(v34, 0, v27);
          }
          return 2147942414LL;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
          (void **)a1 + 138,
          (void **)&StringSid);
      }
      if ( StringSid )
        CoTaskMemFree(StringSid);
      if ( v27 )
      {
        v35 = GetProcessHeap();
        HeapFree(v35, 0, v27);
      }
      return *((_BYTE *)a1 + 1092) == 0 ? 0x80070490 : 0;
    }
    v20 = 661LL;
LABEL_37:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  *((_BYTE *)a1 + 1092) = 1;
  return *((_BYTE *)a1 + 1092) == 0 ? 0x80070490 : 0;
}
