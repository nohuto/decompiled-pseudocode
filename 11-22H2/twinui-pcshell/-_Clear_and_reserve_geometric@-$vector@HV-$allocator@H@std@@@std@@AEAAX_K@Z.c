/*
 * XREFs of ?_Clear_and_reserve_geometric@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x1801AD008
 * Callers:
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x180096FA8 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ??4?$vector@HV?$allocator@H@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801ACF8C (--4-$vector@HV-$allocator@H@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@V?$allocator@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@std@@AEBA_K_K@Z @ 0x1801AD05C (-_Calculate_growth@-$vector@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@winrt@@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

unsigned __int64 __fastcall std::vector<int>::_Clear_and_reserve_geometric(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v3 = std::vector<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId>::_Calculate_growth();
  if ( *(_QWORD *)a1 )
  {
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return std::vector<int>::_Buy_raw((__int64 *)a1, v3);
}
