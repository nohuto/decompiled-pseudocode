/*
 * XREFs of ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18003A8A4
 * Callers:
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180037748 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180303734 (-AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x18003A97C (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 *     ??0CTaskWindow@@QEAA@XZ @ 0x18006A004 (--0CTaskWindow@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEAAXPEAVCTaskWindow@@@Z @ 0x18006A0DC (-Attach@-$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEAAXPEAVCTaskWindow@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
        _QWORD *a1,
        const struct TASKWINDOW_INIT_DATA **a2)
{
  CTaskWindow *v4; // rax
  CTaskWindow *v5; // rax
  const struct TASKWINDOW_INIT_DATA *v6; // rdx
  CTaskWindow *v7; // rbx
  int v8; // esi
  CTaskWindow *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v5 = CTaskWindow::CTaskWindow(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<CTaskWindow>::Attach(&v10, v5);
    v11 = 0LL;
    v6 = *a2;
    v7 = v10;
    v8 = CTaskWindow::RuntimeClassInitialize(v10, v6);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(CTaskWindow *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
             a1);
    if ( v7 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
