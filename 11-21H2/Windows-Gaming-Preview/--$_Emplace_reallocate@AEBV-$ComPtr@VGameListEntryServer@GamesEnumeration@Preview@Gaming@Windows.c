/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000DB58
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000AE10 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000B98C (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x18000E490 (-_Xlength@-$vector@V-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800131B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x1800132C4 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800132EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013750 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_180013750.c)
 */

unsigned __int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 v11; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  __int64 v15; // r8
  signed __int64 v16; // rcx
  bool v17; // zf
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  signed __int32 v20; // eax
  _QWORD *v21; // r8
  _QWORD *v22; // rcx
  _QWORD *v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 *v25; // rbx
  __int64 *v26; // r14
  __int64 v27; // rcx
  __int64 v29; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = (unsigned __int64)a2 - *a1;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Xlength();
  v8 = v7 + 1;
  v29 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v19 = (v9 >> 1) + v9;
    v10 = v8;
    if ( v19 >= v8 )
      v10 = v19;
    if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
      __scrt_throw_std_bad_array_new_length();
  }
  else
  {
    v10 = 0x1FFFFFFFFFFFFFFFLL;
  }
  v11 = 8 * v10;
  v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v10);
  v13 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
  v14 = v13 + v12;
  v15 = *a3;
  *(_QWORD *)(v13 + v12) = *a3;
  if ( v15 )
  {
    v16 = *(_QWORD *)(v15 + 136);
    if ( v16 < 0 )
    {
      do
LABEL_15:
        v20 = *(_DWORD *)(2 * v16 + 0x10);
      while ( v20 != 0x7FFFFFFF
           && v20 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v16 + 16), v20 + 1, v20) );
    }
    else
    {
      while ( (_DWORD)v16 != 0x7FFFFFFF )
      {
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + 136), v16 + 1, v16);
        v17 = v16 == v18;
        v16 = v18;
        if ( v17 )
          break;
        if ( v18 < 0 )
          goto LABEL_15;
      }
    }
  }
  v21 = (_QWORD *)a1[1];
  v22 = (_QWORD *)*a1;
  v23 = (_QWORD *)v12;
  if ( v4 == v21 )
  {
    while ( v22 != v21 )
    {
      *v23 = 0LL;
      if ( v23 != v22 )
      {
        *v23 = *v22;
        *v22 = 0LL;
      }
      ++v23;
      ++v22;
    }
  }
  else
  {
    if ( v22 != v4 )
    {
      do
      {
        *v23 = 0LL;
        if ( v23 != v22 )
        {
          *v23 = *v22;
          *v22 = 0LL;
        }
        ++v23;
        ++v22;
      }
      while ( v22 != v4 );
      v21 = (_QWORD *)a1[1];
    }
    if ( v4 != v21 )
    {
      v24 = v12 + v13 - (_QWORD)v4 + 8;
      do
      {
        *(_QWORD *)((char *)v4 + v24) = 0LL;
        if ( (_QWORD *)((char *)v4 + v24) != v4 )
        {
          *(_QWORD *)((char *)v4 + v24) = *v4;
          *v4 = 0LL;
        }
        ++v4;
      }
      while ( v4 != v21 );
    }
  }
  v25 = (__int64 *)*a1;
  if ( *a1 )
  {
    v26 = (__int64 *)a1[1];
    if ( v25 != v26 )
    {
      do
      {
        v27 = *v25;
        if ( *v25 )
        {
          *v25 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v27);
        }
        ++v25;
      }
      while ( v25 != v26 );
      v25 = (__int64 *)*a1;
    }
    std::_Deallocate<16,0>(v25, (a1[2] - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = v12;
  a1[1] = v12 + 8 * v29;
  a1[2] = v12 + v11;
  return v14;
}
