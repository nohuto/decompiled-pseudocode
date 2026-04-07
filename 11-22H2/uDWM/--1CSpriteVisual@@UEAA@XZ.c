/*
 * XREFs of ??1CSpriteVisual@@UEAA@XZ @ 0x180017C98
 * Callers:
 *     ??_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z @ 0x180017C10 (--_ECMicaSystemBackdropVisual@@UEAAPEAXI@Z.c)
 *     ??1CDWriteText@@UEAA@XZ @ 0x180017CD8 (--1CDWriteText@@UEAA@XZ.c)
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x1800BFEE0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 *     ??_GCSystemBackdropVisual@@UEAAPEAXI@Z @ 0x1800E3760 (--_GCSystemBackdropVisual@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180052380 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSpriteVisual::~CSpriteVisual(CSpriteVisual *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 256);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 248);
  CVisual::~CVisual(this);
}
