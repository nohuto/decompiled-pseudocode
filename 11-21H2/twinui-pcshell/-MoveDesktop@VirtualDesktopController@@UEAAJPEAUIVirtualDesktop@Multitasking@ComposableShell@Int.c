/*
 * XREFs of ?MoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@_KI@Z @ 0x18048D530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@0@XZ @ 0x18048C63C (--$open_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@.c)
 */

__int64 __fastcall VirtualDesktopController::MoveDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        __int64 a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rsi
  int v9; // ebx
  __int64 (__fastcall *v11)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  __int64 v12; // rdx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v14)(PVOID, _QWORD, __int64, _QWORD); // rbx
  _QWORD *v15; // rax
  __int64 v16[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v17[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v18[24]; // [rsp+48h] [rbp-38h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  std::_Ref_count_base *v20; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v22; // [rsp+B0h] [rbp+30h] BYREF

  tip::open_and_watch_errors<tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v17);
  v8 = this + 15;
  AcquireSRWLockShared(this + 15);
  if ( !this[10].Ptr )
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
LABEL_3:
    if ( v8 )
      ReleaseSRWLockShared(v8);
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    if ( v19 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
    return (unsigned int)v9;
  }
  v22 = 0LL;
  v11 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  v9 = v11(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v22);
  if ( v9 < 0 )
  {
    v12 = 158LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    goto LABEL_3;
  }
  Ptr = this[10].Ptr;
  v14 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64, _QWORD))(*(_QWORD *)Ptr + 88LL);
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, v16);
  v9 = v14(Ptr, *v15, a3, a4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v16);
  if ( v9 < 0 )
  {
    v12 = 160LL;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  if ( v20 )
    std::_Ref_count_base::_Decref(v20);
  if ( v19 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v18);
  return 0LL;
}
