/*
 * XREFs of ??0IWICBitmap@@QEAA@XZ @ 0x180014100
 * Callers:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180059540 (--0CBitmapLock@@QEAA@XZ.c)
 *     ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x180059888 (--0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18005A104 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ??0CBitmap@@QEAA@XZ @ 0x18005A21C (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18009C4A4 (--0IUnknown@@QEAA@XZ.c)
 */

IWICBitmap *__fastcall IWICBitmap::IWICBitmap(IWICBitmap *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  return this;
}
