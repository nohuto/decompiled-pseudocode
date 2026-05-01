/*
 * XREFs of ?reserve@?$vector@HV?$allocator@H@std@@@std@@QEAAX_K@Z @ 0x18022B5F4
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x18022A840 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_18022A840.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@HV?$allocator@H@std@@@std@@AEAAX_K@Z @ 0x18022B1DC (-_Reallocate_exactly@-$vector@HV-$allocator@H@std@@@std@@AEAAX_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x18022B2D4 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 */

unsigned __int64 __fastcall std::vector<int>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[2] - *a1) >> 2;
  if ( a2 > result )
  {
    if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
      std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
    return std::vector<int>::_Reallocate_exactly((__int64)a1, a2);
  }
  return result;
}
