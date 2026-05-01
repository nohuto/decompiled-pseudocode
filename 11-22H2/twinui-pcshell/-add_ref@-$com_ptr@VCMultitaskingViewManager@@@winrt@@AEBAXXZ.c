/*
 * XREFs of ?add_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEBAXXZ @ 0x180140020
 * Callers:
 *     _lambda_e5288bd2e8441abb5041b2e3fba677a0_::operator() @ 0x18020E018 (_lambda_e5288bd2e8441abb5041b2e3fba677a0_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_568cc8b99e08703b6f8e9ab35c61ba24__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy @ 0x180210310 (std--_Func_impl_no_alloc__lambda_568cc8b99e08703b6f8e9ab35c61ba24__void_enum_winrt--WindowsUdk--.c)
 *     std::_Func_impl_no_alloc__lambda_9ec3d353ebe123d5bcc6e0dd9d042727__void_enum_winrt::WindowsUdk::UI::Shell::ViewVisibility_::_Copy @ 0x180210350 (std--_Func_impl_no_alloc__lambda_9ec3d353ebe123d5bcc6e0dd9d042727__void_enum_winrt--WindowsUdk--.c)
 *     ?RegisterForCustomDockTargets@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@@Z @ 0x180497EB0 (-RegisterForCustomDockTargets@CPrivilegedArrangementOperations@@EEAAHPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

unsigned int __fastcall winrt::com_ptr<CMultitaskingViewManager>::add_ref(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 36), a2);
  return result;
}
