/*
 * XREFs of ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x18013846C
 * Callers:
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1801383CC (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 * Callees:
 *     ??0ForegroundStagingWindow@@QEAA@XZ @ 0x180138534 (--0ForegroundStagingWindow@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ @ 0x18013859C (-RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ForegroundStagingWindow,IForegroundStagingWindow,>(
        _QWORD *a1)
{
  ForegroundStagingWindow *v2; // rax
  ForegroundStagingWindow *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (ForegroundStagingWindow *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = ForegroundStagingWindow::ForegroundStagingWindow(v2);
    v4 = ForegroundStagingWindow::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(ForegroundStagingWindow *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_2e678f79_addb_4142_b6ee_a3c27b456805,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(ForegroundStagingWindow *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
