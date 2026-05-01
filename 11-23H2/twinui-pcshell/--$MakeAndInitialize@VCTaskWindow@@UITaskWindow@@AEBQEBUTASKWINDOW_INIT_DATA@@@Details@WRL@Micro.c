/*
 * XREFs of ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEBQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1803C7AE0
 * Callers:
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1803BF7E8 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x1803BFCEC (-AddOrphanedWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0CTaskWindow@@QEAA@XZ @ 0x1800480F4 (--0CTaskWindow@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEAAXPEAVCTaskWindow@@@Z @ 0x1800485B0 (-Attach@-$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEAAXPEAVCTaskWindow@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z @ 0x1803C81E8 (-RuntimeClassInitialize@CTaskWindow@@QEAAJQEBUTASKWINDOW_INIT_DATA@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,TASKWINDOW_INIT_DATA const * const &>(
        _QWORD *a1,
        const struct TASKWINDOW_INIT_DATA **a2)
{
  CTaskWindow *v4; // rax
  int v5; // esi
  CTaskWindow *v6; // rax
  const struct TASKWINDOW_INIT_DATA *v7; // rdx
  CTaskWindow *v8; // rbx
  CTaskWindow *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v6 = CTaskWindow::CTaskWindow(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<CTaskWindow>::Attach((__int64 *)&v10, (__int64)v6);
    v11 = 0LL;
    v7 = *a2;
    v8 = v10;
    v5 = CTaskWindow::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CTaskWindow *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
             a1);
    if ( v8 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
