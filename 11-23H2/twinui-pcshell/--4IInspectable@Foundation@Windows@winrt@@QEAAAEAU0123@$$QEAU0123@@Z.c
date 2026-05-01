/*
 * XREFs of ??4IInspectable@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1803918A4
 * Callers:
 *     ?unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180184100 (-unsubscribe_from_services@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPE.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Foundation::IInspectable::operator=(
        winrt::Windows::Foundation::IUnknown *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown::operator=(a1, a2);
  return a1;
}
