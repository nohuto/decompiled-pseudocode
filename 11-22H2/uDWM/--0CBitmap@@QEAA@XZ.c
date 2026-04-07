/*
 * XREFs of ??0CBitmap@@QEAA@XZ @ 0x18004F154
 * Callers:
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18004EFF4 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x18005A8A8 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 * Callees:
 *     ??0IWICBitmap@@QEAA@XZ @ 0x18004F10C (--0IWICBitmap@@QEAA@XZ.c)
 *     ??0IBitmapUnlock@@QEAA@XZ @ 0x18004F12C (--0IBitmapUnlock@@QEAA@XZ.c)
 *     ??0CMILCOMBase@@QEAA@XZ @ 0x18004F298 (--0CMILCOMBase@@QEAA@XZ.c)
 *     ??0IBitmapDest@@QEAA@XZ @ 0x18004F2C4 (--0IBitmapDest@@QEAA@XZ.c)
 *     ??0IBitmapLock@@QEAA@XZ @ 0x18004F2EC (--0IBitmapLock@@QEAA@XZ.c)
 *     ??0CMILResourceCache@@IEAA@XZ @ 0x18004F314 (--0CMILResourceCache@@IEAA@XZ.c)
 *     ??0CMTALock@@QEAA@XZ @ 0x18004F388 (--0CMTALock@@QEAA@XZ.c)
 */

CBitmap *__fastcall CBitmap::CBitmap(CBitmap *this)
{
  CBitmap *result; // rax

  CMILCOMBase::CMILCOMBase(this);
  *((_DWORD *)this + 42) = 1;
  IBitmapLock::IBitmapLock((CBitmap *)((char *)this + 16));
  IBitmapDest::IBitmapDest((CBitmap *)((char *)this + 24));
  IBitmapUnlock::IBitmapUnlock((CBitmap *)((char *)this + 32));
  IWICBitmap::IWICBitmap((IWICBitmap *)this + 5);
  CMILResourceCache::CMILResourceCache((CBitmap *)((char *)this + 48));
  CMTALock::CMTALock((CBitmap *)((char *)this + 112));
  *(_QWORD *)this = &CBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 3) = &CBitmap::`vftable'{for `IBitmapDest'};
  *((_QWORD *)this + 4) = &CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 5) = &CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *((_QWORD *)this + 6) = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 14) = &CBitmap::`vftable'{for `CMTALock'};
  result = this;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_BYTE *)this + 236) = 0;
  *((_DWORD *)this + 58) = 0;
  return result;
}
