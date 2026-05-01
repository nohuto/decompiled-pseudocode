/*
 * XREFs of ?GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z @ 0x18003F1C4
 * Callers:
 *     ?GetPathProcessNameFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z @ 0x18003F120 (-GetPathProcessNameFromProcessId@IsGameManager@@UEAAJKPEAVString@Internal@Windows@@@Z.c)
 *     ?UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z @ 0x1803E1670 (-UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z.c)
 * Callees:
 *     ?Initialize@String@Internal@Windows@@QEAAJPEBGI@Z @ 0x18003F2AC (-Initialize@String@Internal@Windows@@QEAAJPEBGI@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall IsGameManager::GetProcessFullPathFromProcessId(
        IsGameManager *this,
        DWORD a2,
        struct Windows::Internal::String *a3)
{
  HANDLE v5; // rax
  wil::details *v6; // rcx
  void *v7; // rbx
  const char *v8; // r9
  int v9; // eax
  unsigned int v10; // edi
  unsigned int LastErrorFailHr; // eax
  DWORD dwSize[4]; // [rsp+20h] [rbp-848h] BYREF
  WCHAR ExeName[1040]; // [rsp+30h] [rbp-838h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+868h] [rbp+0h]

  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize[0] = 1040;
  v5 = OpenProcess(0x1000u, 0, a2);
  v7 = v5;
  if ( !v5 )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v6);
LABEL_12:
    v10 = LastErrorFailHr;
    goto LABEL_8;
  }
  if ( !QueryFullProcessImageNameW(v5, 0, ExeName, dwSize) )
  {
    LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0xA04,
                        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                        v8);
    goto LABEL_12;
  }
  v9 = Windows::Internal::String::Initialize(a3, ExeName, dwSize[0]);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA06,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9,
      dwSize[0]);
LABEL_8:
    if ( !v7 )
      return v10;
    goto LABEL_5;
  }
  v10 = 0;
LABEL_5:
  if ( v7 != (void *)-1LL )
    CloseHandle(v7);
  return v10;
}
