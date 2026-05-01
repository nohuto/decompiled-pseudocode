/*
 * XREFs of ?Disconnect@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x180368518
 * Callers:
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x180367C04 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x1803682D4 (-BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z @ 0x180369020 (-ObservedMouseButtonUp@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@UEAAJUt.c)
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x18036A5A8 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180393288 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ @ 0x1803938EC (-BlockImmediateReshow@DebounceDetection@CBaseTrayFlyoutExperienceManager@@QEAAXXZ.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x180397220 (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Disconnect(
        CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *this)
{
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_DWORD *)this + 14) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
    *((_DWORD *)this + 14) = 0;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 6);
}
