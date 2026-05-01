/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@KV?$allocator@K@std@@@std@@AEAAX_K@Z @ 0x1806DE05C
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x1806DE4E4 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180093BA4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801AD05C (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

char *__fastcall std::vector<unsigned long>::_Clear_and_reserve_geometric(void **a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  size_t size_of; // rax
  char *v5; // rax
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v3 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth(a1, a2);
  if ( *a1 )
  {
    std::_Deallocate<16,0>(*a1, ((_BYTE *)a1[2] - (_BYTE *)*a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  size_of = std::_Get_size_of_n<4>(v3);
  v5 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[4 * v3];
  a1[2] = result;
  return result;
}
