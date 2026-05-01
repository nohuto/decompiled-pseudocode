/*
 * XREFs of ?CancelTouchSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18060B650
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801D8F2C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18060B700 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 *     ?Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3@W4GestureEndState@3@@Z @ 0x180612074 (-Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureHandler::CancelTouchSwipe(VirtualDesktopGestureHandler *this)
{
  _BYTE v3[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v4[24]; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_QWORD *)this + 9) )
  {
    wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (VirtualDesktopGestureHandler *)((char *)this + 80),
      (wil::ActivityThreadWatcher *)v3);
    *((_BYTE *)this + 400) = 0;
    VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 8), 0);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::Stop((char *)this + 80, 1LL, 1LL);
    if ( v5 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v4);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
