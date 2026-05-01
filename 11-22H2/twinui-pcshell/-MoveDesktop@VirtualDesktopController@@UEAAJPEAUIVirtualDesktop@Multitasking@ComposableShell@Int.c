/*
 * XREFs of ?MoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x1805428F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$open_and_watch_errors@V?$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@tip@@@tip@@YA?A_PXZ @ 0x180540D4C (--$open_and_watch_errors@V-$tip_test@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@.c)
 */

__int64 __fastcall VirtualDesktopController::MoveDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        unsigned int a3)
{
  RTL_SRWLOCK *v6; // rsi
  int v7; // ebx
  __int64 (__fastcall *v9)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  __int64 v10; // rdx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v12)(PVOID, _QWORD, _QWORD); // rbx
  _QWORD *v13; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v15[24]; // [rsp+28h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-20h]
  std::_Ref_count_base *v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+48h] BYREF

  tip::open_and_watch_errors<tip::tip_test<WindowsInternal::ComposableShell::Experiences::Switcher::Tip::_tip_VirtualDesktopRearrangeTest>>((__int64)v14);
  v6 = this + 17;
  AcquireSRWLockShared(this + 17);
  if ( !this[11].Ptr )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
LABEL_3:
    if ( v6 )
      ReleaseSRWLockShared(v6);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    if ( v16 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
    return (unsigned int)v7;
  }
  v19 = 0LL;
  v9 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  v7 = v9(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v19);
  if ( v7 < 0 )
  {
    v10 = 211LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
    goto LABEL_3;
  }
  Ptr = this[11].Ptr;
  v12 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 88LL);
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 24LL))(v19, &v20);
  v7 = v12(Ptr, *v13, a3);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
  if ( v7 < 0 )
  {
    v10 = 213LL;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  if ( v17 )
    std::_Ref_count_base::_Decref(v17);
  if ( v16 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v15);
  return 0LL;
}
