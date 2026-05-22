/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAVCompositionIsland@Composition@UI@Windows@@V?$allocator@PEAVCompositionIsland@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180113DE4
 * Callers:
 *     ?BeginCallback_Read@CompositionIslandEnvironment@Composition@UI@Windows@@AEAAXPEAV?$vector@PEAVCompositionIsland@Composition@UI@Windows@@V?$allocator@PEAVCompositionIsland@Composition@UI@Windows@@@std@@@std@@@Z @ 0x180088F4C (-BeginCallback_Read@CompositionIslandEnvironment@Composition@UI@Windows@@AEAAXPEAV-$vector@PEAVC.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180045364 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Composition::CompositionIsland *>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  char *v10; // rbx

  v2 = 0x1FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error((const char *)a1);
  v5 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v7 = v5 >> 3;
  v8 = v6 >> 1;
  if ( v6 <= 0x1FFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<8>(v2);
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  memset_0(&v10[8 * v7], 0, 8 * (a2 - v7));
  memmove_0(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<Windows::UI::Composition::CompositionIsland *>::_Change_array(a1, v10, a2, v2);
}
