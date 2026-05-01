/*
 * XREFs of ?RuntimeClassInitialize@CachedWindowArrangementViewLifetime@TabletModeViewManager@@QEAAJPEAV2@PEAUIWindowArrangementView@@@Z @ 0x1805C3F3C
 * Callers:
 *     ??$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV2@PEAUIWindowArrangementView@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVTabletModeViewManager@@$$QEAPEAUIWindowArrangementView@@@Z @ 0x1805C2EA0 (--$MakeAndInitialize@VCachedWindowArrangementViewLifetime@TabletModeViewManager@@UIUnknown@@PEAV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::RuntimeClassInitialize(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this,
        struct TabletModeViewManager *a2,
        struct IWindowArrangementView *a3)
{
  __int64 v6; // rcx
  struct IWindowArrangementView *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct TabletModeViewManager **)this + 2) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct TabletModeViewManager *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
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
