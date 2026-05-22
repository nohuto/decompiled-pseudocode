/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@1@@Z @ 0x1800E6404
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@1@@Z @ 0x1800E6404 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@.c)
 *     ??1CDelegatedInkTrailImpl@DirectComposition@@UEAA@XZ @ 0x1800E657C (--1CDelegatedInkTrailImpl@DirectComposition@@UEAA@XZ.c)
 *     ?RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z @ 0x1800E6CC0 (-RemoveTrailPoints@CDelegatedInkTrailImpl@DirectComposition@@UEAAJI@Z.c)
 *     ?StartNewTrail@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800E6F30 (-StartNewTrail@CDelegatedInkTrailImpl@DirectComposition@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@PEAX@1@@Z @ 0x1800E6404 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBI$$CBUSuperWetInkBallpointPenPoint@@@std@@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,SuperWetInkBallpointPenPoint const>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, 0x60uLL);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
