/*
 * XREFs of ??1CSystemBackdropVisual@@UEAA@XZ @ 0x1800E0E50
 * Callers:
 *     ??_GCSystemBackdropVisual@@UEAAPEAXI@Z @ 0x1800E0ED0 (--_GCSystemBackdropVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E904 (-InternalRelease@-$ComPtr@VCVisualSurfaceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSystemBackdropVisual::~CSystemBackdropVisual(CSystemBackdropVisual *this)
{
  Microsoft::WRL::ComPtr<CVisualSurfaceProxy>::InternalRelease((CBaseObject **)this + 34);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 32);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 31);
  CVisual::~CVisual(this);
}
