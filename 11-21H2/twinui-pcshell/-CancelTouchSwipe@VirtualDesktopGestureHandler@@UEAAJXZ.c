/*
 * XREFs of ?CancelTouchSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18054FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x1801414A0 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18054FF20 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 *     ?Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3@W4GestureEndState@3@@Z @ 0x180555EB4 (-Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3.c)
 */

__int64 __fastcall VirtualDesktopGestureHandler::CancelTouchSwipe(VirtualDesktopGestureHandler *this)
{
  _BYTE v3[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v4[24]; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( *((_QWORD *)this + 9) )
  {
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
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
      (void *)0x685,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
