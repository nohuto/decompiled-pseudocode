/*
 * XREFs of ?FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x180551920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x18017928C (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180190C7C (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___ @ 0x18054F3C4 (wil--details--ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___--_ScopeExitFn__lambda_3d7c.c)
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18054FF7C (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 *     ?Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3@W4GestureEndState@3@@Z @ 0x180555EB4 (-Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureHandler::FinishTouchSwipe(
        VirtualDesktopGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  unsigned int v4; // ebx
  char *v5; // rbx
  int v6; // eax
  int v8[2]; // [rsp+20h] [rbp-68h] BYREF
  char v9; // [rsp+28h] [rbp-60h]
  _BYTE v10[80]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( *((_QWORD *)this + 9) )
  {
    v5 = (char *)this - 8;
    *(_QWORD *)v8 = (char *)this - 8;
    v9 = 1;
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (VirtualDesktopGestureHandler *)((char *)this + 80),
      (wil::ActivityThreadWatcher *)v10);
    *((_BYTE *)this + 400) = 0;
    v6 = VirtualDesktopGestureContext::Commit(
           *((VirtualDesktopGestureContext **)this + 9),
           (struct IVirtualDesktopGestureHandlerPrivate *)(((unsigned __int64)this + 8) & -(__int64)(v5 != 0LL)),
           (int)*((float *)a2 + 4),
           *((_BYTE *)a2 + 25));
    v4 = v6;
    if ( v6 >= 0 )
    {
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::Stop((char *)this + 80, 1LL, 0LL);
      v9 = 0;
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x679,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v6);
    }
    wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v10);
    wil::details::ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___::_ScopeExitFn__lambda_3d7c6052776e449ee79b0dcdf0826247___(v8);
  }
  else
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x671,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
  }
  return v4;
}
