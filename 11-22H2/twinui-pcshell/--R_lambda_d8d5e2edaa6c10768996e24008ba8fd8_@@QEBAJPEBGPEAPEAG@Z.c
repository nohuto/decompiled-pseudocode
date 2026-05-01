/*
 * XREFs of ??R_lambda_d8d5e2edaa6c10768996e24008ba8fd8_@@QEBAJPEBGPEAPEAG@Z @ 0x1802853F4
 * Callers:
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x180745794 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008610C (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1801ABC4C (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801BAD2C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG_N@Z @ 0x180745B2C (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _lambda_d8d5e2edaa6c10768996e24008ba8fd8_::operator()(HSTRING *a1, const WCHAR *a2, PWSTR *a3)
{
  HSTRING v6; // rcx
  const WCHAR *v7; // rax
  HRESULT v8; // ebx
  __int64 v9; // rdx
  HSTRING v11; // rcx
  const WCHAR *StringRawBuffer; // r15
  bool v13; // bl
  PCWSTR v14; // rax
  __int64 v15; // r8
  const WCHAR *v16; // rcx
  __int64 v17; // rdx
  HRESULT v18; // eax
  __int64 v19; // rdx
  HRESULT v20; // eax
  __int64 v21; // rdx
  void **v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  int v24; // [rsp+60h] [rbp+40h] BYREF
  PWSTR pszPath; // [rsp+70h] [rbp+50h] BYREF
  PWSTR ppszPathOut; // [rsp+78h] [rbp+58h] BYREF

  *a3 = 0LL;
  v6 = *a1;
  if ( !v6 )
  {
    v11 = a1[1];
    if ( !v11 )
      return 0LL;
    v24 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(v11, 0LL);
    v8 = IsMrtResourceRedirectionEnabled(StringRawBuffer, &v24);
    if ( v8 < 0 )
    {
      v9 = 272LL;
      goto LABEL_4;
    }
    v13 = v24 == 0;
    v14 = WindowsGetStringRawBuffer(a1[1], 0LL);
    LOBYTE(v15) = v13;
    ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(&pszPath, v14, v15);
    v16 = pszPath;
    if ( pszPath )
    {
      if ( v24 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( pszPath[v17] );
        v18 = PathCchRemoveFileSpec(pszPath, v17 + 1);
        v8 = v18;
        if ( v18 < 0 )
        {
          v19 = 283LL;
LABEL_23:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
            (const char *)(unsigned int)v18);
          goto LABEL_24;
        }
        ppszPathOut = 0LL;
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          (void **)&ppszPathOut,
          0LL);
        v20 = PathAllocCombine(pszPath, L"Resources", 1u, &ppszPathOut);
        v8 = v20;
        if ( v20 < 0 )
        {
          v21 = 285LL;
LABEL_19:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
            (const char *)(unsigned int)v20);
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&ppszPathOut);
LABEL_24:
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pszPath);
          return (unsigned int)v8;
        }
        v22 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&pszPath);
        v20 = PathAllocCombine(ppszPathOut, StringRawBuffer, 1u, (PWSTR *)v22);
        v8 = v20;
        if ( v20 < 0 )
        {
          v21 = 286LL;
          goto LABEL_19;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&ppszPathOut);
        v16 = pszPath;
      }
      v18 = PathAllocCombine(v16, a2, 1u, a3);
      v8 = v18;
      if ( v18 < 0 )
      {
        v19 = 289LL;
        goto LABEL_23;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&pszPath);
    return 0LL;
  }
  v7 = WindowsGetStringRawBuffer(v6, 0LL);
  v8 = PathAllocCombine(v7, a2, 1u, a3);
  if ( v8 < 0 )
  {
    v9 = 263LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"ShellCommonDesktopBase\\Internal\\ShellCommonDesktopBase\\Inc\\tiles\\ShellMRTHelper.Common.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  return 0LL;
}
