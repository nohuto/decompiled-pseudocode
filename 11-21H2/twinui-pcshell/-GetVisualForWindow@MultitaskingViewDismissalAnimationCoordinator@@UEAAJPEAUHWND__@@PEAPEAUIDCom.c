/*
 * XREFs of ?GetVisualForWindow@MultitaskingViewDismissalAnimationCoordinator@@UEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804B3AF0
 * Callers:
 *     ?GetVisualForWindow@MultitaskingViewDismissalAnimationCoordinator@@WKI@EAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x180208670 (-GetVisualForWindow@MultitaskingViewDismissalAnimationCoordinator@@WKI@EAAJPEAUHWND__@@PEAPEAUID.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MultitaskingViewDismissalAnimationCoordinator::GetVisualForWindow(
        MultitaskingViewDismissalAnimationCoordinator *this,
        HWND a2,
        struct IDCompThumbnail **a3)
{
  return MultitaskingViewAnimationCoordinatorBase::GetVisualForWindow(this, a2, a3);
}
