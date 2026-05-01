/*
 * XREFs of ?RemoveDesktop@VirtualDesktopController@@UEAAJPEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x18048DB40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall VirtualDesktopController::RemoveDesktop(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *),
        __int64 (__fastcall ***a3)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *))
{
  RTL_SRWLOCK *v6; // r14
  int v7; // ebx
  __int64 (__fastcall *v8)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 (__fastcall *v10)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *, GUID *, __int64 *); // rbx
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  PVOID Ptr; // rsi
  __int64 (__fastcall *v15)(PVOID, _QWORD, __int64); // rdi
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v22; // [rsp+70h] [rbp+30h] BYREF
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF

  v6 = this + 15;
  AcquireSRWLockShared(this + 15);
  v20[1] = (__int64)v6;
  if ( !this[10].Ptr )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
    goto LABEL_12;
  }
  v23 = 0LL;
  v8 = **a2;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  v9 = v8(
         (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a2,
         &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
         &v23);
  v7 = v9;
  if ( v9 >= 0 )
  {
    v22 = 0LL;
    v10 = **a3;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
    v11 = v10(
            (struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *)a3,
            &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
            &v22);
    v7 = v11;
    if ( v11 >= 0 )
    {
      Ptr = this[10].Ptr;
      v15 = *(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)Ptr + 96LL);
      v16 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 24LL))(v22, v20);
      v17 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v19);
      v7 = v15(Ptr, *v17, v16);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v19);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v20);
      if ( v7 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v22);
        goto LABEL_11;
      }
      v12 = (unsigned int)v7;
      v13 = 177LL;
    }
    else
    {
      v12 = (unsigned int)v11;
      v13 = 175LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)v12);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
    (const char *)(unsigned int)v9);
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
LABEL_12:
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return (unsigned int)v7;
}
