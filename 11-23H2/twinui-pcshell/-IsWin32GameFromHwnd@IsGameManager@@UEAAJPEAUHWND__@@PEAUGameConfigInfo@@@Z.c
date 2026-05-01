/*
 * XREFs of ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800398E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckGameConfigStoreForIsGameFromProcessId@IsGameManager@@AEAAJKPEA_N0PEAKPEAU_GUID@@PEAVString@Internal@Windows@@@Z @ 0x180039818 (-CheckGameConfigStoreForIsGameFromProcessId@IsGameManager@@AEAAJKPEA_N0PEAKPEAU_GUID@@PEAVString.c)
 *     ?CheckIsExplorer@IsGameManager@@AEAAJKPEA_N@Z @ 0x180039A10 (-CheckIsExplorer@IsGameManager@@AEAAJKPEA_N@Z.c)
 *     ?CheckKGLForIsGameFromProcessId@IsGameManager@@AEAAJKU_GUID@@KPEA_NPEAVString@Internal@Windows@@PEAU2@@Z @ 0x180039AE0 (-CheckKGLForIsGameFromProcessId@IsGameManager@@AEAAJKU_GUID@@KPEA_NPEAVString@Internal@Windows@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1803DDDCC (-GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z.c)
 *     ?UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z @ 0x1803E1670 (-UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z.c)
 *     ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x1803E1774 (-UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z.c)
 */

int __fastcall IsGameManager::IsWin32GameFromHwnd(IsGameManager *this, HWND hWnd, struct GameConfigInfo *a3)
{
  bool *v3; // rsi
  int result; // eax
  int v7; // eax
  struct _GUID v8; // xmm6
  int v9; // esi
  __int64 v10; // r11
  int v11; // eax
  int v12; // r14d
  __int64 v13; // rax
  int updated; // eax
  int v15; // eax
  int v16; // [rsp+28h] [rbp-39h]
  bool v17; // [rsp+48h] [rbp-19h] BYREF
  DWORD dwProcessId; // [rsp+4Ch] [rbp-15h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-11h] BYREF
  struct _GUID v20; // [rsp+58h] [rbp-9h] BYREF
  struct _GUID v21; // [rsp+68h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  dwProcessId = 0;
  v3 = (bool *)a3 + 2;
  v19 = 0;
  *(_WORD *)a3 = 0;
  *((_BYTE *)a3 + 2) = 0;
  v20 = (struct _GUID)xmmword_180834B18;
  GetWindowThreadProcessId(hWnd, &dwProcessId);
  result = IsGameManager::CheckIsExplorer(this, dwProcessId, v3);
  if ( result >= 0 )
  {
    if ( *v3 )
      return 0;
    v7 = IsGameManager::CheckGameConfigStoreForIsGameFromProcessId(
           this,
           dwProcessId,
           (bool *)a3,
           (bool *)a3 + 4,
           &v19,
           &v20,
           (struct GameConfigInfo *)((char *)a3 + 32));
    v8 = v20;
    v9 = v7;
    if ( v7 >= 0 )
    {
      v10 = *((_QWORD *)this + 2);
      v19 = 0;
      v16 = 4;
      v11 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, __int64, unsigned int *))(*(_QWORD *)v10 + 72LL))(
              v10,
              &v20,
              14LL,
              &v19);
      v12 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x138,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v11,
          4);
        return v12;
      }
    }
    else
    {
      v21 = (struct _GUID)xmmword_180834B18;
      if ( (int)IsGameManager::CheckKGLForIsGameFromProcessId(
                  this,
                  dwProcessId,
                  &v20,
                  v19,
                  &v17,
                  (struct GameConfigInfo *)((char *)a3 + 32),
                  &v21) < 0 )
      {
LABEL_5:
        *(_BYTE *)a3 = 0;
        return 0;
      }
      v9 = 0;
      *(_BYTE *)a3 = v17;
      v13 = *(_QWORD *)&v21.Data1;
      if ( !*(_QWORD *)&v21.Data1 )
        v13 = *(_QWORD *)v21.Data4;
      if ( v13 )
        v8 = v21;
    }
    if ( *(_BYTE *)a3 )
    {
      v20 = v8;
      IsGameManager::GetAutoGameModeFromGameConfigStore(this, &v20, a3);
      v20 = v8;
      updated = IsGameManager::UpdateGameFullPathInGameConfigStore(this, dwProcessId, &v20);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15B,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)updated,
          v16);
      v20 = v8;
      v15 = IsGameManager::UpdateGameLastRunTime(this, &v20);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15E,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v15,
          v16);
    }
    if ( v9 >= 0 )
      return 0;
    goto LABEL_5;
  }
  return result;
}
