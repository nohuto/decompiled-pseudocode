/*
 * XREFs of ??$_Get_size_of_n@$0EI@@std@@YA_K_K@Z @ 0x18004647C
 * Callers:
 *     ??0DeviceDockServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18004633C (--0DeviceDockServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@std@@@1@@Z @ 0x1800943C4 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBV-$basic_string@GU-$char_trait.c)
 *     ??$_Emplace_reallocate@AEBVHidChannelValueInfo@@@?$vector@VHidChannelValueInfo@@V?$allocator@VHidChannelValueInfo@@@std@@@std@@QEAAPEAVHidChannelValueInfo@@QEAV2@AEBV2@@Z @ 0x1800D5268 (--$_Emplace_reallocate@AEBVHidChannelValueInfo@@@-$vector@VHidChannelValueInfo@@V-$allocator@VHi.c)
 *     ??$?0AEBUDockInputIdentity@@AEAUtagRECT@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@1@AEBUDockInputIdentity@@AEAUtagRECT@@@Z @ 0x18017BB78 (--$-0AEBUDockInputIdentity@@AEAUtagRECT@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$.c)
 *     ??0GestureState@MagnifierRecognizer@@QEAA@XZ @ 0x1801AF3F4 (--0GestureState@MagnifierRecognizer@@QEAA@XZ.c)
 *     ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801B0088 (--$-0AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@1@V-$tuple@$$V@1@@-$_Tree_temp_no_ea_1801B0088.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<72>(unsigned __int64 a1)
{
  if ( a1 > 0x38E38E38E38E38ELL )
    std::_Throw_bad_array_new_length();
  return 72 * a1;
}
