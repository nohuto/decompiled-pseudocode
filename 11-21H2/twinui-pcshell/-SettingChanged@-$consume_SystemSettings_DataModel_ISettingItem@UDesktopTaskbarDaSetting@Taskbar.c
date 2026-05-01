/*
 * XREFs of ?SettingChanged@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@3@@Z @ 0x1801D09B0
 * Callers:
 *     ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x1801D0AD4 (-SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA-AU-$pair@UIInspectable@Foundation@Wind.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::SettingChanged(
        void (__fastcall ****a1)(_QWORD, void *, __int64 *),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, void *, __int64 *); // r9
  unsigned int v8; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  *a2 = 0LL;
  v7 = *a1;
  if ( *a1 )
  {
    v10 = 0LL;
    (**v7)(v7, &winrt::impl::guid_v<winrt::SystemSettings::DataModel::ISettingItem>, &v10);
    v6 = v10;
  }
  v11 = v6;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v6 + 144LL))(v6, *a3, a2);
  winrt::check_hresult(v8);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v11);
  return a2;
}
