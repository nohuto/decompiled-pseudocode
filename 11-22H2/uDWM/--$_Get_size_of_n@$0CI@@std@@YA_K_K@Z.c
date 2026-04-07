/*
 * XREFs of ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180047B6C
 * Callers:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180047A10 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 *     ??$?0AEAPEAVCWindowData@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAVCWindowData@@PEAX@std@@@1@PEAU?$_Tree_node@PEAVCWindowData@@PEAX@1@AEAPEAVCWindowData@@@Z @ 0x1800B7120 (--$-0AEAPEAVCWindowData@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@PEAVCWindowData@@PEAX@std.c)
 *     ??$_Emplace_reallocate@PEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBU12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x1800EF6D4 (--$_Emplace_reallocate@PEBU-$GenericMember@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtA.c)
 *     ??$_Emplace_reallocate@PEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBV12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x1800EF810 (--$_Emplace_reallocate@PEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAl.c)
 *     ??0?$_Hash@V?$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@6@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@@1@AEBV?$allocator@Ubase_class_id@detail@traits@cereal@@@1@@Z @ 0x1800F0A00 (--0-$_Hash@V-$_Uset_traits@Ubase_class_id@detail@traits@cereal@@V-$_Uhash_compare@Ubase_class_id.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800B8D34 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<40>(unsigned __int64 a1)
{
  if ( a1 > 0x666666666666666LL )
    std::_Throw_bad_array_new_length();
  return 40 * a1;
}
