/*
 * XREFs of ??4?$vector@HV?$allocator@H@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801C4838
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?_Copy_assign@?$vector@HV?$allocator@H@std@@@std@@AEAAXAEBV12@U?$integral_constant@_N$0A@@2@@Z @ 0x1801CE650 (-_Copy_assign@-$vector@HV-$allocator@H@std@@@std@@AEAAXAEBV12@U-$integral_constant@_N$0A@@2@@Z.c)
 */

__int64 __fastcall std::vector<int>::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
    std::vector<int>::_Copy_assign();
  return a1;
}
