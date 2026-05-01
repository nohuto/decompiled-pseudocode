/*
 * XREFs of ??1CachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAA@XZ @ 0x1805C2FE4
 * Callers:
 *     ??_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z @ 0x1805C3230 (--_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::~CachedWindowArrangementViewLifetime(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &TabletModeViewManager::CachedWindowArrangementViewLifetime::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(v2 + 136), *((struct IUnknown **)this + 3)) )
  {
    IUnknown_SetSite(*(IUnknown **)(v2 + 136), 0LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)(v2 + 136));
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 3);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
