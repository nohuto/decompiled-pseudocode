/*
 * XREFs of ?SetPositionAndViewData@CTaskWindow@@UEAAJQEBUtagRECT@@QEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180153A50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z @ 0x180039F90 (-RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTaskWindow::SetPositionAndViewData(
        CTaskWindow *this,
        const struct tagRECT *const a2,
        const struct APPLICATION_VIEW_DATA *a3)
{
  int v6; // ebx
  void (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  ImmersiveOwnedWindowHelper *v9; // rax
  const struct tagRECT *v10; // r8
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  if ( (*((_BYTE *)this + 60) & 2) == 0 )
  {
    v12 = 0LL;
    v7 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
    v8 = **v7;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
    v8(v7, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v12);
    v6 = (*(__int64 (__fastcall **)(__int64, const struct tagRECT *const, const struct APPLICATION_VIEW_DATA *))(*(_QWORD *)v12 + 80LL))(
           v12,
           a2,
           a3);
    if ( v6 >= 0 )
    {
      v9 = (ImmersiveOwnedWindowHelper *)(*(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)this + 32LL))(this);
      if ( v9 )
        ImmersiveOwnedWindowHelper::RepositionOwnedWindows(v9, (__int128 *)&a2->left, v10);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
  }
  return (unsigned int)v6;
}
