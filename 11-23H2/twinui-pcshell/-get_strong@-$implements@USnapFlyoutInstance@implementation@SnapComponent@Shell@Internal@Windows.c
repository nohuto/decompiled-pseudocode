/*
 * XREFs of ?get_strong@?$implements@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@U134567@UIControlWindow@34567@@winrt@@QEAA?AU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@2@XZ @ 0x1802E9980
 * Callers:
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x18021F780 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1 @ 0x18021FA90 (TouchEdgeGripperHost--NotifyGripperDismissedIfNecessaryAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x18021FD70 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 *     TouchEdgeGripperHost::ShowGripperAsync$_ResumeCoro$1 @ 0x180220060 (TouchEdgeGripperHost--ShowGripperAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x1802270C0 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x180227DC0 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x180228170 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::ShowFlyoutAsync$_ResumeCoro$1 @ 0x18022D0F0 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022D0F0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::implements<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance,winrt::Windows::Internal::Shell::SnapComponent::IControlWindow>::get_strong(
        __int64 a1,
        _QWORD *a2)
{
  signed __int64 v2; // r8
  bool v3; // zf
  signed __int64 v4; // rax

  *a2 = 0LL;
  if ( a1 )
  {
    *a2 = a1;
    v2 = *(_QWORD *)(a1 + 8);
    while ( v2 >= 0 )
    {
      v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v2 + 1, v2);
      v3 = v2 == v4;
      v2 = v4;
      if ( v3 )
        return a2;
    }
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v2 + 24), 1u);
  }
  return a2;
}
