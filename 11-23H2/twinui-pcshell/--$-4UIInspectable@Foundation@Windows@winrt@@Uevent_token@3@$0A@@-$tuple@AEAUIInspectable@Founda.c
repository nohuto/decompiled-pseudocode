/*
 * XREFs of ??$?4UIInspectable@Foundation@Windows@winrt@@Uevent_token@3@$0A@@?$tuple@AEAUIInspectable@Foundation@Windows@winrt@@AEAUevent_token@4@@std@@QEAAAEAV01@$$QEAU?$pair@UIInspectable@Foundation@Windows@winrt@@Uevent_token@4@@1@@Z @ 0x180184480
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180184370 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

__int64 __fastcall std::tuple<winrt::Windows::Foundation::IInspectable &,winrt::event_token &>::operator=<winrt::Windows::Foundation::IInspectable,winrt::event_token,0>(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown::operator=(*(winrt::Windows::Foundation::IUnknown **)(a1 + 8), a2);
  **(_QWORD **)a1 = *((_QWORD *)a2 + 1);
  return a1;
}
