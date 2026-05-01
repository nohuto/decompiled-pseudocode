/*
 * XREFs of ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180039630
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180039290 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ?CheckGameConfigStoreForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_N1PEAU_GUID@@PEAK@Z @ 0x180039770 (-CheckGameConfigStoreForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_N1PEAU_GUID@@PEAK@Z.c)
 *     ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x180039C7C (-CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x1800C0B00 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1803DDDCC (-GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z.c)
 *     ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x1803E1774 (-UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z.c)
 */

__int64 __fastcall IsGameManager::IsGameFromAppId(IsGameManager *this, unsigned __int16 *a2, struct GameConfigInfo *a3)
{
  struct _GUID v6; // xmm0
  int v7; // ebx
  __int64 v9; // rax
  int updated; // eax
  int v11; // [rsp+20h] [rbp-29h]
  bool v12; // [rsp+30h] [rbp-19h] BYREF
  bool v13; // [rsp+31h] [rbp-18h] BYREF
  bool v14; // [rsp+32h] [rbp-17h] BYREF
  bool v15; // [rsp+33h] [rbp-16h] BYREF
  unsigned int v16[3]; // [rsp+34h] [rbp-15h] BYREF
  struct _GUID v17; // [rsp+40h] [rbp-9h] BYREF
  struct _GUID v18; // [rsp+60h] [rbp+17h] BYREF
  struct _GUID v19; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_WORD *)a3 = 0;
  v16[0] = 0;
  v12 = 0;
  v15 = 0;
  v18 = (struct _GUID)xmmword_180834B18;
  v13 = 0;
  if ( (int)IsGameManager::CheckStateRepositoryForIsGameFromAppId(this, (CallerIdentity *)a2, &v12, &v18, v16) >= 0
    && v12 )
  {
    *(_BYTE *)a3 = v12;
  }
  else
  {
    v14 = 0;
    if ( (int)IsGameManager::CheckGameConfigStoreForIsGameFromAppId(this, a2, &v13, &v14, &v18, v16) >= 0 )
    {
      *(_BYTE *)a3 = v13;
      *((_BYTE *)a3 + 4) = v14;
    }
  }
  if ( v16[0] == *((_DWORD *)this + 11) )
    goto LABEL_7;
  v17 = v18;
  v19 = (struct _GUID)xmmword_180834B18;
  if ( (int)IsGameManager::CheckKGLForIsGameFromAppId(this, a2, &v17, v16[0], &v15, &v19) < 0 )
    goto LABEL_7;
  *(_BYTE *)a3 = v15;
  v9 = *(_QWORD *)&v19.Data1;
  if ( !*(_QWORD *)&v19.Data1 )
    v9 = *(_QWORD *)v19.Data4;
  if ( !v9 )
  {
LABEL_7:
    v6 = v18;
  }
  else
  {
    v6 = v19;
    v18 = v19;
  }
  if ( *(_BYTE *)a3 )
  {
    v17 = v6;
    IsGameManager::GetAutoGameModeFromGameConfigStore(this, &v17, a3);
    v17 = v18;
    updated = IsGameManager::UpdateGameLastRunTime(this, &v17);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AB,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)updated,
        v11);
  }
  if ( !a2 )
  {
    v7 = -2147467261;
    goto LABEL_20;
  }
  v7 = Windows::Internal::String::_InitializeHelper((struct GameConfigInfo *)((char *)a3 + 32), a2);
  if ( v7 < 0 )
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v7,
      v11);
  return (unsigned int)v7;
}
