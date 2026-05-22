/*
 * XREFs of ?MakeCompletedCallback@GestureHandler@@AEAA?AV?$shared_ptr@VGestureHandler@@@std@@W4GestureCompletedReason@@@Z @ 0x1800616B4
 * Callers:
 *     ?CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ @ 0x1800615FC (-CleanupAnimationDataIfNeeded@GestureHandler@@AEAAXXZ.c)
 *     ?CancelOperation@GestureHandler@@QEAAXXZ @ 0x1801568C0 (-CancelOperation@GestureHandler@@QEAAXXZ.c)
 *     ?ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@System@Windows@@W4GestureOperationState@@@Z @ 0x180157738 (-ProcessGesture@GestureHandler@@QEAAJAEBUGestureAnimationProperties@@W4VirtualKeyModifiers@Syste.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Construct_from_weak@VSystemCursorService2@@@?$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService2@@@1@@Z @ 0x1801035FC (--$_Construct_from_weak@VSystemCursorService2@@@-$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NA.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x180106E34 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall GestureHandler::MakeCompletedCallback(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r10
  int v4; // r11d
  __int64 v5; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v8; // [rsp+48h] [rbp+10h]
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( !(unsigned __int8)std::_Ptr_base<SystemCursorService2>::_Construct_from_weak<SystemCursorService2>(a2, a1) )
    std::_Throw_bad_weak_ptr();
  v7 = v4;
  v9 = v3;
  v5 = *(_QWORD *)(v3 + 88);
  if ( !v5 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 *, int *))(*(_QWORD *)v5 + 16LL))(v5, &v9, &v7);
  return a2;
}
