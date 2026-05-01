/*
 * XREFs of ?CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$pair@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEFBU_ITEMIDLIST@@@Z @ 0x18069FFF4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::PinItemToTaskbarShimAsync$_ResumeCoro$1 @ 0x180250E90 (winrt--Windows--Internal--Shell--implementation--PinManager--PinItemToTaskbarShimAsync$_ResumeCo.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x180489DC4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 *     ??$ShimTemporaryShortcutCreated@AEAY0BAF@G@PinManagerTelemetry@@SAXAEAY0BAF@G@Z @ 0x18069AABC (--$ShimTemporaryShortcutCreated@AEAY0BAF@G@PinManagerTelemetry@@SAXAEAY0BAF@G@Z.c)
 *     ?_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST@@PEAUIBindCtx@@KPEAK@Z @ 0x1806A8FC4 (-_GetAttributesFromFolderAndIDList@@YAJPEAUIShellFolder@@PEFBU_ITEMIDLIST@@PEAUIBindCtx@@KPEAK@Z.c)
 *     ?s_TryCopyLocalizedName@PinManager@implementation@Shell@Internal@Windows@winrt@@SAXPEBG0@Z @ 0x1806AA184 (-s_TryCopyLocalizedName@PinManager@implementation@Shell@Internal@Windows@winrt@@SAXPEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::CopyShortcut(
        __int64 a1,
        __int64 a2,
        ITEMIDLIST *a3)
{
  const char *v5; // r9
  HRESULT v6; // eax
  HRESULT v7; // eax
  HRESULT v8; // eax
  const char *v9; // r9
  const WCHAR *FileNameW; // rax
  HRESULT v11; // eax
  char v12; // al
  HRESULT v13; // eax
  void *v14; // rcx
  int psfgaoOut; // [rsp+20h] [rbp-E0h]
  int psfgaoOuta; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+30h] [rbp-D0h] BYREF
  void **v19; // [rsp+38h] [rbp-C8h]
  LPITEMIDLIST ppidl; // [rsp+40h] [rbp-C0h] BYREF
  char v21; // [rsp+48h] [rbp-B8h]
  struct _SHFILEOPSTRUCTW FileOp; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h] BYREF
  GUID pguid; // [rsp+98h] [rbp-68h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-58h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-48h]
  OLECHAR sz[40]; // [rsp+D0h] [rbp-30h] BYREF
  WCHAR Buffer[264]; // [rsp+120h] [rbp+20h] BYREF
  WCHAR pszPath[264]; // [rsp+330h] [rbp+230h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+568h] [rbp+468h]

  v23 = a2;
  v18 = 0;
  _GetAttributesFromFolderAndIDList(0LL, a3, (struct IBindCtx *)a3, 0x10000u, &v18);
  if ( (v18 & 0x10000) != 0 )
  {
    memset_0(pszPath, 0, 0x20AuLL);
    if ( !SHGetPathFromIDListW(a3, pszPath) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x364,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)0x80004005LL,
        psfgaoOut);
    memset_0(Buffer, 0, 0x20AuLL);
    if ( !GetTempPathW(0x105u, Buffer) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x367,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        v5);
    v6 = PathCchAppend(Buffer, 0x105uLL, L"PinnableShortcuts");
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x368,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v6,
        psfgaoOut);
    CreateDirectoryW(Buffer, 0LL);
    pguid = 0LL;
    v7 = CoCreateGuid(&pguid);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x36E,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        psfgaoOut);
    if ( !StringFromGUID2(&pguid, sz, 39) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x371,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)0x80004005LL,
        psfgaoOut);
    v8 = PathCchAppend(Buffer, 0x105uLL, sz);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x372,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v8,
        psfgaoOut);
    if ( !CreateDirectoryW(Buffer, 0LL) )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x373,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        v9);
    std::wstring::wstring((__int64)&v25, Buffer, 0x105uLL);
    FileNameW = PathFindFileNameW(pszPath);
    v11 = PathCchAppend(Buffer, 0x105uLL, FileNameW);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x376,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v11,
        psfgaoOut);
    *(_OWORD *)&FileOp.hwnd = 0LL;
    memset(&FileOp.fFlags, 0, 24);
    FileOp.wFunc = 2;
    FileOp.pFrom = pszPath;
    FileOp.pTo = Buffer;
    FileOp.fFlags = 1556;
    if ( SHFileOperationW(&FileOp) || (v12 = 0, FileOp.fAnyOperationsAborted) )
      v12 = 1;
    if ( v12 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x37D,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)0x80004005LL,
        psfgaoOut);
    PinManagerTelemetry::ShimTemporaryShortcutCreated<unsigned short (&)[261]>((__int64)Buffer);
    winrt::Windows::Internal::Shell::implementation::PinManager::s_TryCopyLocalizedName(pszPath, Buffer);
    v23 = 0LL;
    v19 = (void **)&v23;
    ppidl = 0LL;
    v21 = 1;
    v13 = SHParseDisplayName(Buffer, 0LL, &ppidl, 0, 0LL);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x384,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v13,
        psfgaoOuta);
    if ( v21 )
    {
      v14 = *v19;
      *v19 = ppidl;
      if ( v14 )
        CoTaskMemFree(v14);
    }
    *(_QWORD *)a2 = v23;
    *(_OWORD *)(a2 + 8) = v25;
    *(__m128i *)(a2 + 24) = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v25) = 0;
    v23 = 0LL;
    std::wstring::_Tidy_deallocate((__int64)&v25);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 32) = 7LL;
    *(_WORD *)(a2 + 8) = 0;
  }
  return a2;
}
