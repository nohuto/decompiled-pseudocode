/*
 * XREFs of ?GetMonitorDisplayInfo@TouchEdgeGripperWindow@@AEAAJPEAUIImmersiveMonitor@@PEAUCRect@Geometry@@PEAI2@Z @ 0x18065B378
 * Callers:
 *     ??0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV?$function@$$A6AXIAEBUPoint@Foundation@Windows@winrt@@@Z@std@@@Z @ 0x180658C9C (--0TouchEdgeGripperWindow@@QEAA@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_NAEBV-$function@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchEdgeGripperWindow::GetMonitorDisplayInfo(
        TouchEdgeGripperWindow *this,
        struct IImmersiveMonitor *a2,
        struct Geometry::CRect *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  char v7; // di
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = 1;
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct Geometry::CRect *))(*(_QWORD *)a2 + 72LL))(a2, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 481LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchedgegripperwindow.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_7;
  }
  v8 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 112LL))(
         a2,
         a4,
         a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 482LL;
    goto LABEL_5;
  }
  v9 = 0;
  v7 = 0;
LABEL_7:
  if ( v7 )
    MicrosoftTelemetryAssertTriggeredNoArgs(v12, v11);
  return v9;
}
