/*
 * XREFs of ?GetAdjacentDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@W4FocusNavigationDirection@Input@Xaml@UI@6@PEAPEAU23456@@Z @ 0x18048CF60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800375A8 (--4-$ComPtr@UIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@@WRL@Microsoft.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NavDirFromFocusNavigationDirection@VirtualDesktopController@@AEAAIW4FocusNavigationDirection@Input@Xaml@UI@Windows@@@Z @ 0x18048D8B0 (-NavDirFromFocusNavigationDirection@VirtualDesktopController@@AEAAIW4FocusNavigationDirection@In.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualDesktopController::GetAdjacentDesktop(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        _QWORD *a4)
{
  RTL_SRWLOCK *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // r12
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 *v15; // rax
  unsigned int v16; // esi
  __int64 (__fastcall *v17)(__int64, __int64, _QWORD, __int64 *); // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  *a4 = 0LL;
  v8 = (RTL_SRWLOCK *)(a1 + 120);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  v22[1] = (__int64)v8;
  v10 = *(_QWORD *)(a1 + 80);
  if ( !v10 )
  {
    v11 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_16;
  }
  v12 = 0LL;
  v21 = 0LL;
  if ( !a2 )
  {
LABEL_7:
    v16 = VirtualDesktopController::NavDirFromFocusNavigationDirection(v9, a3);
    v25 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 64LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v18 = v17(v10, v12, v16, &v25);
    v11 = v18;
    if ( v18 >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)(a1 + 96) + 24LL))(
              *(_QWORD *)(a1 + 96),
              v25,
              a4);
      v11 = v18;
      if ( v18 >= 0 )
        goto LABEL_14;
      v19 = 264LL;
    }
    else
    {
      if ( v18 == -2147316575 )
      {
        v11 = 0;
LABEL_14:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
        goto LABEL_15;
      }
      v19 = 261LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_14;
  }
  v24 = 0LL;
  v13 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  v14 = v13(a2, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2, &v24);
  v11 = v14;
  if ( v14 >= 0 )
  {
    v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 24LL))(v24, v22);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>::operator=(
      &v21,
      v15);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v22);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    v10 = *(_QWORD *)(a1 + 80);
    v12 = v21;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF6,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v14);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
LABEL_15:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v21);
LABEL_16:
  if ( v8 )
    ReleaseSRWLockShared(v8);
  return v11;
}
