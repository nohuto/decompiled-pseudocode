/*
 * XREFs of ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x18050A990
 * Callers:
 *     ?CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUnknown@@@Z @ 0x18050B010 (-CreateWindowArrangementViewForDrag@TabletModeViewManager@@UEAAJPEAUIApplicationView@@PEAPEAUIUn.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x180088810 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CachedWindowArrangementViewLifetime@TabletModeViewManager@@QEAAJPEAV2@PEAUIWindowArrangementView@@@Z @ 0x18050BA10 (-RuntimeClassInitialize@CachedWindowArrangementViewLifetime@TabletModeViewManager@@QEAAJPEAV2@PE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModeViewManager::CachedWindowArrangementViewLifetime,IUnknown,TabletModeViewManager *,IWindowArrangementView *>(
        _QWORD *a1,
        struct TabletModeViewManager **a2,
        struct IWindowArrangementView **a3)
{
  TabletModeViewManager::CachedWindowArrangementViewLifetime *v6; // rax
  TabletModeViewManager::CachedWindowArrangementViewLifetime *v7; // rbx
  int v8; // edi

  *a1 = 0LL;
  v6 = (TabletModeViewManager::CachedWindowArrangementViewLifetime *)operator new(
                                                                       0x20uLL,
                                                                       (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>((__int64)v6);
    *(_QWORD *)v7 = &TabletModeViewManager::CachedWindowArrangementViewLifetime::`vftable';
    *((_QWORD *)v7 + 2) = 0LL;
    *((_QWORD *)v7 + 3) = 0LL;
    v8 = TabletModeViewManager::CachedWindowArrangementViewLifetime::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(TabletModeViewManager::CachedWindowArrangementViewLifetime *, GUID *, _QWORD *))v7)(
             v7,
             &GUID_00000000_0000_0000_c000_000000000046,
             a1);
    (*(void (__fastcall **)(TabletModeViewManager::CachedWindowArrangementViewLifetime *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
