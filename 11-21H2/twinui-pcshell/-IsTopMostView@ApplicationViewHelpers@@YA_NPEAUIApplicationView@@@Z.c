/*
 * XREFs of ?IsTopMostView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1805EFBD4
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x1805951F0 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z @ 0x180599D64 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180082930 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 */

char __fastcall ApplicationViewHelpers::IsTopMostView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationView *a2)
{
  char v2; // bl
  HWND WindowForView; // rax

  v2 = 0;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(this, a2);
  if ( WindowForView )
    return (GetWindowLongPtrW(WindowForView, -20) & 8) != 0;
  return v2;
}
