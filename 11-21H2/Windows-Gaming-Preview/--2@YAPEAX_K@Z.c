/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x18004AD04
 * Callers:
 *     ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000D890 (--$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@P.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800132EC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800183A8 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator() @ 0x18001EAA4 (_lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator().c)
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x18001FE34 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180032C10 (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ??$emplace@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x180040E6C (--$emplace@AEAU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@-$_Tr.c)
 *     ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x1800422F0 (-LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x180043290 (-PopulateAsync@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800436D0 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 * Callees:
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x1800132C4 (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x18004B5A4 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     _o__callnewh_0 @ 0x18004B65A (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x18004B6F0 (_o_malloc_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = o_malloc_0(Size);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh_0(i) )
    {
      if ( i != -1LL )
        __scrt_throw_std_bad_alloc();
      __scrt_throw_std_bad_array_new_length();
    }
  }
  return result;
}
