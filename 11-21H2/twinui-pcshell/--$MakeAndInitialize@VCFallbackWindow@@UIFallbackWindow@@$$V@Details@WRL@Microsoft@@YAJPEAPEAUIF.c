/*
 * XREFs of ??$MakeAndInitialize@VCFallbackWindow@@UIFallbackWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIFallbackWindow@@@Z @ 0x1801583A8
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x1800DCE30 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     ??0CFallbackWindow@@QEAA@XZ @ 0x1800D43FC (--0CFallbackWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x180158470 (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CFallbackWindow,IFallbackWindow,>(_QWORD *a1)
{
  CFallbackWindow *v2; // rax
  CFallbackWindow *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (CFallbackWindow *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = CFallbackWindow::CFallbackWindow(v2);
    v4 = CFallbackWindow::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(CFallbackWindow *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_743bc0bd_69f0_4f28_8401_047ae0c0ffee,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(CFallbackWindow *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
