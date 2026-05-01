/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@HV?$allocator@H@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801C21B8
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@HV?$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x1801C2E88 (--$load@VJSONInputArchive@cereal@@HV-$allocator@H@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18031AEE0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18033B984 (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 */

__int64 __fastcall std::vector<int>::_Resize_reallocate<std::_Value_init_tag>(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // r15
  size_t size_of; // rax
  char *v7; // r14
  __int64 v8; // rcx

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Geometry::CRect>::_Xlength();
  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v5 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth();
  size_of = std::_Get_size_of_n<4>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    memset_0(&v7[4 * v4], 0, 4 * (a2 - v4));
    memmove_0(v7, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v8 = a1;
  }
  catch ( ... )
  {
    std::allocator<int>::deallocate(v8, v7, v5);
    throw;
  }
  return std::vector<int>::_Change_array();
}
