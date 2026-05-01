/*
 * XREFs of ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x1803DF010
 * Callers:
 *     ?CheckGameConfigStoreForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_N1PEAU_GUID@@PEAK@Z @ 0x180039770 (-CheckGameConfigStoreForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_N1PEAU_GUID@@PEAK@Z.c)
 *     ?CheckGameConfigStoreForIsGameFromProcessId@IsGameManager@@AEAAJKPEA_N0PEAKPEAU_GUID@@PEAVString@Internal@Windows@@@Z @ 0x180039818 (-CheckGameConfigStoreForIsGameFromProcessId@IsGameManager@@AEAAJKPEA_N0PEAKPEAU_GUID@@PEAVString.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z @ 0x1803DF4CC (-IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z.c)
 */

__int64 __fastcall IsGameManager::IsEnabledInGameConfigStore(
        IsGameManager *this,
        struct _GUID *a2,
        bool *a3,
        bool *a4,
        unsigned int *a5)
{
  unsigned int *v5; // r12
  __int128 v7; // xmm0
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  const unsigned __int16 *v17; // rcx
  __int64 v18; // rcx
  __int128 v19; // xmm0
  bool v20; // bl
  __int64 v21; // rcx
  __int128 v22; // xmm0
  int v23; // eax
  unsigned int v24; // edi
  __int128 v25; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v27; // [rsp+70h] [rbp+30h] BYREF

  v5 = a5;
  v7 = (__int128)*a2;
  *a3 = 0;
  *a4 = 0;
  *v5 = 0;
  v11 = *((_QWORD *)this + 2);
  v27 = 4;
  v25 = v7;
  v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, unsigned int **, int *))(*(_QWORD *)v11 + 64LL))(
          v11,
          &v25,
          12LL,
          &a5,
          &v27);
  if ( v12 < 0 )
  {
    v13 = 1468LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v15 = (__int128)*a2;
  v27 = 4;
  *a4 = (_DWORD)a5 != 0;
  v16 = *((_QWORD *)this + 2);
  v25 = v15;
  v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, unsigned int **, int *))(*(_QWORD *)v16 + 64LL))(
          v16,
          &v25,
          9LL,
          &a5,
          &v27);
  if ( v12 < 0 )
  {
    v13 = 1474LL;
    goto LABEL_3;
  }
  if ( (_DWORD)a5 )
  {
    v18 = *((_QWORD *)this + 2);
    v19 = (__int128)*a2;
    v27 = 4;
    v25 = v19;
    v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, unsigned int **, int *))(*(_QWORD *)v18 + 64LL))(
            v18,
            &v25,
            11LL,
            &a5,
            &v27);
    if ( v12 < 0 )
    {
      v13 = 1487LL;
      goto LABEL_3;
    }
    if ( (_DWORD)a5 )
    {
      v17 = L"Disabled by Publisher";
    }
    else
    {
      if ( !*a4 )
      {
        v20 = 1;
        goto LABEL_16;
      }
      v17 = L"Restricted";
    }
  }
  else
  {
    v17 = L"Disabled by User";
  }
  v20 = 0;
  GameDVRTraceProvider::IsGameManager_GameDVR_Disabled(v17);
LABEL_16:
  v21 = *((_QWORD *)this + 2);
  v22 = (__int128)*a2;
  v27 = 4;
  v25 = v22;
  v23 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, unsigned int *, int *))(*(_QWORD *)v21 + 64LL))(
          v21,
          &v25,
          0LL,
          v5,
          &v27);
  v24 = v23;
  if ( v23 >= 0 )
  {
    *a3 = v20;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E4,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v23);
    return v24;
  }
}
