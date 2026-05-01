/*
 * XREFs of _lambda_4820608d764e205befb540f09a70bd1e_::__lambda_4820608d764e205befb540f09a70bd1e_ @ 0x1805B3848
 * Callers:
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::SnapWindow_::_1_::dtor$1 @ 0x1805B4B97 (_winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutM_ea_1805B4B97.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

void __fastcall lambda_4820608d764e205befb540f09a70bd1e_::__lambda_4820608d764e205befb540f09a70bd1e_(__int64 a1)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)(a1 + 64);
  if ( *v2 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(v2);
  std::vector<Geometry::CRect>::_Tidy(a1 + 40);
}
