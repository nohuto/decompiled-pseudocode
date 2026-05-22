/*
 * XREFs of ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x180068B10
 * Callers:
 *     ??0AnimationLoggingManager@Composition@UI@Windows@@QEAA@XZ @ 0x180068840 (--0AnimationLoggingManager@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@?$vector@UAnimationObjectInfo@Composition@UI@Windows@@V?$allocator@UAnimationObjectInfo@Composition@UI@Windows@@@std@@@std@@QEAAPEAUAnimationObjectInfo@Composition@UI@Windows@@QEAU2345@$$QEAU2345@@Z @ 0x1800689B0 (--$_Emplace_reallocate@UAnimationObjectInfo@Composition@UI@Windows@@@-$vector@UAnimationObjectIn.c)
 *     ??$?0PEAUIUnknown@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@PEAUIUnknown@@PEAX@std@@@1@PEAU?$_Tree_node@PEAUIUnknown@@PEAX@1@$$QEAPEAUIUnknown@@@Z @ 0x1800A6F34 (--$-0PEAUIUnknown@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@PEAUIUnknown@@PEAX@std@@@std@@@.c)
 *     ??0?$set@PEAUIUnknown@@U?$less@PEAUIUnknown@@@std@@V?$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ @ 0x1800A7294 (--0-$set@PEAUIUnknown@@U-$less@PEAUIUnknown@@@std@@V-$allocator@PEAUIUnknown@@@3@@std@@QEAA@XZ.c)
 *     ??$?0AEBUObjectPropertyPair@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@1@AEBUObjectPropertyPair@@@Z @ 0x1801697D8 (--$-0AEBUObjectPropertyPair@@@-$_Tree_temp_node@V-$allocator@U-$_Tree_node@UObjectPropertyPair@@.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<40>(unsigned __int64 a1)
{
  if ( a1 > 0x666666666666666LL )
    std::_Throw_bad_array_new_length();
  return 40 * a1;
}
