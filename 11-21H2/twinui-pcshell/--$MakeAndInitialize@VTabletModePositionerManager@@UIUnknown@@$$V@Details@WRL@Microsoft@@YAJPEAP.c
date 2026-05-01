/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AC55C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800AC4E0 (-CreateInstance@-$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ?RuntimeClassInitialize@TabletModePositionerManager@@QEAAJXZ @ 0x1800AE904 (-RuntimeClassInitialize@TabletModePositionerManager@@QEAAJXZ.c)
 *     ??0TabletModePositionerManager@@QEAA@XZ @ 0x1800D06D0 (--0TabletModePositionerManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerManager,IUnknown,>(_QWORD *a1)
{
  TabletModePositionerManager *v2; // rax
  TabletModePositionerManager *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (TabletModePositionerManager *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = TabletModePositionerManager::TabletModePositionerManager(v2);
    v4 = TabletModePositionerManager::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(TabletModePositionerManager *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(TabletModePositionerManager *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
