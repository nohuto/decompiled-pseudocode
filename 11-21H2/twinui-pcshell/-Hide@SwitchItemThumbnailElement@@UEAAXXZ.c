/*
 * XREFs of ?Hide@SwitchItemThumbnailElement@@UEAAXXZ @ 0x1804CF310
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CMultitaskingViewElementBase@@UEAAXXZ @ 0x1804B9E70 (-Hide@CMultitaskingViewElementBase@@UEAAXXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::Hide(SwitchItemThumbnailElement *this)
{
  CMultitaskingViewElementBase::Hide(this);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 74);
}
