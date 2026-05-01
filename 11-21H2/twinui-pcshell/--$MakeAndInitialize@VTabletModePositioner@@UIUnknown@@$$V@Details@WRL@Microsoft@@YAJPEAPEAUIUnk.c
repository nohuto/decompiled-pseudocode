/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1800AE9EC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800AE970 (-CreateInstance@-$SimpleClassFactory@VTabletModePositioner@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1800B0638 (-RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ.c)
 *     ??0TabletModePositioner@@QEAA@XZ @ 0x1800D0750 (--0TabletModePositioner@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositioner,IUnknown,>(_QWORD *a1)
{
  TabletModePositioner *v2; // rax
  TabletModePositioner *v3; // rdi
  int v4; // esi

  *a1 = 0LL;
  v2 = (TabletModePositioner *)operator new(0x210uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v3 = TabletModePositioner::TabletModePositioner(v2);
    v4 = TabletModePositioner::RuntimeClassInitialize(v3);
    if ( v4 >= 0 )
      v4 = (**(__int64 (__fastcall ***)(TabletModePositioner *, GUID *, _QWORD *))v3)(
             v3,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    if ( v3 )
      (*(void (__fastcall **)(TabletModePositioner *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
