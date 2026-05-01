/*
 * XREFs of ??$emplace@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x180041BEC
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D68C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18003F070 (-RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001006C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001360C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004BBF4 (--2@YAPEAX_K@Z.c)
 *     memcmp_0 @ 0x18004CE64 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::emplace<_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3,
        __int64 *a4)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  char v10; // di
  __int64 inserted; // rsi
  _OWORD *v12; // r8
  __int64 v13; // rax
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-48h]

  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 8);
  *(_QWORD *)&v16 = v9;
  v10 = 0;
  DWORD2(v16) = 0;
  inserted = v8;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    *(_QWORD *)&v16 = v9;
    if ( memcmp_0((const void *)(v9 + 32), a3, 0x10uLL) >= 0 )
    {
      DWORD2(v16) = 1;
      inserted = v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      DWORD2(v16) = 0;
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  if ( *(_BYTE *)(inserted + 25) || memcmp_0(a3, (const void *)(inserted + 32), 0x10uLL) < 0 )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v15 = (unsigned __int64)a1;
    v12 = operator new(0x38uLL);
    v12[2] = *a3;
    v13 = *a4;
    *a4 = 0LL;
    *((_QWORD *)v12 + 6) = v13;
    *(_QWORD *)v12 = v8;
    *((_QWORD *)v12 + 1) = v8;
    *((_QWORD *)v12 + 2) = v8;
    *((_WORD *)v12 + 12) = 0;
    v15 = v16;
    inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>>::_Insert_node(
                 a1,
                 (__int64)&v15,
                 (__int64)v12);
    v10 = 1;
  }
  *(_QWORD *)a2 = inserted;
  *(_BYTE *)(a2 + 8) = v10;
  return a2;
}
