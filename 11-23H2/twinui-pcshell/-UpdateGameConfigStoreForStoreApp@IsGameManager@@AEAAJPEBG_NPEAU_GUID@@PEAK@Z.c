/*
 * XREFs of ?UpdateGameConfigStoreForStoreApp@IsGameManager@@AEAAJPEBG_NPEAU_GUID@@PEAK@Z @ 0x1803E035C
 * Callers:
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180039290 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z @ 0x1803DF6E4 (-IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z.c)
 */

__int64 __fastcall IsGameManager::UpdateGameConfigStoreForStoreApp(
        IsGameManager *this,
        const unsigned __int16 *a2,
        unsigned __int8 a3,
        struct _GUID *a4,
        unsigned int *a5)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 (__fastcall ***v11)(_QWORD, int *, struct _GUID *); // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // [rsp+30h] [rbp-51h] BYREF
  int v18[3]; // [rsp+34h] [rbp-4Dh] BYREF
  struct _GUID v19; // [rsp+40h] [rbp-41h] BYREF
  int v20; // [rsp+50h] [rbp-31h] BYREF
  __int128 v21; // [rsp+54h] [rbp-2Dh]
  int v22; // [rsp+64h] [rbp-1Dh]
  const unsigned __int16 *v23; // [rsp+68h] [rbp-19h]
  __int64 v24; // [rsp+70h] [rbp-11h]
  struct _GUID v25; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v24 = 0LL;
  v17 = 2;
  v21 = 0LL;
  v25 = (struct _GUID)xmmword_180834B18;
  if ( !a2 )
  {
    v8 = 1999LL;
LABEL_3:
    v9 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( !a4 )
  {
    v8 = 2000LL;
    goto LABEL_3;
  }
  v20 = 2;
  v22 = 2;
  LODWORD(v24) = v24 & 0xFFFFFDF1 | (4 * a3) | 0x11;
  *a4 = (struct _GUID)xmmword_180834B18;
  v11 = (__int64 (__fastcall ***)(_QWORD, int *, struct _GUID *))*((_QWORD *)this + 2);
  v23 = a2;
  v12 = (**v11)(v11, &v20, &v25);
  v9 = v12;
  if ( v12 == -2147024713 )
  {
    v13 = *((_QWORD *)this + 2);
    v18[0] = 4;
    v19 = v25;
    v9 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, _QWORD, unsigned int *, int *))(*(_QWORD *)v13 + 64LL))(
           v13,
           &v19,
           0LL,
           &v17,
           v18);
    if ( v9 < 0 )
    {
      v8 = 2025LL;
      goto LABEL_4;
    }
    if ( v17 <= 2 )
    {
      v14 = *((_QWORD *)this + 2);
      v19 = v25;
      v15 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, int *))(*(_QWORD *)v14 + 16LL))(v14, &v19, &v20);
      v9 = v15;
      if ( v15 < 0 )
      {
        GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreForStoreApp(v15, a2);
        v8 = 2039LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreForStoreApp(v12, a2);
    if ( v9 < 0 )
    {
      v8 = 2047LL;
      goto LABEL_4;
    }
  }
  v16 = v17;
  *a4 = v25;
  *a5 = v16;
  return 0LL;
}
