/*
 * XREFs of ?GetCurrentImmersiveMonitor@TouchGestureHelper@@SA?AU?$com_ptr@UIImmersiveMonitor@@@winrt@@PEAUIImmersiveMonitorManager@@AEBUPoint@Foundation@Windows@3@@Z @ 0x180650644
 * Callers:
 *     ?ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU?$com_ptr@UIServiceProvider@@@winrt@@@Z @ 0x180651874 (-ReportTouchSwipePerformed_@TouchGestureTelemetry@@QEAAXIIMM_NU-$com_ptr@UIServiceProvider@@@win.c)
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x180654770 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180655074 (-IsBottomGesture@TouchEdgeGestureProcessor@@AEBA_NAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TouchGestureHelper::GetCurrentImmersiveMonitor(_QWORD *a1, __int64 a2, float *a3)
{
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+5Ch] [rbp+14h]

  *a1 = 0LL;
  v8 = (int)*a3;
  v9 = (int)a3[1];
  v6 = (int)a1;
  v4 = (*(__int64 (__fastcall **)(__int64, int *, GUID *, GUID *))(*(_QWORD *)a2 + 96LL))(
         a2,
         &v8,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
         &GUID_880b26f8_9197_43d0_8045_8702d0d72000);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB,
      (int)"pcshell\\twinui\\touchgestures\\lib\\touchgesturehelper.h",
      (const char *)(unsigned int)v4,
      v6);
  return a1;
}
