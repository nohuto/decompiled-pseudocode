/*
 * XREFs of ??4DispatcherQueue@System@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1805AEE68
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800F4B7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::System::DispatcherQueue::operator=(
        winrt::Windows::Foundation::IUnknown *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  winrt::Windows::Foundation::IUnknown::operator=(a1, a2);
  return a1;
}
