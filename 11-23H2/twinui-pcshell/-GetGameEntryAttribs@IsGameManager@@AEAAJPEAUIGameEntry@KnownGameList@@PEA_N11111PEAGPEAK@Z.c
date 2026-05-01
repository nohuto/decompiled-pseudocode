/*
 * XREFs of ?GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z @ 0x1803DE224
 * Callers:
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x1803DF210 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1803E1058 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18012FE34 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall IsGameManager::GetGameEntryAttribs(
        IsGameManager *this,
        struct KnownGameList::IGameEntry *a2,
        bool *a3,
        bool *a4,
        bool *a5,
        bool *a6,
        bool *a7,
        bool *a8,
        unsigned __int16 *a9,
        unsigned int *a10)
{
  bool *v10; // rax
  unsigned int v11; // esi
  bool *v12; // r13
  unsigned int v15; // edi
  HRESULT v16; // ebx
  __int64 v17; // rdx
  unsigned int *v19; // r14
  bool v20; // zf
  bool *v21; // rcx
  int v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h]
  unsigned int v24; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  IsGameManager *v26; // [rsp+90h] [rbp+40h] BYREF
  struct KnownGameList::IGameEntry *v27; // [rsp+98h] [rbp+48h]

  v27 = a2;
  v26 = this;
  v10 = a6;
  v11 = 0;
  v12 = a5;
  *a3 = 0;
  *a4 = 0;
  v15 = 0;
  *v12 = 0;
  *v10 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  v16 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, IsGameManager **))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v26);
  if ( v16 < 0 )
  {
    v17 = 2284LL;
    goto LABEL_3;
  }
  v19 = a10;
  if ( !(_WORD)v26 )
  {
LABEL_30:
    *v19 = v15;
    return 0LL;
  }
  while ( 1 )
  {
    v16 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, bool **, int *))(*(_QWORD *)v27 + 64LL))(
            v27,
            v11,
            &a5,
            &v22);
    if ( v16 < 0 )
      break;
    switch ( (unsigned __int16)a5 )
    {
      case 0x102u:
        if ( v22 )
        {
          v16 = -2147418113;
          v17 = 2295LL;
          goto LABEL_3;
        }
        *a3 = (_DWORD)v23 != 0;
        break;
      case 0x101u:
        if ( v22 )
        {
          v16 = -2147418113;
          v17 = 2301LL;
          goto LABEL_3;
        }
        *a4 = (_DWORD)v23 != 0;
        break;
      case 0x100u:
        if ( v22 )
        {
          v16 = -2147418113;
          v17 = 2307LL;
          goto LABEL_3;
        }
        *v12 = (_DWORD)v23 != 0;
        break;
      case 0x104u:
        if ( v22 )
        {
          v16 = -2147418113;
          v17 = 2313LL;
          goto LABEL_3;
        }
        v20 = (_DWORD)v23 == 0;
        v21 = a6;
LABEL_24:
        *v21 = !v20;
        break;
      case 0x140u:
        if ( v22 )
        {
          v16 = -2147418113;
          v17 = 2319LL;
          goto LABEL_3;
        }
        v20 = (_DWORD)v23 == 0;
        v21 = a7;
        goto LABEL_24;
      case 0x143u:
        if ( v22 )
        {
          v16 = -2147418113;
          v17 = 2325LL;
          goto LABEL_3;
        }
        v20 = (_DWORD)v23 == 0;
        v21 = a8;
        goto LABEL_24;
      case 1u:
        if ( v22 != 1 )
        {
          v16 = -2147418113;
          v17 = 2331LL;
          goto LABEL_3;
        }
        v16 = StringCchPrintfW(a9, *v19, (size_t *)L"%*s", v24 >> 1, v23);
        if ( v16 < 0 )
        {
          v17 = 2333LL;
          goto LABEL_3;
        }
        v15 = v24 >> 1;
        break;
    }
    if ( ++v11 >= (unsigned __int16)v26 )
      goto LABEL_30;
  }
  v17 = 2291LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
