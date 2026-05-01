/*
 * XREFs of ??0hresult_illegal_state_change@winrt@@QEAA@XZ @ 0x18078B1BC
 * Callers:
 *     ?GetTargetRegion@SnapAssistState@@QEAA?AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@XZ @ 0x18078B42C (-GetTargetRegion@SnapAssistState@@QEAA-AUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@.c)
 *     ?InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@PE$AAVSwitchItemListViewModelArgs@3456@@Z @ 0x18078B474 (-InitializeViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Compos.c)
 *     ?UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBUISwitchItemDataSource@Multitasking@5Internal@Windows@winrt@@@Z @ 0x18078BE88 (-UpdateViewModel@SnapAssistState@@QEAAXPE$AAVSnapAssistViewModel@Switcher@Experiences@Composable.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803E2DC4 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

winrt::hresult_illegal_state_change *__fastcall winrt::hresult_illegal_state_change::hresult_illegal_state_change(
        winrt::hresult_illegal_state_change *this)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_illegal_state_change);
  return this;
}
