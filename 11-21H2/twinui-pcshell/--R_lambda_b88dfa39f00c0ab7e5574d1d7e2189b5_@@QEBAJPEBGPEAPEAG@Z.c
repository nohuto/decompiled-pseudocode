/*
 * XREFs of ??R_lambda_b88dfa39f00c0ab7e5574d1d7e2189b5_@@QEBAJPEBGPEAPEAG@Z @ 0x1805EA690
 * Callers:
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x1805EEF34 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180065868 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180176FCC (-reset@-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_c.c)
 *     ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x18022A5AE (-close_reset@-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constant@_K$0A@.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG_N@Z @ 0x1805EF2CC (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _lambda_b88dfa39f00c0ab7e5574d1d7e2189b5_::operator()(HSTRING *a1, const WCHAR *a2, PWSTR *a3)
{
  HSTRING v6; // rcx
  const WCHAR *v7; // rax
  HRESULT v8; // ebx
  __int64 v9; // rdx
  HSTRING v11; // rcx
  const WCHAR *StringRawBuffer; // r14
  bool v13; // bl
  PCWSTR v14; // rax
  __int64 v15; // r8
  const WCHAR *v16; // rcx
  __int64 v17; // rdx
  HRESULT v18; // eax
  __int64 v19; // rdx
  HRESULT v20; // eax
  __int64 v21; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  int v23; // [rsp+60h] [rbp+40h] BYREF
  PWSTR pszPath; // [rsp+70h] [rbp+50h] BYREF
  PWSTR ppszPathOut; // [rsp+78h] [rbp+58h] BYREF

  *a3 = 0LL;
  v6 = *a1;
  if ( !v6 )
  {
    v11 = a1[1];
    if ( !v11 )
      return 0LL;
    v23 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(v11, 0LL);
    v8 = IsMrtResourceRedirectionEnabled(StringRawBuffer, &v23);
    if ( v8 < 0 )
    {
      v9 = 272LL;
      goto LABEL_4;
    }
    v13 = v23 == 0;
    v14 = WindowsGetStringRawBuffer(a1[1], 0LL);
    LOBYTE(v15) = v13;
    ShellMRTHelper::Common::TryGetStagedPackagePathByFullNameAlloc(&pszPath, v14, v15);
    v16 = pszPath;
    if ( pszPath )
    {
      if ( v23 )
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
LABEL_25:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v19,
            (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
            (const char *)(unsigned int)v18);
          goto LABEL_26;
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
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v21,
            (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
            (const char *)(unsigned int)v20);
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&ppszPathOut);
LABEL_26:
          wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&pszPath);
          return (unsigned int)v8;
        }
        if ( pszPath )
          wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(pszPath);
        pszPath = 0LL;
        v20 = PathAllocCombine(ppszPathOut, StringRawBuffer, 1u, &pszPath);
        v8 = v20;
        if ( v20 < 0 )
        {
          v21 = 286LL;
          goto LABEL_21;
        }
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&ppszPathOut);
        v16 = pszPath;
      }
      v18 = PathAllocCombine(v16, a2, 1u, a3);
      v8 = v18;
      if ( v18 < 0 )
      {
        v19 = 289LL;
        goto LABEL_25;
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&pszPath);
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
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\ShellMRTHelper.Common.h",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  return 0LL;
}
