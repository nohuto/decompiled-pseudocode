/*
 * XREFs of ??$ActivateInstance@UDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUDesktopTaskbarDaSetting@Taskbar@Desktop@SystemSettings@3@XZ @ 0x180184238
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_6642fb088f192eae1a0f474d97eaf06a_@@CA@AEBUIActivationFactory@Foundation@Windows@winrt@@@Z @ 0x180184210 (-_lambda_invoker_cdecl_@_lambda_6642fb088f192eae1a0f474d97eaf06a_@@CA@AEBUIActivationFactory@Fou.c)
 *     ?SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA?AU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@std@@AEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@Uhstring@4@@Foundation@Windows@winrt@@@Z @ 0x18018452C (-SubscribeToDaSettingChanged@DashboardTaskbarSettings@@YA-AU-$pair@UIInspectable@Foundation@Wind.c)
 *     ?GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ @ 0x1806994E4 (-GetDashboardButtonEnabled@DashboardTaskbarSettings@@YA_NXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::SystemSettings::Desktop::Taskbar::DesktopTaskbarDaSetting>(
        _QWORD *a1,
        _QWORD *a2)
{
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, void *, _QWORD *); // rax
  void (__fastcall ***v6)(_QWORD, void *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, void (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a1 + 48LL))(
         *a1,
         &v6);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  v4 = v6;
  if ( v6 )
  {
    v7 = 0LL;
    (**v6)(v6, &winrt::impl::guid_v<winrt::SystemSettings::Desktop::Taskbar::IDesktopTaskbarDaSetting>, &v7);
    *a2 = v7;
    v4 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return a2;
}
