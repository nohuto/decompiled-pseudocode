/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801CE468
 * Callers:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x1801C4268 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ?_Copy_assign@?$vector@HV?$allocator@H@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x1801CE650 (-_Copy_assign@-$vector@HV-$allocator@H@std@@@std@@AEAAXAEBV12@U-$integral_constant@_N$0A@@2@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x18033B984 (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 */

__int64 __fastcall std::vector<int>::_Clear_and_reserve_geometric(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<Geometry::CRect>::_Xlength();
  v3 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth();
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return std::vector<int>::_Buy_raw(a1, v3);
}
