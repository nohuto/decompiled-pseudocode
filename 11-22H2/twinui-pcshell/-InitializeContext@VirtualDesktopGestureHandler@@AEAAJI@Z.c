/*
 * XREFs of ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18060F670
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180611DF0 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180611F40 (-StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@wil@@YA?AV?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@AEAUtagSIZE@@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18060A270 (--$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInt.c)
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18060ACF0 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18060B700 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 *     ?DismissContextMenuIfPresent@VirtualDesktopGestureHandler@@AEAAXXZ @ 0x18060D258 (-DismissContextMenuIfPresent@VirtualDesktopGestureHandler@@AEAAXXZ.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x18060E180 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::InitializeContext(VirtualDesktopGestureHandler *this, unsigned int a2)
{
  VirtualDesktopGestureHandler *v5; // rcx
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  VirtualDesktopGestureContext *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  VirtualDesktopGestureContext *v15; // rax
  VirtualDesktopGestureContext *v16; // rdi
  struct IImmersiveMonitorManager *v17; // [rsp+40h] [rbp-C0h] BYREF
  struct IImmersiveSettingsCache *v18; // [rsp+48h] [rbp-B8h] BYREF
  int v19[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct ISwitchThumbnailDeviceManager *v20; // [rsp+58h] [rbp-A8h] BYREF
  struct IVirtualDesktopManagerInternal *v21; // [rsp+60h] [rbp-A0h] BYREF
  struct IImmersiveMonitorManager *v22; // [rsp+68h] [rbp-98h] BYREF
  VirtualDesktopGestureContext *v23; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v24[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v27; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  if ( !*((_QWORD *)this + 5) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 16), 0);
  VirtualDesktopGestureHandler::DismissContextMenuIfPresent(v5);
  if ( !(unsigned int)GetPointerInfo(a2, v24) )
  {
    v7 = 1787LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
             v6);
  }
  v27 = 0LL;
  v26 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v25, &v26, &v27) )
  {
    v7 = 1793LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
             v6);
  }
  LODWORD(v17) = DWORD2(v26) - v26;
  HIDWORD(v17) = HIDWORD(v26) - DWORD1(v26);
  v22 = v17;
  v17 = (struct IImmersiveMonitorManager *)*((_QWORD *)this + 8);
  v18 = (struct IImmersiveSettingsCache *)*((_QWORD *)this + 7);
  *(_QWORD *)v19 = *((_QWORD *)this + 6);
  v20 = (struct ISwitchThumbnailDeviceManager *)*((_QWORD *)this + 5);
  v21 = (struct IVirtualDesktopManagerInternal *)*((_QWORD *)this + 4);
  wil::make_unique_nothrow<VirtualDesktopGestureContext,tagSIZE &,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,IImmersiveMonitorManager *>(
    &v23,
    (struct tagSIZE *)&v22,
    &v21,
    &v20,
    (struct IApplicationViewCollection **)v19,
    &v18,
    &v17);
  v10 = v23;
  if ( v23 )
  {
    v14 = VirtualDesktopGestureContext::Initialize(v23, v24[0], v8, v9);
    v11 = v14;
    if ( v14 >= 0 )
    {
      *((_DWORD *)v10 + 45) = a2;
      v15 = v10;
      v10 = 0LL;
      v16 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = v15;
      if ( v16 )
      {
        VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v16);
        operator delete(v16);
      }
      v11 = 0;
      goto LABEL_16;
    }
    v12 = (unsigned int)v14;
    v13 = 1798LL;
  }
  else
  {
    v11 = -2147024882;
    v12 = 2147942414LL;
    v13 = 1797LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v12);
LABEL_16:
  if ( v10 )
  {
    VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v10);
    operator delete(v10);
  }
  return v11;
}
