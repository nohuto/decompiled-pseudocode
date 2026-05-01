/*
 * XREFs of ?RuntimeClassInitialize@CachedWindowArrangementViewLifetime@TabletModeViewManager@@QEAAJPEAV2@PEAUIWindowArrangementView@@@Z @ 0x18050BA10
 * Callers:
 *     ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x18050A990 (--$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::RuntimeClassInitialize(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this,
        struct TabletModeViewManager *a2,
        struct IWindowArrangementView *a3)
{
  struct TabletModeViewManager *v6; // rcx
  struct IWindowArrangementView *v8; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct TabletModeViewManager *)*((_QWORD *)this + 2);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct TabletModeViewManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct TabletModeViewManager *)*((_QWORD *)this + 2);
    }
    *((_QWORD *)this + 2) = a2;
    if ( v6 )
      (*(void (__fastcall **)(struct TabletModeViewManager *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( *((struct IWindowArrangementView **)this + 3) != a3 )
  {
    v8 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v8 = (struct IWindowArrangementView *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = a3;
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v8);
  }
  return 0LL;
}
