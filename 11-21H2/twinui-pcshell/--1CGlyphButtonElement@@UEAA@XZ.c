/*
 * XREFs of ??1CGlyphButtonElement@@UEAA@XZ @ 0x1802368DC
 * Callers:
 *     ??_ECGlyphButtonElement@@UEAAPEAXI@Z @ 0x1804CBA30 (--_ECGlyphButtonElement@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CGlyphButtonElement::~CGlyphButtonElement(CGlyphButtonElement *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 49);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 47);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 46);
  *((_DWORD *)this + 57) = -1073741823;
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
