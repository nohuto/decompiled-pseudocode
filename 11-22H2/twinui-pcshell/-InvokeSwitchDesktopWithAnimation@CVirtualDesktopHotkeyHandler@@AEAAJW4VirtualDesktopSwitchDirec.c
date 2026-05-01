/*
 * XREFs of ?InvokeSwitchDesktopWithAnimation@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x180608F74
 * Callers:
 *     ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x180609674 (-_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA?A_PXZ @ 0x1805FFCCC (--$start_and_watch_errors@V-$tip_test@U_tip_VDSlideAnimationPerfTest@@@tip@@@tip@@YA-A_PXZ.c)
 *     ?IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x1806092E8 (-IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CVirtualDesktopHotkeyHandler::InvokeSwitchDesktopWithAnimation(_QWORD *a1, unsigned int a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v5)(_QWORD, GUID *, __int64 *); // rax
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, struct IVirtualDesktop **); // rbx
  CVirtualDesktopHotkeyHandler *v14; // rcx
  void (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  void (__fastcall **v16)(_QWORD, GUID *, __int64 *); // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  struct IVirtualDesktop *v23; // [rsp+50h] [rbp-69h] BYREF
  __int64 v24; // [rsp+58h] [rbp-61h] BYREF
  int v25; // [rsp+60h] [rbp-59h] BYREF
  __int64 v26; // [rsp+68h] [rbp-51h] BYREF
  __int64 v27[2]; // [rsp+70h] [rbp-49h] BYREF
  __int128 v28; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v29[64]; // [rsp+90h] [rbp-29h] BYREF
  __int128 v30; // [rsp+D0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v24 = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[4];
  v5 = *v4;
  v24 = 0LL;
  v6 = (*v5)(v4, &GUID_bb1b0fb0_58f6_4f1a_99f2_86599b33ede8, &v24);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 124LL;
      goto LABEL_5;
    }
    v27[0] = 0LL;
    v9 = a1[3];
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 360LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v27);
    v11 = v10(v9, v27);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
        (const char *)(unsigned int)v11);
LABEL_24:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(v27);
      goto LABEL_25;
    }
    v23 = 0LL;
    v12 = a1[3];
    v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IVirtualDesktop **))(*(_QWORD *)v12 + 376LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
    v7 = v13(v12, v27[0], (unsigned int)(a2 != 0) + 3, &v23);
    if ( v7 < 0 )
    {
LABEL_23:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v23);
      goto LABEL_24;
    }
    v25 = 0;
    if ( CVirtualDesktopHotkeyHandler::IsRemoteDesktop(v14, v23, &v25) || !v25 )
    {
      tip::start_and_watch_errors<tip::tip_test<_tip_VDSlideAnimationPerfTest>>((struct wil::details::IFailureCallback *)v29);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 72LL))(v24);
      v21 = (*(__int64 (__fastcall **)(__int64, struct IVirtualDesktop *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v24 + 40LL))(
              v24,
              v23,
              a2,
              a1[7],
              a1[6],
              a1[8],
              a1[5],
              0);
      v7 = v21;
      if ( v21 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9E,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)v21);
      tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>((__int64)v29);
      goto LABEL_23;
    }
    v26 = 0LL;
    v15 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))a1[3];
    v16 = *v15;
    v26 = 0LL;
    (*v16)(v15, &GUID_95bb3d6c_9eba_40cc_af4d_1a3255717d9d, &v26);
    (*(void (__fastcall **)(__int64, struct IVirtualDesktop *))(*(_QWORD *)v26 + 320LL))(v26, v23);
    v17 = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int128 *))(*(_QWORD *)v23 + 32LL))(v23, &v30);
    v7 = v17;
    if ( v17 >= 0 )
    {
      v19 = (__int64 *)a1[10];
      if ( !v19 )
      {
        v7 = -2147467259;
        goto LABEL_19;
      }
      v20 = *v19;
      v28 = v30;
      v17 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v20 + 88))(v19, &v28, 1LL);
      v7 = v17;
      if ( v17 >= 0 )
      {
        v7 = 0;
        goto LABEL_19;
      }
      v18 = 145LL;
    }
    else
    {
      v18 = 141LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)(unsigned int)v17);
LABEL_19:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    goto LABEL_23;
  }
  v8 = 123LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v6);
LABEL_25:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  return (unsigned int)v7;
}
