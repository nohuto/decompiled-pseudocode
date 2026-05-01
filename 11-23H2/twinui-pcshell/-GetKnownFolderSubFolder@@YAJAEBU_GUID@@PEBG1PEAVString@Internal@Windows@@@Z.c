/*
 * XREFs of ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1800A94E0
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x1800A9200 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 *     ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x1800A9610 (-EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ.c)
 *     ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x1800C0358 (-UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z.c)
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall GetKnownFolderSubFolder(
        KNOWNFOLDERID *rfid,
        PCWSTR pszMore,
        PCWSTR a3,
        struct Windows::Internal::String *this)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  PWSTR ppszPath; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h]
  __int64 v15; // [rsp+30h] [rbp-D0h]
  WCHAR pszPathOut[520]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+488h] [rbp+388h]

  ppszPath = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !this )
  {
    v9 = -2147467261;
    v12 = 139LL;
    v11 = 2147500035LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)v11,
      (int)ppszPath);
    goto LABEL_7;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&ppszPath);
  v14 = -1LL;
  v15 = -1LL;
  v8 = SHGetKnownFolderPath(rfid, 0x8000u, 0LL, &ppszPath);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 141LL;
    goto LABEL_14;
  }
  v8 = PathCchCombine(pszPathOut, 0x208uLL, ppszPath, pszMore);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 143LL;
    goto LABEL_14;
  }
  if ( a3 )
  {
    v8 = PathCchCombine(pszPathOut, 0x208uLL, pszPathOut, a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      v12 = 147LL;
LABEL_14:
      v11 = (unsigned int)v8;
      goto LABEL_15;
    }
  }
  v8 = Windows::Internal::String::_InitializeHelper(this, pszPathOut);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = 150LL;
    goto LABEL_14;
  }
  v9 = 0;
LABEL_7:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&ppszPath);
  return v9;
}
