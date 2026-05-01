/*
 * XREFs of ?SettingChanged@?$consume_SystemSettings_DataModel_ISettingItem@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x1801842E0
 * Callers:
 *     ?UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Windows@winrt@@Uevent_token@5@@Z @ 0x180184190 (-UnsubscribeFromDaSettingChanged@DashboardTaskbarSettings@@YAXAEBUIInspectable@Foundation@Window.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::impl::consume_SystemSettings_DataModel_ISettingItem<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>::SettingChanged(
        void (__fastcall ****a1)(_QWORD, void *, _QWORD *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, void *, _QWORD *); // rcx
  void (__fastcall ***v4)(_QWORD, void *, _QWORD *); // rbx
  void (__fastcall **v5)(_QWORD, void *, _QWORD *); // rax
  void (__fastcall ***v6)(_QWORD, void *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v6 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::SystemSettings::DataModel::ISettingItem>, &v6);
    v2 = v6;
    v4 = v6;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *v2;
  v6 = v2;
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *), _QWORD))v5[19])(v2, *a2);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
}
