/*
 * XREFs of ?_GetMonitorFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F02A4
 * Callers:
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800F0130 (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F0580 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z @ 0x1804FD2BC (-_MoveRectToMonitor@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@UtagRECT@@PEAU3@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F1520 (-_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::_GetMonitorFromRect(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct IImmersiveMonitor **a3)
{
  int MonitorFromPoint; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v7; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  v7 = 0LL;
  if ( a2 )
    v7 = *(struct tagPOINT *)&a2->left;
  MonitorFromPoint = CDesktopPositioner::_GetMonitorFromPoint(this, &v7, a3);
  v4 = MonitorFromPoint;
  if ( MonitorFromPoint < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E3,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)MonitorFromPoint);
  return v4;
}
