/*
 * XREFs of ?FinishTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18060D3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1801D8F2C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 *     ?Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z @ 0x18060B700 (-Cleanup@VirtualDesktopGestureHandler@@UEAAXI@Z.c)
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18060B7D4 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 *     ?Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3@W4GestureEndState@3@@Z @ 0x180612074 (-Stop@VirtualDesktopGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXW4GestureType@3.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopGestureHandler::FinishTouchSwipe(
        VirtualDesktopGestureHandler *this,
        const struct TouchSwipeArgs *a2)
{
  char *v5; // rbp
  char v6; // bl
  char *v7; // r14
  int v8; // eax
  unsigned int v9; // edi
  char v10; // si
  _BYTE v11[32]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  if ( *((_QWORD *)this + 9) )
  {
    v5 = (char *)this - 8;
    v6 = 1;
    v7 = (char *)this + 80;
    wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
      (VirtualDesktopGestureHandler *)((char *)this + 80),
      (wil::ActivityThreadWatcher *)v11);
    *((_BYTE *)this + 400) = 0;
    v8 = VirtualDesktopGestureContext::Commit(
           *((VirtualDesktopGestureContext **)this + 9),
           (struct IVirtualDesktopGestureHandlerPrivate *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64)),
           (int)*((float *)a2 + 4),
           *((_BYTE *)a2 + 25));
    v9 = v8;
    if ( v8 >= 0 )
    {
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopGestureActivity::Stop(v7, 1LL, 0LL);
      v9 = 0;
      v6 = 0;
      v10 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C8,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v8);
      v10 = 1;
    }
    if ( v13 )
    {
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
      v6 = v10;
    }
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v11);
    if ( v6 )
      VirtualDesktopGestureHandler::Cleanup((VirtualDesktopGestureHandler *)(v5 + 16), 0);
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6C0,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
