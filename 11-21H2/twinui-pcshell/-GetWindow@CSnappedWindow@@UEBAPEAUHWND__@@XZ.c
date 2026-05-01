/*
 * XREFs of ?GetWindow@CSnappedWindow@@UEBAPEAUHWND__@@XZ @ 0x1805AB560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSnappedWindow::GetWindow(
        __int64 (__fastcall ****this)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationView *a2)
{
  return ApplicationViewHelpers::GetWindowForView(this[4], a2);
}
