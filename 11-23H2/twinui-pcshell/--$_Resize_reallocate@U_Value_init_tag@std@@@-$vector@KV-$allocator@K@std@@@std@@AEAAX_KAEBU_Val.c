/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@KV?$allocator@K@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1806CA15C
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@KV?$allocator@K@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@KV?$allocator@K@std@@@std@@@Z @ 0x1806CA85C (--$load@VJSONInputArchive@cereal@@KV-$allocator@K@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV-$.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180093BA4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801AD05C (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

__int64 __fastcall std::vector<unsigned long>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r15
  size_t size_of; // rax
  char *v7; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  char *v10; // rdx
  const void **v11; // rcx

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v4 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  v5 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<4>(v5);
  v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    memset_0(&v7[4 * v4], 0, 4 * (a2 - v4));
    memmove_0(v7, *a1, (_BYTE *)a1[1] - (_BYTE *)*a1);
    v8 = v5;
    v9 = a2;
    v10 = v7;
    v11 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v7, 4 * v5);
    throw;
  }
  return std::vector<unsigned long>::_Change_array(v11, v10, v9, v8);
}
