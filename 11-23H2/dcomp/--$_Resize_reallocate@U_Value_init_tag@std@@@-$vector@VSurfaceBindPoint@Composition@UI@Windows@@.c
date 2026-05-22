/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E9C8
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18017E91C (--$_Resize@U_Value_init_tag@std@@@-$vector@VSurfaceBindPoint@Composition@UI@Windows@@V-$allocato.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180068C78 (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_move@PEAVSurfaceBindPoint@Composition@UI@Windows@@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAPEAVSurfaceBindPoint@Composition@UI@Windows@@QEAV1234@0PEAV1234@AEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x18017EAC0 (--$_Uninitialized_move@PEAVSurfaceBindPoint@Composition@UI@Windows@@V-$allocator@VSurfaceBindPoi.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@@@std@@YAPEAVSurfaceBindPoint@Composition@UI@Windows@@PEAV1234@_KAEAV?$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@0@@Z @ 0x18017EBA0 (--$_Uninitialized_value_construct_n@V-$allocator@VSurfaceBindPoint@Composition@UI@Windows@@@std@.c)
 */

__int64 __fastcall std::vector<Windows::UI::Composition::SurfaceBindPoint>::_Resize_reallocate<std::_Value_init_tag>(
        const char *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  SIZE_T size_of; // rax
  __int64 v9; // rbx

  v2 = 0x492492492492492LL;
  if ( a2 > 0x492492492492492LL )
    std::_Dwm_Xlength_error(a1);
  v5 = (*((_QWORD *)a1 + 1) - *(_QWORD *)a1) / 56LL;
  v6 = (*((_QWORD *)a1 + 2) - *(_QWORD *)a1) / 56LL;
  v7 = v6 >> 1;
  if ( v6 <= 0x492492492492492LL - (v6 >> 1) )
  {
    v2 = v7 + v6;
    if ( v7 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<56>(v2);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_value_construct_n<std::allocator<Windows::UI::Composition::SurfaceBindPoint>>((Windows::UI::Composition::SurfaceBindPoint *)(v9 + 56 * v5));
  std::_Uninitialized_move<Windows::UI::Composition::SurfaceBindPoint *>(*(_QWORD *)a1, *((_QWORD *)a1 + 1), v9);
  return std::vector<Windows::UI::Composition::SurfaceBindPoint>::_Change_array(a1, v9, a2, v2);
}
