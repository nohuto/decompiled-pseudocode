/*
 * XREFs of ?CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z @ 0x1803DDB18
 * Callers:
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x1803DF210 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1803E1058 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall IsGameManager::CompareOSVersion(
        IsGameManager *this,
        unsigned __int16 *a2,
        unsigned int a3,
        bool *a4)
{
  DWORD v6; // r14d
  ULONGLONG v8; // r9
  DWORD v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // ebx
  DWORD v12; // edx
  __int64 v14; // rdx
  struct _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  VersionInformation.dwOSVersionInfoSize = 284;
  *a4 = 0;
  v6 = 0;
  memset_0(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.wServicePackMajor = 0;
  *(_DWORD *)&VersionInformation.wServicePackMinor = 0;
  v8 = 0LL;
  *(_WORD *)&VersionInformation.wProductType = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( !a3 )
  {
LABEL_15:
    *a4 = VerifyVersionInfoW(&VersionInformation, v9, v8);
    return 0LL;
  }
  while ( 1 )
  {
    if ( *a2 != 46 && v10 != a3 - 1 )
    {
      if ( (unsigned __int16)(*a2 - 48) > 9u )
      {
        v14 = 2422LL;
        goto LABEL_19;
      }
      v6 = *a2 + 2 * (5 * v6 - 24);
      goto LABEL_14;
    }
    if ( v11 >= 3 )
      break;
    if ( !v10 )
    {
      v14 = 2396LL;
      goto LABEL_19;
    }
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        VersionInformation.dwMinorVersion = v6;
        v9 |= 1u;
        v12 = 1;
      }
      else
      {
        VersionInformation.dwBuildNumber = v6;
        v12 = 4;
        v9 |= 4u;
      }
    }
    else
    {
      VersionInformation.dwMajorVersion = v6;
      v12 = 2;
      v9 |= 2u;
    }
    v8 = VerSetConditionMask(v8, v12, 3u);
    ++v11;
    v6 = 0;
LABEL_14:
    ++v10;
    ++a2;
    if ( v10 >= a3 )
      goto LABEL_15;
  }
  v14 = 2395LL;
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
