/*
 * XREFs of ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x1804974D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x180230BFA (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z @ 0x180230CBC (-GetTimestampForPointerInput@MultitaskingViewGestureHandler@@AEBA_KI@Z.c)
 *     ??$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z @ 0x18049563C (--$SwipeGestureState@II_N@MultitaskingViewTelemetry@@SAX$$QEAI0$$QEA_N@Z.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_AppThumbnailTest@@@0@XZ @ 0x180495A34 (--$start_and_watch_errors@V-$tip_test@U_tip_AppThumbnailTest@@@tip@@@tip@@YA-AV-$test_watcher@U_.c)
 *     ?AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z @ 0x180496420 (-AnimationComplete@MultitaskingViewGestureHandler@@AEAAXW4AnimationType@CAppThumbnailWindow@@@Z.c)
 *     ?CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x180496874 (-CreateAppThumbnailWindows@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureDirection@1@HH@Z @ 0x180496C3C (-DetermineGestureDirection@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureDirection@1@HH@Z.c)
 *     ?DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA?AW4GestureAction@1@W4GestureDirection@1@_NW4MULTITASKING_VIEW_TYPES@@@Z @ 0x180496C80 (-DetermineTouchGestureAction@MultitaskingViewGestureHandlerHelpers@@YA-AW4GestureAction@1@W4Gest.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x180497088 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ?UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z @ 0x1804977D4 (-UpdateDeviceDimensions@MultitaskingViewGestureHandler@@AEAAJI@Z.c)
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18049D2DC (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MultitaskingViewGestureHandler::StartTouchSwipe(
        MultitaskingViewGestureHandler *this,
        unsigned int a2,
        const struct TouchSwipeArgs *a3)
{
  const char *v6; // r9
  int updated; // esi
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  char v13; // r11
  bool v14; // dl
  int v15; // ebx
  __int64 v16; // rdx
  int AppThumbnailWindows; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  CAppThumbnailWindow **v20; // r14
  CAppThumbnailWindow **v21; // r12
  int v22; // [rsp+20h] [rbp-60h] BYREF
  char *v23; // [rsp+28h] [rbp-58h]
  char v24; // [rsp+30h] [rbp-50h]
  _BYTE v25[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v26[24]; // [rsp+48h] [rbp-38h] BYREF
  int v27; // [rsp+60h] [rbp-20h]
  std::_Ref_count_base *v28; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v30; // [rsp+C0h] [rbp+40h] BYREF
  float v31; // [rsp+C8h] [rbp+48h] BYREF

  if ( ((*(_DWORD *)a3 - 1) & 0xFFFFFFFC) != 0 || *(_DWORD *)a3 == 3 )
  {
    v15 = -2147024809;
    v16 = 143LL;
    goto LABEL_42;
  }
  *((_DWORD *)this + 48) = a2;
  if ( !(unsigned int)GetPointerType(a2, (char *)this + 204) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x97,
             (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
             v6);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), 1LL);
  *((_QWORD *)this + 20) = MultitaskingViewGestureHandler::GetTimestampForPointerInput(
                             (MultitaskingViewGestureHandler *)((char *)this - 16),
                             a2);
  updated = MultitaskingViewGestureHandler::UpdateDeviceDimensions(
              (MultitaskingViewGestureHandler *)((char *)this - 16),
              a2);
  if ( updated < 0 )
  {
    v9 = 155LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v10 = (int)*((float *)a3 + 3);
  LODWORD(v30) = (int)*((float *)a3 + 2);
  HIDWORD(v30) = v10;
  *((_QWORD *)this + 14) = v30;
  LOBYTE(v30) = 0;
  HIDWORD(v30) = 0;
  updated = MultitaskingViewGestureHandler::GetMultitaskingViewState(
              (MultitaskingViewGestureHandler *)((char *)this - 16),
              (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v30);
  if ( updated < 0 )
  {
    v9 = 159LL;
    goto LABEL_7;
  }
  v11 = MultitaskingViewGestureHandlerHelpers::DetermineGestureDirection(*((_DWORD *)this + 28), *((_DWORD *)this + 29));
  v12 = MultitaskingViewGestureHandlerHelpers::DetermineTouchGestureAction(v11, v30, SBYTE4(v30));
  v14 = *((_BYTE *)a3 + 24) && (v12 == 8 || v12 == 1 && *((_DWORD *)a3 + 1) == 3);
  *((_BYTE *)this + 196) = v14;
  *((_DWORD *)this + 50) = v14 ? v12 : 0;
  if ( *(_DWORD *)a3 == 1 || v14 )
  {
    if ( *((_QWORD *)this + 10) == *((_QWORD *)this + 11) && !v13 && (v30 & 0x100000000LL) == 0 )
    {
      tip::start_and_watch_errors<tip::tip_test<_tip_AppThumbnailTest>>((__int64)v25);
      v23 = (char *)this - 16;
      v24 = 1;
      AppThumbnailWindows = MultitaskingViewGestureHandler::CreateAppThumbnailWindows((MultitaskingViewGestureHandler *)((char *)this - 16));
      updated = AppThumbnailWindows;
      if ( AppThumbnailWindows < 0 )
      {
        v18 = (unsigned int)AppThumbnailWindows;
        v19 = 178LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)v18);
        MultitaskingViewGestureHandler::AnimationComplete((__int64)this - 16, 0);
        if ( v28 )
          std::_Ref_count_base::_Decref(v28);
        if ( v27 )
          wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v26);
        return (unsigned int)updated;
      }
      v20 = (CAppThumbnailWindow **)*((_QWORD *)this + 10);
      v21 = (CAppThumbnailWindow **)*((_QWORD *)this + 11);
      while ( v20 != v21 )
      {
        updated = CAppThumbnailWindow::Open(*v20);
        if ( (int)(updated + 0x80000000) >= 0 && updated != -2147467260 )
        {
          v18 = (unsigned int)updated;
          v19 = 192LL;
          goto LABEL_37;
        }
        v20 += 2;
      }
      if ( v28 )
        std::_Ref_count_base::_Decref(v28);
      if ( v27 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v26);
    }
    goto LABEL_35;
  }
  v15 = MultitaskingViewGestureHandler::ProcessTouchGestureInput((__int64)this - 16, 1);
  if ( v15 >= 0 )
  {
LABEL_35:
    LOBYTE(v30) = *((_QWORD *)this + 10) != *((_QWORD *)this + 11);
    v31 = *(float *)a3;
    v22 = 1;
    MultitaskingViewTelemetry::SwipeGestureState<unsigned int,unsigned int,bool>(&v22, (int *)&v31, (char *)&v30);
    return 0LL;
  }
  v16 = 200LL;
LABEL_42:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
