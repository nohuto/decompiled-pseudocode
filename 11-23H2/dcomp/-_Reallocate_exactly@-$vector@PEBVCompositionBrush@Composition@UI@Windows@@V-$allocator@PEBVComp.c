/*
 * XREFs of ?_Reallocate_exactly@?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@AEAAX_K@Z @ 0x180082544
 * Callers:
 *     ?GetSourcesForCycleDetection@CompositionEffectBrush@Composition@UI@Windows@@MEBAXAEAV?$vector@PEBVCompositionBrush@Composition@UI@Windows@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180082480 (-GetSourcesForCycleDetection@CompositionEffectBrush@Composition@UI@Windows@@MEBAXAEAV-$vector@PE.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

__int64 __fastcall std::vector<Windows::UI::Composition::CompositionBrush const *>::_Reallocate_exactly(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T size_of; // rax
  void *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  size_of = std::_Get_size_of_n<8>(a2);
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<Windows::UI::Composition::CompositionBrush const *>::_Change_array(a1, v6, v4, a2);
}
