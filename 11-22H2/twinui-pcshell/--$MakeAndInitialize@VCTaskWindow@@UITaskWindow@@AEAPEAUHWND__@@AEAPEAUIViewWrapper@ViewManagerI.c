/*
 * XREFs of ??$MakeAndInitialize@VCTaskWindow@@UITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAUITaskWindow@@AEAPEAUHWND__@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@AEAW4TASK_WINDOW_TYPE@@AEAPEAUIImmersiveApplicationInternal@@AEAPEBUtagRECT@@AEAPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047FD4
 * Callers:
 *     ?s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180047F28 (-s_CreateInstance@CTaskWindow@@SAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal.c)
 * Callees:
 *     ??0CTaskWindow@@QEAA@XZ @ 0x1800480F4 (--0CTaskWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800481CC (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?Attach@?$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEAAXPEAVCTaskWindow@@@Z @ 0x1800485B0 (-Attach@-$ComPtr@VCTaskWindow@@@WRL@Microsoft@@QEAAXPEAVCTaskWindow@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CTaskWindow,ITaskWindow,HWND__ * &,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &,enum TASK_WINDOW_TYPE &,IImmersiveApplicationInternal * &,tagRECT const * &,APPLICATION_VIEW_DATA const * &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  CTaskWindow *v11; // rax
  CTaskWindow *v12; // rax
  __int64 v13; // r9
  CTaskWindow *v14; // rbx
  int v15; // esi
  CTaskWindow *v17; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (CTaskWindow *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v11;
  if ( v11 )
  {
    v12 = CTaskWindow::CTaskWindow(v11);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<CTaskWindow>::Attach(&v17, v12);
    v13 = *a4;
    v14 = v17;
    v15 = CTaskWindow::RuntimeClassInitialize(v17, *a2, *a3, v13, *a5, *a6, *a7);
    if ( v15 >= 0 )
      v15 = (**(__int64 (__fastcall ***)(CTaskWindow *, GUID *, _QWORD *))v14)(
              v14,
              &GUID_3232bb1b_301e_409e_af1c_6d15fcc0ffee,
              a1);
    if ( v14 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v15;
}
