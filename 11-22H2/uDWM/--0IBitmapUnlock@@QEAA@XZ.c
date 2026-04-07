/*
 * XREFs of ??0IBitmapUnlock@@QEAA@XZ @ 0x18004F12C
 * Callers:
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18004EFF4 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ??0CBitmap@@QEAA@XZ @ 0x18004F154 (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006BA66 (--0IUnknown@@QEAA@XZ.c)
 */

IBitmapUnlock *__fastcall IBitmapUnlock::IBitmapUnlock(IBitmapUnlock *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IBitmapUnlock::`vftable';
  return this;
}
