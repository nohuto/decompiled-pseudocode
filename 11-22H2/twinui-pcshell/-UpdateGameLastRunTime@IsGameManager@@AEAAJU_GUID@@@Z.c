/*
 * XREFs of ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x1803E1774
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180039630 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800398E0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IsGameManager::UpdateGameLastRunTime(IsGameManager *this, struct _GUID *a2)
{
  const char *v4; // r9
  __int64 *v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  bool v12; // sf
  struct _FILETIME FileTime; // [rsp+40h] [rbp-48h] BYREF
  struct _FILETIME v14; // [rsp+48h] [rbp-40h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h] BYREF
  struct _SYSTEMTIME SystemTime; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  GetSystemTime(&SystemTime);
  if ( !SystemTimeToFileTime(&SystemTime, &FileTime) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xA1C,
             (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
             v4);
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v7 = (__int128)*a2;
  v14 = FileTime;
  v8 = *v6;
  v15 = v7;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, struct _FILETIME *, int))(v8 + 72))(
         v6,
         &v15,
         2LL,
         &v14,
         8);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
            L"LastGameActivity",
            3u,
            (BYTE *)&FileTime,
            8u);
    v12 = v11 < 0;
    if ( v11 > 0 )
    {
      v11 = (unsigned __int16)v11 | 0x80070000;
      v12 = v11 < 0;
    }
    if ( v12 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA25,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v11);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA22,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    return v10;
  }
}
