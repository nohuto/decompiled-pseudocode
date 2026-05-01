/*
 * XREFs of ?InitGameConfigFromEntry@@YAJPEAUIGameEntry@KnownGameList@@PEAUKGLGameConfig@2@@Z @ 0x180740AE4
 * Callers:
 *     ?GetGameConfig@CGameEntry@@UEAAJPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18073F7D0 (-GetGameConfig@CGameEntry@@UEAAJPEAUKGLGameConfig@KnownGameList@@@Z.c)
 *     ?GetGameConfigFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18073F820 (-GetGameConfigFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAUKGLGameConfig@KnownGameList@@@Z.c)
 *     ?GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z @ 0x18073F8D0 (-GetGameConfigFromPID@CQueryKnownGameList@@UEAAJKPEAUKGLGameConfig@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall InitGameConfigFromEntry(
        struct KnownGameList::IGameEntry *a1,
        struct KnownGameList::KGLGameConfig *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned __int16 v14; // [rsp+80h] [rbp+30h] BYREF
  __int16 v15; // [rsp+88h] [rbp+38h] BYREF

  *(_WORD *)((char *)a2 + 1) = 0;
  *(_BYTE *)a2 = 0;
  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned __int16 *))(*(_QWORD *)a1 + 48LL))(
         a1,
         &v14);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = 0;
    if ( v14 )
    {
      while ( 1 )
      {
        v8 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, __int16 *, int *))(*(_QWORD *)a1 + 64LL))(
               a1,
               v7,
               &v15,
               &v11);
        v9 = v8;
        if ( v8 < 0 )
          break;
        switch ( v15 )
        {
          case 258:
            if ( v11 )
            {
              v10 = 1574LL;
LABEL_23:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v10,
                (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                (const char *)0x8000FFFFLL);
              return 2147549183LL;
            }
            *((_BYTE *)a2 + 2) = v12 != 0;
            break;
          case 257:
            if ( v11 )
            {
              v10 = 1580LL;
              goto LABEL_23;
            }
            *(_BYTE *)a2 = v12 != 0;
            break;
          case 256:
            if ( v11 )
            {
              v10 = 1586LL;
              goto LABEL_23;
            }
            *((_BYTE *)a2 + 1) = v12 != 0;
            break;
          case 259:
            if ( v11 )
            {
              v10 = 1592LL;
              goto LABEL_23;
            }
            *((_BYTE *)a2 + 3) = v12 != 0;
            break;
          case 260:
            if ( v11 )
            {
              v10 = 1598LL;
              goto LABEL_23;
            }
            *((_BYTE *)a2 + 4) = v12 != 0;
            break;
        }
        if ( ++v7 >= v14 )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x622,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x61B,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
