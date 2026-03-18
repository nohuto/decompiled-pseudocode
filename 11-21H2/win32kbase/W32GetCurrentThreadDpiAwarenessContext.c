/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80
 * Callers:
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     NtUserGetDpiForMonitor @ 0x1C002FE40 (NtUserGetDpiForMonitor.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0063D18 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C006D5A0 (TransformRectBetweenCoordinateSpaces.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C006D990 (TransformPointBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C006DA50 (PhysicalToLogicalDPIPoint.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C006DBB0 (LogicalToPhysicalDPIPoint.c)
 *     LogicalToPhysicalDPIRect @ 0x1C006DD10 (LogicalToPhysicalDPIRect.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C006DE50 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     PhysicalToLogicalDPIRect @ 0x1C006E120 (PhysicalToLogicalDPIRect.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     GetMonitorRect @ 0x1C006ECBC (GetMonitorRect.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C006EDE4 (GetCurrentThreadCompositedDpi.c)
 *     NtUserLockCursor @ 0x1C00AD6F0 (NtUserLockCursor.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00B2384 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00B7A60 (NtUserGetProcessDpiAwarenessContext.c)
 *     NtUserClipCursor @ 0x1C00CF260 (NtUserClipCursor.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00D3AB0 (UserIsCurrentThreadGdiScaled.c)
 *     NtUserGetClipCursor @ 0x1C0159140 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C016F200 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C016F2B0 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C016F2F4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C002EB00 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  _QWORD *ThreadWin32Thread; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 18LL;
  v5 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return 18LL;
  if ( *(_QWORD *)(v5 + 360) )
    CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
  result = *(unsigned int *)(v5 + 340);
  if ( !(_DWORD)result )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2, v1, v3, v4);
    if ( CurrentProcessWin32Process )
      return *(unsigned int *)(CurrentProcessWin32Process + 280);
    return 18LL;
  }
  return result;
}
