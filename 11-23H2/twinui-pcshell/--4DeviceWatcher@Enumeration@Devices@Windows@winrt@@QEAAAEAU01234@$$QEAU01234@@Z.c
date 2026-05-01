/*
 * XREFs of ??4DeviceWatcher@Enumeration@Devices@Windows@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1803F9ED0
 * Callers:
 *     ?unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1806FCD80 (-unsubscribe_from_services@DiscoverabilityManager@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Devices::Enumeration::DeviceWatcher::operator=(
        winrt::Windows::Foundation::IUnknown *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown::operator=(a1, a2);
  return a1;
}
