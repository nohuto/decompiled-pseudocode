/*
 * XREFs of ??1CShrinkButtonElement@@QEAA@XZ @ 0x1802E2270
 * Callers:
 *     ??1SwitchItemThumbnailElement@@UEAA@XZ @ 0x1802E2C56 (--1SwitchItemThumbnailElement@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCShrinkButtonElement@@UIMultitaskingViewDragSource@@UISwitchItemThumbnailElement@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180572BB0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCShrinkButtonElement@@UIMultitasking.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CShrinkButtonElement::~CShrinkButtonElement(CShrinkButtonElement *this)
{
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 33);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 31);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 30);
  CMultitaskingViewElementBase::~CMultitaskingViewElementBase(this);
}
