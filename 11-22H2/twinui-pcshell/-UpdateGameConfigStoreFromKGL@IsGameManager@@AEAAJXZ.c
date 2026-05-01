/*
 * XREFs of ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1803E1058
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x1800A9200 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$make_unique_nothrow@$$BY0A@U_GUID@@@wil@@YA?AV?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@wistd@@@wistd@@_K@Z @ 0x1803DD9A0 (--$make_unique_nothrow@$$BY0A@U_GUID@@@wil@@YA-AV-$unique_ptr@$$BY0A@U_GUID@@U-$default_delete@$.c)
 *     ?CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z @ 0x1803DDB18 (-CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z.c)
 *     ?DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z @ 0x1803DDCCC (-DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z.c)
 *     ?GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z @ 0x1803DE224 (-GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803DF994 (-IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803DFA94 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803DFB94 (-IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1803E0524 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall IsGameManager::UpdateGameConfigStoreFromKGL(IsGameManager *this)
{
  unsigned int *v2; // r13
  int v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  _OWORD *v6; // rdi
  unsigned int v7; // esi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  unsigned int *v12; // rbx
  unsigned int *v13; // rsi
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // r12d
  unsigned int v17; // esi
  unsigned int *v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  IsGameManager *v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  int v25; // esi
  int GameEntryAttribs; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 v28; // rdx
  bool v29; // al
  int v30; // eax
  __int64 *v31; // rcx
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // edx
  bool v36; // al
  int updated; // eax
  int v38; // esi
  bool v39; // [rsp+50h] [rbp-B0h] BYREF
  bool v40; // [rsp+51h] [rbp-AFh] BYREF
  bool v41; // [rsp+52h] [rbp-AEh] BYREF
  bool v42; // [rsp+53h] [rbp-ADh] BYREF
  bool v43; // [rsp+54h] [rbp-ACh] BYREF
  bool v44; // [rsp+55h] [rbp-ABh] BYREF
  bool v45; // [rsp+56h] [rbp-AAh] BYREF
  unsigned int v46; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int Size; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int Size_4; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+64h] [rbp-9Ch]
  __int64 v50; // [rsp+68h] [rbp-98h]
  struct KnownGameList::IGameEntry *v51[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v52; // [rsp+80h] [rbp-80h] BYREF
  void *Block; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v54; // [rsp+98h] [rbp-68h]
  unsigned __int16 v55[264]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v56[1024]; // [rsp+2B0h] [rbp+1B0h] BYREF
  IsGameManager *retaddr; // [rsp+6E8h] [rbp+5E8h]

  v2 = 0LL;
  v46 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         0LL,
         &v46);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x738,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  result = v46;
  if ( v46 )
  {
    wil::make_unique_nothrow<_GUID [0]>(&Block, v46);
    v6 = Block;
    if ( !Block )
    {
      v7 = -2147024882;
      v8 = 2147942414LL;
      v9 = 1858LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)v8);
      goto LABEL_19;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, void *, unsigned int *))(**((_QWORD **)this + 2) + 48LL))(
            *((_QWORD *)this + 2),
            Block,
            &v46);
    v7 = v10;
    if ( v10 < 0 )
    {
      v8 = (unsigned int)v10;
      v9 = 1860LL;
      goto LABEL_8;
    }
    v11 = 0LL;
    v49 = 0;
    if ( !v46 )
    {
LABEL_18:
      v7 = 0;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v51[0] = 0LL;
      Size = 1024;
      v12 = 0LL;
      v54 = 0LL;
      v13 = (unsigned int *)v56;
      v14 = (__int64 *)*((_QWORD *)this + 2);
      v15 = *v14;
      v50 = 16 * v11;
      v52 = (struct _GUID)v6[v11];
      v16 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, _BYTE *, unsigned int *))(v15 + 24))(
              v14,
              &v52,
              v56,
              &Size);
      if ( v16 == -2147024662 )
      {
        v17 = Size;
        v18 = (unsigned int *)operator new[](Size, (const struct std::nothrow_t *)&std::nothrow);
        v12 = v18;
        if ( !v18 )
        {
          v12 = 0LL;
          v7 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x756,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)0x8007000ELL);
          goto LABEL_56;
        }
        memset_0(v18, 0, v17);
        v54 = v12;
        v19 = (__int64 *)*((_QWORD *)this + 2);
        v20 = *v19;
        v52 = (struct _GUID)v6[(unsigned __int64)v50 / 0x10];
        v16 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, unsigned int *, unsigned int *))(v20 + 24))(
                v19,
                &v52,
                v12,
                &Size);
        v13 = v12;
        v2 = v12;
      }
      if ( v16 >= 0 )
        break;
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x75B,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v16);
      GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_GetError(v16);
      if ( v2 )
        operator delete[](v2);
      v2 = 0LL;
LABEL_17:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v51);
      v11 = (unsigned int)(v49 + 1);
      v49 = v11;
      if ( (unsigned int)v11 >= v46 )
        goto LABEL_18;
    }
    v2 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, struct KnownGameList::IGameEntry **))(**((_QWORD **)this + 3)
                                                                                            + 64LL))(
           *((_QWORD *)this + 3),
           v13,
           v51) < 0 )
    {
      if ( *v13 >= 3 )
      {
        v22 = (__int64 *)*((_QWORD *)this + 2);
        v23 = *v22;
        v52 = (struct _GUID)v6[(unsigned __int64)v50 / 0x10];
        v24 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *))(v23 + 8))(v22, &v52);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x772,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v24);
          GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError(v25);
        }
      }
      goto LABEL_27;
    }
    Size_4 = 260;
    GameEntryAttribs = IsGameManager::GetGameEntryAttribs(v21, v51[0], &v42, &v41, &v40, &v43, &v44, &v45, v55, &Size_4);
    v27 = retaddr;
    if ( GameEntryAttribs >= 0 )
    {
      v29 = 1;
      v39 = 1;
      if ( !Size_4 )
        goto LABEL_39;
      v30 = IsGameManager::CompareOSVersion(retaddr, v55, Size_4, &v39);
      if ( v30 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x790,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v30);
      v29 = v39;
      if ( v39 || *v13 < 3 )
      {
LABEL_39:
        if ( v40 || (v13[8] & 0x20) == 0 )
        {
          if ( v29 )
          {
            if ( *v13 < *((_DWORD *)this + 11)
              || (v35 = v13[8], v41 != ((v35 >> 3) & 1))
              || v40 != ((v35 >> 1) & 1)
              || v42 != ((v35 >> 2) & 1)
              || v43 != ((v35 >> 9) & 1)
              || v44 != ((v35 >> 7) & 1)
              || v45 != ((v35 >> 10) & 1) )
            {
              v39 = 0;
              IsGameManager::DelayGameConfigStoreUpdate(this, &v39);
              if ( v39 )
              {
                v7 = 0;
LABEL_56:
                if ( v12 )
                  operator delete[](v12);
                Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v51);
LABEL_19:
                if ( v6 )
                  operator delete[](v6);
                return v7;
              }
              v36 = (v13[8] & 0x20) != 0;
              v52 = (struct _GUID)v6[(unsigned __int64)v50 / 0x10];
              updated = IsGameManager::UpdateGameConfigStoreFromKGL(this, v51[0], &v52, *v13, v36, 0LL, 0LL);
              v38 = updated;
              if ( updated < 0 )
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x7BD,
                  (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                  (const char *)(unsigned int)updated);
                GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError(v38);
              }
            }
          }
          goto LABEL_27;
        }
        v33 = (__int64 *)*((_QWORD *)this + 2);
        v34 = *v33;
        v52 = (struct _GUID)v6[(unsigned __int64)v50 / 0x10];
        GameEntryAttribs = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *))(v34 + 8))(v33, &v52);
        v27 = retaddr;
        if ( GameEntryAttribs >= 0 )
        {
LABEL_27:
          if ( v12 )
            operator delete[](v12);
          goto LABEL_17;
        }
        v28 = 1956LL;
      }
      else
      {
        v31 = (__int64 *)*((_QWORD *)this + 2);
        v32 = *v31;
        v52 = (struct _GUID)v6[(unsigned __int64)v50 / 0x10];
        GameEntryAttribs = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *))(v32 + 8))(v31, &v52);
        v27 = retaddr;
        if ( GameEntryAttribs >= 0 )
          goto LABEL_27;
        v28 = 1947LL;
      }
    }
    else
    {
      v28 = 1927LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v27,
      (void *)v28,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)GameEntryAttribs);
    goto LABEL_27;
  }
  return result;
}
