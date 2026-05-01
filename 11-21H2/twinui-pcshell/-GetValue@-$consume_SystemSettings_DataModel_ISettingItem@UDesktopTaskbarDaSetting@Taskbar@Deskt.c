/*
 * XREFs of ?GetValue@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA?AUIInspectable@Foundation@Windows@3@AEBUhstring@param@3@@Z @ 0x1801D0900
 * Callers:
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D06E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 *     ?GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1801D07C4 (-GetTaskbarBadgingEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::GetValue(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD **),
        _QWORD *a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, void *, _QWORD **); // r9
  _QWORD *v6; // rcx
  unsigned int v7; // eax
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp+10h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = a2;
  v5 = *a1;
  v6 = 0LL;
  v11 = 0LL;
  if ( v5 )
  {
    v10 = 0LL;
    (**v5)(v5, &winrt::impl::guid_v<winrt::SystemSettings::DataModel::ISettingItem>, &v10);
    v6 = v10;
  }
  v9 = v6;
  v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64 *))(*v6 + 104LL))(v6, *a3, &v11);
  winrt::check_hresult(v7);
  winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v9);
  *a2 = v11;
  return a2;
}
