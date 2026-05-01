/*
 * XREFs of _SnapFlyoutHost::HideAsync$_ResumeCoro$1_::_1_::dtor$3 @ 0x18022743B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA@XZ @ 0x180679D74 (--1-$list@U-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@win.c)
 */

__int64 __fastcall SnapFlyoutHost::HideAsync__ResumeCoro_1_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 112) = *(_QWORD *)(a2 + 208) + 72LL;
  return std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::~list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>(*(_QWORD *)(a2 + 112));
}
