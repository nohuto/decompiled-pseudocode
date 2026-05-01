/*
 * XREFs of ??$MakeAndInitialize@VForegroundStagingWindow@@UIForegroundStagingWindow@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIForegroundStagingWindow@@@Z @ 0x180116428
 * Callers:
 *     ?Initialize@ForegroundStaging@@QEAAJXZ @ 0x1801163F8 (-Initialize@ForegroundStaging@@QEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ @ 0x18011656C (-RuntimeClassInitialize@ForegroundStagingWindow@@QEAAJXZ.c)
 *     ??0ForegroundStagingWindow@@QEAA@XZ @ 0x18011666C (--0ForegroundStagingWindow@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
