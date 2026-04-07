/*
 * XREFs of ??1CAccentAcrylicBlurBehind@@EEAA@XZ @ 0x18009EE00
 * Callers:
 *     ??_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z @ 0x18009EF10 (--_GCAccentAcrylicBlurBehind@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x1800A11D4 (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 */

void __fastcall CAccentAcrylicBlurBehind::~CAccentAcrylicBlurBehind(CAccentAcrylicBlurBehind *this)
{
  *(_QWORD *)this = &CAccentAcrylicBlurBehind::`vftable';
  CAccentAcrylicBlurBehind::ReleaseResources(this);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 44);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 39);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 38);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 37);
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
}
