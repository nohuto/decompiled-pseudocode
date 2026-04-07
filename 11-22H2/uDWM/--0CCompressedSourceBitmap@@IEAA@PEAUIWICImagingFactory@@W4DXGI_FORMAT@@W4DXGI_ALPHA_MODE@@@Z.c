/*
 * XREFs of ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18004EFF4
 * Callers:
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18004EF0C (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 * Callees:
 *     ??0IWICBitmap@@QEAA@XZ @ 0x18004F10C (--0IWICBitmap@@QEAA@XZ.c)
 *     ??0IBitmapUnlock@@QEAA@XZ @ 0x18004F12C (--0IBitmapUnlock@@QEAA@XZ.c)
 *     ??0CBitmap@@QEAA@XZ @ 0x18004F154 (--0CBitmap@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CCompressedSourceBitmap *__fastcall CCompressedSourceBitmap::CCompressedSourceBitmap(
        CCompressedSourceBitmap *this,
        struct IWICImagingFactory *a2,
        enum DXGI_FORMAT a3,
        enum DXGI_ALPHA_MODE a4)
{
  CCompressedSourceBitmap *result; // rax

  CBitmap::CBitmap(this);
  IBitmapUnlock::IBitmapUnlock((CCompressedSourceBitmap *)((char *)this + 240));
  IWICBitmap::IWICBitmap((IWICBitmap *)this + 31);
  *((_QWORD *)this + 36) = a2;
  *(_QWORD *)this = &CCompressedSourceBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompressedSourceBitmap::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CCompressedSourceBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CCompressedSourceBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CCompressedSourceBitmap::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 14) = &CCompressedSourceBitmap::`vftable'{for `CMTALock'};
  *((_QWORD *)this + 30) = &CCompressedSourceBitmap::`vftable'{for `IBitmapCompressedPixels'};
  *((_QWORD *)this + 31) = &CCompressedSourceBitmap::`vftable'{for `IWICDecoderBitmapSource'};
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  if ( a2 )
    ((void (__fastcall *)(struct IWICImagingFactory *))a2->lpVtbl->AddRef)(a2);
  result = this;
  *((_DWORD *)this + 50) = 87;
  *(_QWORD *)((char *)this + 204) = 1LL;
  return result;
}
