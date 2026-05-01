/*
 * XREFs of ?CancelSwipe@VirtualDesktopGestureHandler@@UEAAJXZ @ 0x18054FDE0
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

__int64 __fastcall VirtualDesktopGestureHandler::CancelSwipe(VirtualDesktopGestureHandler *this)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  _BYTE v5[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v6[24]; // [rsp+40h] [rbp-38h] BYREF
  int v7; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (VirtualDesktopGestureHandler *)((char *)this + 88),
    (wil::ActivityThreadWatcher *)v5);
  if ( !*((_QWORD *)this + 5) )
  {
    v2 = 1602LL;
LABEL_5:
    v3 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v2,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 10) )
  {
    v2 = 1603LL;
    goto LABEL_5;
  }
  VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)((char *)this + 16), 0);
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::Stop((char *)this + 88, 0LL, 1LL);
  v3 = 0;
LABEL_7:
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v5);
  return v3;
}
