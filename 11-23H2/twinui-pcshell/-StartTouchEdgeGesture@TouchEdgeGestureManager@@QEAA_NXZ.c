/*
 * XREFs of ?StartTouchEdgeGesture@TouchEdgeGestureManager@@QEAA_NXZ @ 0x18064DA00
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_013507e4d5b2fb5bed44960782046b4d__bool_::_Do_call @ 0x18064DE00 (std--_Func_impl_no_alloc__lambda_013507e4d5b2fb5bed44960782046b4d__bool_--_Do_call.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?WatchCurrentThread@TouchEdgeGestureTelemetry@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x1800BA038 (-WatchCurrentThread@TouchEdgeGestureTelemetry@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?get@?$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@P6AXXZ@Z @ 0x1800BA0BC (-get@-$static_lazy@VTouchEdgeGestureTelemetry@@@details@wil@@QEAAPEAVTouchEdgeGestureTelemetry@@.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18016CF38 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?HideGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18021F95C (-HideGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?ShowGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PEAUIImmersiveMonitor@@_N@Z @ 0x18022024C (-ShowGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@W4TouchEdgeGestureType@@PE.c)
 *     ?IsEnabled@TouchEdgeGestureTelemetry@@SA_NE_K@Z @ 0x18064D5D8 (-IsEnabled@TouchEdgeGestureTelemetry@@SA_NE_K@Z.c)
 *     ?ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D7E8 (-ShouldShowGripper@TouchEdgeGestureManager@@AEAA_NXZ.c)
 *     ?ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ @ 0x18064D870 (-ShouldStartGesture@TouchEdgeGestureManager@@AEAA_NXZ.c)
 *     ?StartTouchEdgeGestureCompleted_@TouchEdgeGestureTelemetry@@QEAAXAEBU?$com_ptr@UIImmersiveMonitor@@@winrt@@_N@Z @ 0x18064DB74 (-StartTouchEdgeGestureCompleted_@TouchEdgeGestureTelemetry@@QEAAXAEBU-$com_ptr@UIImmersiveMonito.c)
 *     ?IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ @ 0x180656B00 (-IsGripperVisible@TouchEdgeGripperHost@@QEAA_NXZ.c)
 *     ?IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z @ 0x180656BC8 (-IsPointOnGripper@TouchEdgeGripperHost@@QEAA_NUtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall TouchEdgeGestureManager::StartTouchEdgeGesture(TouchEdgeGestureManager *this)
{
  char v2; // si
  int v3; // r14d
  float v4; // xmm6_4
  float v5; // xmm7_4
  __int64 v6; // rbx
  bool IsPointOnGripper; // al
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  _BYTE v14[32]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v15[24]; // [rsp+58h] [rbp-9h] BYREF
  int v16; // [rsp+70h] [rbp+Fh]
  struct tagPOINT v17; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v18; // [rsp+D0h] [rbp+6Fh] BYREF

  TouchEdgeGestureTelemetry::WatchCurrentThread(
    (wil::ActivityThreadWatcher *)v14,
    "TouchEdgeGestureManager::StartTouchEdgeGesture");
  v2 = 0;
  v3 = *((_DWORD *)this + 46);
  v4 = *((float *)this + 48);
  v5 = *((float *)this + 49);
  v6 = *((_QWORD *)this + 13);
  v18 = v6;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v18);
  if ( TouchEdgeGripperHost::IsGripperVisible(*((TouchEdgeGripperHost **)this + 11)) )
  {
    v17.x = (int)v4;
    v17.y = (int)v5;
    IsPointOnGripper = TouchEdgeGripperHost::IsPointOnGripper(*((TouchEdgeGripperHost **)this + 11), v17);
    v8 = *((_QWORD *)this + 11);
    if ( IsPointOnGripper )
    {
      TouchEdgeGripperHost::HideGripperAsync(v8, &v17, 1);
LABEL_4:
      v2 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    if ( !TouchEdgeGestureManager::ShouldStartGesture(this) )
      goto LABEL_5;
    if ( !TouchEdgeGestureManager::ShouldShowGripper(this) )
      goto LABEL_4;
    v8 = *((_QWORD *)this + 11);
  }
  TouchEdgeGripperHost::ShowGripperAsync(v8, &v17, v3, v6, 1);
LABEL_5:
  if ( TouchEdgeGestureTelemetry::IsEnabled(v9) )
  {
    wil::details::static_lazy<TouchEdgeGestureTelemetry>::get(
      v10,
      (void (__cdecl *)())_lambda_a7362a5569191a78ac5e080098becae6_::_lambda_invoker_cdecl_);
    LOBYTE(v11) = v2;
    TouchEdgeGestureTelemetry::StartTouchEdgeGestureCompleted_(v12, &v18, v11);
    v6 = v18;
  }
  if ( v6 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v18);
  if ( v16 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v14);
  return v2;
}
