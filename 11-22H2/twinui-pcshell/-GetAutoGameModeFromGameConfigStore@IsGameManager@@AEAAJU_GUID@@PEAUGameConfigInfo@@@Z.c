/*
 * XREFs of ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1803DDDCC
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180039630 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800398E0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IsGameManager::GetAutoGameModeFromGameConfigStore(
        IsGameManager *this,
        struct _GUID *a2,
        struct GameConfigInfo *a3)
{
  __int64 *v4; // rcx
  __int128 v6; // xmm0
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rdx
  __int64 v12; // rcx
  int v13; // edi
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v28; // [rsp+80h] [rbp+40h] BYREF
  int v29; // [rsp+88h] [rbp+48h] BYREF
  int v30; // [rsp+90h] [rbp+50h] BYREF
  __int64 v31; // [rsp+98h] [rbp+58h] BYREF

  *((_QWORD *)a3 + 2) = 0LL;
  *((_DWORD *)a3 + 6) = 0;
  v4 = (__int64 *)*((_QWORD *)this + 2);
  v6 = (__int128)*a2;
  v31 = 0LL;
  v29 = 0;
  v28 = 4;
  v8 = *v4;
  v26 = v6;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, int *, int *))(v8 + 64))(v4, &v26, 17LL, &v29, &v28);
  if ( v9 < 0 )
  {
    v10 = 2480LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v12 = *((_QWORD *)this + 2);
  v26 = (__int128)*a2;
  v30 = 0;
  v13 = v29 != 0 ? 2 : 0;
  v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *))(*(_QWORD *)v12 + 112LL))(v12, &v26, 17LL, &v30);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( v30 )
      ++v13;
    *((_DWORD *)a3 + 2) = v13;
    v16 = *((_QWORD *)this + 2);
    v17 = (__int128)*a2;
    v28 = 4;
    v26 = v17;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v16 + 64LL))(
           v16,
           &v26,
           21LL,
           &v29,
           &v28);
    if ( v9 < 0 )
    {
      v10 = 2494LL;
      goto LABEL_3;
    }
    v18 = (__int128)*a2;
    v28 = 4;
    *((_BYTE *)a3 + 5) = v29 != 0;
    v19 = *((_QWORD *)this + 2);
    v26 = v18;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v19 + 64LL))(
           v19,
           &v26,
           29LL,
           &v29,
           &v28);
    if ( v9 < 0 )
    {
      v10 = 2499LL;
      goto LABEL_3;
    }
    v20 = (__int128)*a2;
    v28 = 4;
    *((_BYTE *)a3 + 6) = v29 != 0;
    v21 = *((_QWORD *)this + 2);
    v26 = v20;
    if ( (*(int (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v21 + 64LL))(
           v21,
           &v26,
           19LL,
           &v29,
           &v28) >= 0 )
      *((_DWORD *)a3 + 6) = v29;
    v22 = *((_QWORD *)this + 2);
    v23 = (__int128)*a2;
    v28 = 8;
    v26 = v23;
    if ( (*(int (__fastcall **)(__int64, __int128 *, __int64, __int64 *, int *))(*(_QWORD *)v22 + 64LL))(
           v22,
           &v26,
           18LL,
           &v31,
           &v28) >= 0 )
      *((_QWORD *)a3 + 2) = v31;
    v24 = *((_QWORD *)this + 2);
    v25 = (__int128)*a2;
    v28 = 4;
    v26 = v25;
    if ( (*(int (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v24 + 64LL))(
           v24,
           &v26,
           20LL,
           &v29,
           &v28) >= 0 )
      *((_DWORD *)a3 + 7) = v29;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B3,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
}
