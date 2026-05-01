/*
 * XREFs of ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x1805538B4
 * Callers:
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180555C20 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     ?StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x180555D80 (-StartTouchSwipe@VirtualDesktopGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@PEAUIImmersiveMonitorManager@@@wil@@YA?AV?$unique_ptr@VVirtualDesktopGestureContext@@U?$default_delete@VVirtualDesktopGestureContext@@@wistd@@@wistd@@AEAUtagSIZE@@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@$$QEAPEAUIImmersiveMonitorManager@@@Z @ 0x18054E980 (--$make_unique_nothrow@VVirtualDesktopGestureContext@@AEAUtagSIZE@@PEAUIVirtualDesktopManagerInt.c)
 *     ??1VirtualDesktopGestureContext@@QEAA@XZ @ 0x18054F540 (--1VirtualDesktopGestureContext@@QEAA@XZ.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18054FF20 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 *     ?DismissContextMenuIfPresent@VirtualDesktopGestureHandler@@AEAAXXZ @ 0x1805517B0 (-DismissContextMenuIfPresent@VirtualDesktopGestureHandler@@AEAAXXZ.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z @ 0x180552180 (-Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::InitializeContext(VirtualDesktopGestureHandler *this, unsigned int a2)
{
  VirtualDesktopGestureHandler *v5; // rcx
  const char *v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  HMONITOR v9; // rdx
  __int64 v10; // r9
  VirtualDesktopGestureContext *v11; // rbx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  VirtualDesktopGestureContext *v16; // rax
  VirtualDesktopGestureContext *v17; // rdi
  struct IImmersiveMonitorManager *v18; // [rsp+40h] [rbp-C0h] BYREF
  struct IImmersiveSettingsCache *v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct ISwitchThumbnailDeviceManager *v21; // [rsp+58h] [rbp-A8h] BYREF
  struct IVirtualDesktopManagerInternal *v22; // [rsp+60h] [rbp-A0h] BYREF
  struct IImmersiveMonitorManager *v23; // [rsp+68h] [rbp-98h] BYREF
  VirtualDesktopGestureContext *v24; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v25[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v28; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  if ( !*((_QWORD *)this + 5) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A1,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
  VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 16), 0);
  VirtualDesktopGestureHandler::DismissContextMenuIfPresent(v5);
  if ( !(unsigned int)GetPointerInfo(a2, v25) )
  {
    v7 = 1704LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
             v6);
  }
  v28 = 0LL;
  v27 = 0LL;
  if ( !(unsigned int)GetPointerDeviceRects(v26, &v27, &v28) )
  {
    v7 = 1710LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
             v6);
  }
  LODWORD(v18) = DWORD2(v27) - v27;
  HIDWORD(v18) = HIDWORD(v27) - DWORD1(v27);
  v23 = v18;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    v8,
    (__int64)v6);
  v18 = (struct IImmersiveMonitorManager *)*((_QWORD *)this + 8);
  v19 = (struct IImmersiveSettingsCache *)*((_QWORD *)this + 7);
  *(_QWORD *)v20 = *((_QWORD *)this + 6);
  v21 = (struct ISwitchThumbnailDeviceManager *)*((_QWORD *)this + 5);
  v22 = (struct IVirtualDesktopManagerInternal *)*((_QWORD *)this + 4);
  wil::make_unique_nothrow<VirtualDesktopGestureContext,tagSIZE &,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,IImmersiveMonitorManager *>(
    &v24,
    (struct tagSIZE *)&v23,
    &v22,
    &v21,
    (struct IApplicationViewCollection **)v20,
    &v19,
    &v18);
  v11 = v24;
  if ( v24 )
  {
    v15 = VirtualDesktopGestureContext::Initialize(v24, v9, v25[0], v10);
    v12 = v15;
    if ( v15 >= 0 )
    {
      *((_DWORD *)v11 + 47) = a2;
      v16 = v11;
      v11 = 0LL;
      v17 = (VirtualDesktopGestureContext *)*((_QWORD *)this + 10);
      *((_QWORD *)this + 10) = v16;
      if ( v17 )
      {
        VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v17);
        operator delete(v17);
      }
      v12 = 0;
      goto LABEL_16;
    }
    v13 = (unsigned int)v15;
    v14 = 1721LL;
  }
  else
  {
    v12 = -2147024882;
    v13 = 2147942414LL;
    v14 = 1720LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v13);
LABEL_16:
  if ( v11 )
  {
    VirtualDesktopGestureContext::~VirtualDesktopGestureContext(v11);
    operator delete(v11);
  }
  return v12;
}
