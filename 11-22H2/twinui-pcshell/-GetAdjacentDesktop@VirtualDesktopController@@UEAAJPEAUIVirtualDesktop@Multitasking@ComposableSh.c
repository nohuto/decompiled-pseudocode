/*
 * XREFs of ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x180541BA0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NavDirFromFocusNavigationDirection@VirtualDesktopController@@AEAAIW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z @ 0x180542DB4 (-NavDirFromFocusNavigationDirection@VirtualDesktopController@@AEAAIW4FocusNavigationDirection@In.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::GetAdjacentDesktop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(_QWORD, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 *v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, __int64, _QWORD, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v8 = (RTL_SRWLOCK *)(a1 + 136);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 136));
  v22[1] = (__int64)v8;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v10 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x154,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_16;
  }
  v11 = 0LL;
  v21 = 0LL;
  if ( !a2 )
  {
LABEL_7:
    v15 = VirtualDesktopController::NavDirFromFocusNavigationDirection(v9, a3);
    v25 = 0LL;
    v16 = *(_QWORD *)(a1 + 88);
    v17 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 64LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v18 = v17(v16, v11, v15, &v25);
    v10 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(a1 + 104) + 24LL))(
              *(_QWORD *)(a1 + 104),
              v25,
              a4);
      v10 = v18;
      if ( v18 >= 0 )
        goto LABEL_14;
      v19 = 364LL;
    }
    else
    {
      if ( v18 == -2147316575 )
      {
        v10 = 0;
LABEL_14:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
        goto LABEL_15;
      }
      v19 = 361LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_14;
  }
  v24 = 0LL;
  v12 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v13 = v12(a2, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2, &v24);
  v10 = v13;
  if ( v13 >= 0 )
  {
    v14 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL))(v24, v22);
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v21, v14);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v22);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v11 = v21;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15A,
    (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v13);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
LABEL_15:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
LABEL_16:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v10;
}
