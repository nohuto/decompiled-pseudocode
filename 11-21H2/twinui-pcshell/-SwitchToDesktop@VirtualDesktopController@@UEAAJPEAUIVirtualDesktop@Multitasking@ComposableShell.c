/*
 * XREFs of ?SwitchToDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18048E020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetMonitorFromVirtualDesktop@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAUIVirtualDesktopManagerInternal@@@Z @ 0x18048AD10 (-GetMonitorFromVirtualDesktop@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIVirtualDesktop@@PEAU.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::SwitchToDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v4; // rsi
  int v5; // ebx
  __int64 (__fastcall *v6)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 MonitorFromVirtualDesktop; // r14
  struct IVirtualDesktop *Ptr; // rbx
  struct IUnknown **v13; // rax
  struct IVirtualDesktopManagerInternal *v14; // r8
  PVOID v15; // rdi
  __int64 (__fastcall *v16)(PVOID, __int64, _QWORD); // rbx
  _QWORD *v17; // rax
  __int64 v19[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  int v21; // [rsp+60h] [rbp+30h] BYREF
  __int64 v22; // [rsp+70h] [rbp+40h] BYREF
  __int64 v23; // [rsp+78h] [rbp+48h] BYREF

  v4 = this + 15;
  AcquireSRWLockShared(this + 15);
  v19[1] = (__int64)v4;
  if ( !this[10].Ptr )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_14;
  }
  v22 = 0LL;
  v6 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
  v7 = v6(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v22);
  v5 = v7;
  if ( v7 >= 0 )
  {
    v21 = 0;
    v10 = (*(__int64 (__fastcall **)(PVOID, int *))(*(_QWORD *)this[10].Ptr + 152LL))(this[10].Ptr, &v21);
    v5 = v10;
    if ( v10 >= 0 )
    {
      MonitorFromVirtualDesktop = 0LL;
      if ( v21 )
      {
        Ptr = (struct IVirtualDesktop *)this[10].Ptr;
        v13 = (struct IUnknown **)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, &v23);
        MonitorFromVirtualDesktop = VirtualDesktopHelpers::GetMonitorFromVirtualDesktop(*v13, Ptr, v14);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
      }
      v15 = this[10].Ptr;
      v16 = *(__int64 (__fastcall **)(PVOID, __int64, _QWORD))(*(_QWORD *)v15 + 72LL);
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, v19);
      v5 = v16(v15, MonitorFromVirtualDesktop, *v17);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v19);
      if ( v5 >= 0 )
      {
        v5 = 0;
        goto LABEL_13;
      }
      v8 = (unsigned int)v5;
      v9 = 132LL;
    }
    else
    {
      v8 = (unsigned int)v10;
      v9 = 123LL;
    }
  }
  else
  {
    v8 = (unsigned int)v7;
    v9 = 120LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)v8);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
LABEL_14:
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return (unsigned int)v5;
}
