/*
 * XREFs of ??1?$unordered_set@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@QEAA@XZ @ 0x180157970
 * Callers:
 *     ?CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z @ 0x18004659C (-CheckForCycle@CompositionBrush@Composition@UI@Windows@@QEBAJPEBV1234@@Z.c)
 *     ?Validate_Source@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180047200 (-Validate_Source@CompositionNineGridBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234.c)
 *     ?Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180047EE0 (-Validate_Mask@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPE.c)
 *     ?Validate_Source@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEAPEAVCompositionBrush@234@@Z @ 0x180048CD0 (-Validate_Source@CompositionMaskBrush@Composition@UI@Windows@@QEAAJPEAUICompositionBrush@234@PEA.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@@std@@@?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@std@@@1@PEAU01@@Z @ 0x180157938 (--$_Free_non_head@V-$allocator@U-$_List_node@PEBVCompositionBrush@Composition@UI@Windows@@PEAX@s.c)
 */

void __fastcall std::unordered_set<Windows::UI::Composition::CompositionBrush const *>::~unordered_set<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>,std::allocator<Windows::UI::Composition::CompositionBrush const *>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<Windows::UI::Composition::CompositionBrush const *,void *>::_Free_non_head<std::allocator<std::_List_node<Windows::UI::Composition::CompositionBrush const *,void *>>>(
    v2,
    *(_QWORD ***)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x18uLL);
}
