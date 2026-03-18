/*
 * XREFs of NtUserGetClipCursor @ 0x1C0144510
 * Callers:
 *     <none>
 * Callees:
 *     GuessMonitorOverrideForCoordinateConversions @ 0x1C000B2B0 (GuessMonitorOverrideForCoordinateConversions.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ApiSetCheckCursorClipAccess @ 0x1C005E358 (ApiSetCheckCursorClipAccess.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     PhysicalToLogicalDPIRect @ 0x1C009AB80 (PhysicalToLogicalDPIRect.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x1C01DC070 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 */

__int64 __fastcall NtUserGetClipCursor(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE *v10; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-28h] BYREF

  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal((__int64)a1, a2, a3, a4);
  v5 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v10 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[15] = v10[15];
    CCursorClip::GetClip((CCursorClip *)WPP_MAIN_CB.Reserved, &v15);
    LODWORD(v13) = (v15.left + v15.right) / 2;
    HIDWORD(v13) = (v15.top + v15.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    v14 = GuessMonitorOverrideForCoordinateConversions(v13, CurrentThreadDpiAwarenessContext, 1);
    PhysicalToLogicalDPIRect(a1, (__m128i *)&v15, CurrentThreadDpiAwarenessContext, &v14);
    v5 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
