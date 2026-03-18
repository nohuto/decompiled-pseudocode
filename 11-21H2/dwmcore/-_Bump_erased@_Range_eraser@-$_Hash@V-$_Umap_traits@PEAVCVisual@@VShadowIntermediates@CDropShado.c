/*
 * XREFs of ?_Bump_erased@_Range_eraser@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180212F8C
 * Callers:
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x18021307C (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropSh_ea_18021307C.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800ED3F0 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Range_eraser::_Bump_erased(
        _QWORD *a1)
{
  struct CResource **v1; // rbx
  __int64 result; // rax

  v1 = (struct CResource **)a1[2];
  a1[2] = *v1;
  CDropShadow::ShadowIntermediates::~ShadowIntermediates(v1 + 3);
  std::_Deallocate<16,0>(v1, 0x58uLL);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
