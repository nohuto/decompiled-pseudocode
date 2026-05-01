/*
 * XREFs of _lambda_ead74eb18ddaf5d60afd1f95853bb976_::__lambda_ead74eb18ddaf5d60afd1f95853bb976_ @ 0x1801D771C
 * Callers:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_ead74eb18ddaf5d60afd1f95853bb976___ @ 0x1801D6D40 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winrt_ea_1801D6D40.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs_::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_ead74eb18ddaf5d60afd1f95853bb976____::_1_::dtor$0 @ 0x1801D6DAA (_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--MenuItem_winr_ea_1801D6DAA.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_ead74eb18ddaf5d60afd1f95853bb976___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::MenuItem_winrt::WindowsUdk::UI::MenuItemInvokedArgs___lambda_ead74eb18ddaf5d60afd1f95853bb976___ @ 0x1801D77D4 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winr_ea_1801D77D4.c)
 * Callees:
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1801A3CC0 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ead74eb18ddaf5d60afd1f95853bb976_::__lambda_ead74eb18ddaf5d60afd1f95853bb976_(__int64 a1)
{
  __int64 v2; // rcx

  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return wil::com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>::~com_ptr_t<CLauncherTipContextMenu,wil::err_exception_policy>(a1 + 8);
}
