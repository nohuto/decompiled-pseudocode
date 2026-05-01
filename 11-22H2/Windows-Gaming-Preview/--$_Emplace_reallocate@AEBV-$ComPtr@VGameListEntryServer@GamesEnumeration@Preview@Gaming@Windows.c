/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000DC94
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000AFB4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000BB30 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000E64C (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x1800137F0 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013C20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013C20.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004BBF4 (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        char **a1,
        char *a2,
        __int64 *a3)
{
  char *v4; // rsi
  signed __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  void *v12; // rax
  unsigned __int64 v13; // rdx
  char *v14; // rcx
  _QWORD *v15; // rdi
  unsigned __int64 v16; // r12
  __int64 *v17; // r10
  __int64 v18; // r9
  signed __int64 v19; // rcx
  bool v20; // zf
  __int64 v21; // rax
  signed __int32 v22; // eax
  char *v23; // r8
  char *v24; // rcx
  char *v25; // rdx
  char *v26; // rdx
  char *v27; // r8
  char *v28; // rsi
  char *v29; // r14
  __int64 v30; // rcx
  char *v31; // rcx
  char *v32; // r8
  __int64 v34; // rcx
  __int64 v35; // [rsp+28h] [rbp-40h]
  __int64 v36; // [rsp+30h] [rbp-38h]
  unsigned __int64 v37; // [rsp+70h] [rbp+8h]
  _QWORD *v38; // [rsp+78h] [rbp+10h]
  char *v39; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v35 = v7 + 1;
  v8 = (a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    goto LABEL_52;
  v10 = v7 + 1;
  if ( v9 + v8 >= v7 + 1 )
    v10 = v9 + v8;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
LABEL_52:
    __scrt_throw_std_bad_array_new_length();
  v11 = 8 * v10;
  v36 = v10;
  v37 = v10;
  if ( 8 * v10 >= 0x1000 )
  {
    if ( v11 + 39 < v11 )
      goto LABEL_52;
    v12 = operator new(v11 + 39);
    if ( !v12 )
      goto LABEL_51;
    v15 = (_QWORD *)(((unsigned __int64)v12 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v15 - 1) = v12;
    goto LABEL_13;
  }
  if ( !v11 )
  {
    v15 = 0LL;
    v37 = v10;
LABEL_13:
    v38 = v15;
    goto LABEL_14;
  }
  v15 = operator new(8 * v10);
  v38 = v15;
  v37 = v10;
LABEL_14:
  v16 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v17 = (_QWORD *)((char *)v15 + v16);
  try
  {
    v18 = *a3;
    *v17 = *a3;
    if ( v18 )
    {
      v19 = *(_QWORD *)(v18 + 136);
      if ( v19 < 0 )
      {
        do
LABEL_22:
          v22 = *(_DWORD *)(2 * v19 + 0x10);
        while ( v22 != 0x7FFFFFFF
             && v22 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v19 + 16), v22 + 1, v22) );
      }
      else
      {
        while ( (_DWORD)v19 != 0x7FFFFFFF )
        {
          v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 136), v19 + 1, v19);
          v20 = v19 == v21;
          v19 = v21;
          if ( v20 )
            break;
          if ( v21 < 0 )
            goto LABEL_22;
        }
      }
    }
    v39 = (char *)v15 + v16;
    v23 = a1[1];
    v24 = *a1;
    v25 = (char *)v15;
    if ( v4 == v23 )
    {
      while ( v24 != v23 )
      {
        *(_QWORD *)v25 = 0LL;
        if ( v25 != v24 )
        {
          *(_QWORD *)v25 = *(_QWORD *)v24;
          *(_QWORD *)v24 = 0LL;
        }
        v25 += 8;
        v24 += 8;
      }
    }
    else
    {
      while ( v24 != v4 )
      {
        *(_QWORD *)v25 = 0LL;
        if ( v25 != v24 )
        {
          *(_QWORD *)v25 = *(_QWORD *)v24;
          *(_QWORD *)v24 = 0LL;
        }
        v25 += 8;
        v24 += 8;
      }
      v39 = (char *)v15;
      v26 = a1[1];
      if ( v4 != v26 )
      {
        v27 = (char *)v15 + v16 - (_QWORD)v4 + 8;
        do
        {
          *(_QWORD *)&v27[(_QWORD)v4] = 0LL;
          if ( &v27[(_QWORD)v4] != v4 )
          {
            *(_QWORD *)&v27[(_QWORD)v4] = *(_QWORD *)v4;
            *(_QWORD *)v4 = 0LL;
          }
          v4 += 8;
        }
        while ( v4 != v26 );
      }
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>(
      v39,
      (char *)v15 + v16 + 8);
    std::allocator<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::deallocate(
      v34,
      v38,
      v37);
    throw;
  }
  v28 = *a1;
  if ( *a1 )
  {
    v29 = a1[1];
    while ( v28 != v29 )
    {
      v30 = *(_QWORD *)v28;
      if ( *(_QWORD *)v28 )
      {
        *(_QWORD *)v28 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v30);
      }
      v28 += 8;
    }
    v31 = *a1;
    v13 = (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v13 < 0x1000 )
      goto LABEL_49;
    v13 += 39LL;
    v32 = (char *)*((_QWORD *)v31 - 1);
    v14 = (char *)(v31 - v32);
    if ( (unsigned __int64)(v14 - 8) <= 0x1F )
    {
      v31 = v32;
LABEL_49:
      operator delete(v31, v13);
      v17 = (_QWORD *)((char *)v15 + v16);
      goto LABEL_50;
    }
LABEL_51:
    _o__invalid_parameter_noinfo_noreturn(v14, v13);
    __debugbreak();
    goto LABEL_52;
  }
LABEL_50:
  *a1 = (char *)v15;
  a1[1] = (char *)&v15[v35];
  a1[2] = (char *)&v15[v36];
  return v17;
}
