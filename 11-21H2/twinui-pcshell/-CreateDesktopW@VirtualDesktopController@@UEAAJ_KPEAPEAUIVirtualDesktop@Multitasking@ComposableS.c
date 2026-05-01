/*
 * XREFs of ?CreateDesktopW@VirtualDesktopController@@UEAAJ_KPEAPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048CE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopController::CreateDesktopW(
        RTL_SRWLOCK *this,
        __int64 a2,
        struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **a3)
{
  RTL_SRWLOCK *v6; // rdi
  PVOID Ptr; // r14
  unsigned int v8; // ebx
  __int64 (__fastcall *v9)(PVOID, __int64, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v15; // [rsp+60h] [rbp+18h]

  *a3 = 0LL;
  v6 = this + 15;
  AcquireSRWLockShared(this + 15);
  v15 = v6;
  Ptr = this[10].Ptr;
  if ( !Ptr )
  {
    v8 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_9;
  }
  v14 = 0LL;
  v9 = *(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)Ptr + 80LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
  v10 = v9(Ptr, a2, &v14);
  v8 = v10;
  if ( v10 < 0 )
  {
    v11 = 145LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_8;
  }
  v10 = (*(__int64 (__fastcall **)(PVOID, __int64, struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop **))(*(_QWORD *)this[12].Ptr + 24LL))(
          this[12].Ptr,
          v14,
          a3);
  v8 = v10;
  if ( v10 < 0 )
  {
    v11 = 146LL;
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
LABEL_9:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return v8;
}
