/*
 * XREFs of ?OnTaskbarSettingChanged@?$consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6@UDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBAXAEBW4TaskbarSettingChangedEvent@Dashboard@Shell@UI@WindowsUdk@3@@Z @ 0x1801C9564
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6e64461b6651328ea871cea77f237b57__void_winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension_::_Do_call @ 0x1801CE860 (std--_Func_impl_no_alloc__lambda_6e64461b6651328ea871cea77f237b57__void_winrt--Wind_ea_1801CE860.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::consume_WindowsUdk_UI_Shell_Dashboard_IDashboardExtension6<winrt::WindowsUdk::UI::Shell::Dashboard::DashboardExtension>::OnTaskbarSettingChanged(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        unsigned int *a2)
{
  void (__fastcall ***v3)(_QWORD, void *, __int64 *); // r9
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *a1;
  v4 = 0LL;
  if ( v3 )
  {
    v6 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::Dashboard::IDashboardExtension6>, &v6);
    v4 = v6;
  }
  v7 = v4;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 48LL))(v4, *a2);
  winrt::check_hresult(v5);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v7);
}
