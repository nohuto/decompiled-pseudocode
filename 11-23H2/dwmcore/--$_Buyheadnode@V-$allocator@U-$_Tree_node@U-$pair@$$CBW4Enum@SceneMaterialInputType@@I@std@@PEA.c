/*
 * XREFs of ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x1800B0BE8
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800B080C (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ??0?$set@_KU?$less@_K@std@@V?$allocator@_K@2@@std@@QEAA@XZ @ 0x1800FA354 (--0-$set@_KU-$less@_K@std@@V-$allocator@_K@2@@std@@QEAA@XZ.c)
 *     _anonymous_namespace_::FrameSequenceInfo::FrameSequenceInfo_0 @ 0x1801CD1C8 (_anonymous_namespace_--FrameSequenceInfo--FrameSequenceInfo_0.c)
 *     ??0CSceneMeshRendererComponent@@QEAA@PEAVCComposition@@@Z @ 0x18024ED70 (--0CSceneMeshRendererComponent@@QEAA@PEAVCComposition@@@Z.c)
 *     ??$?0V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@@Z @ 0x18024F570 (--$-0V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003F850 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800B122C (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 */

__int64 std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>()
{
  SIZE_T size_of; // rax
  __int64 result; // rax

  size_of = std::_Get_size_of_n<40>(1LL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *(_QWORD *)result = result;
  *(_QWORD *)(result + 8) = result;
  *(_QWORD *)(result + 16) = result;
  *(_WORD *)(result + 24) = 257;
  return result;
}
