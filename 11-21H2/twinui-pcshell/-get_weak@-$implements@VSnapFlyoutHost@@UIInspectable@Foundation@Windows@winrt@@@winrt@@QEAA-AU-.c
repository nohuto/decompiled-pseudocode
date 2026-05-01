/*
 * XREFs of ?get_weak@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1805B2014
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1801BEFD0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::InternalHideAsync$_ResumeCoro$1 @ 0x1801C06A0 (SnapFlyoutHost--InternalHideAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$get_weak@VSnapFlyoutHost@@@?$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VSnapFlyoutHost@@@2@XZ @ 0x1803411C8 (--$get_weak@VSnapFlyoutHost@@@-$root_implements@VSnapFlyoutHost@@UIInspectable@Foundation@Window.c)
 */

_QWORD *__fastcall winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  winrt::impl::root_implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_weak<SnapFlyoutHost>(
    a1,
    a2);
  return a2;
}
