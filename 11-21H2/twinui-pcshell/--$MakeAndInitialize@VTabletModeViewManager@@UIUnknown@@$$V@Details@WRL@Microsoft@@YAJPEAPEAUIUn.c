/*
 * XREFs of ??$MakeAndInitialize@VTabletModeViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AC814
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800AC630 (-CreateInstance@-$SimpleClassFactory@VTabletModeViewManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkno.c)
 * Callees:
 *     ??0TabletModeViewManager@@QEAA@XZ @ 0x1800AC6AC (--0TabletModeViewManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabletModeViewManager@@QEAAJXZ @ 0x1800AEAB4 (-RuntimeClassInitialize@TabletModeViewManager@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager,IUnknown,>(_QWORD *a1)
{
  TabletModeViewManager *v2; // rax
  TabletModeViewManager *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (TabletModeViewManager *)operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = TabletModeViewManager::TabletModeViewManager(v2);
    v4 = TabletModeViewManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(TabletModeViewManager *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(TabletModeViewManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
