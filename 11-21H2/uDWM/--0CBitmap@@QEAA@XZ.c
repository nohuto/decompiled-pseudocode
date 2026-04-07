/*
 * XREFs of ??0CBitmap@@QEAA@XZ @ 0x18005A21C
 * Callers:
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1800593DC (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ??0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z @ 0x18005A104 (--0CCompressedSourceBitmap@@IEAA@PEAUIWICImagingFactory@@W4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ??0CMILCOMBase@@QEAA@XZ @ 0x180013BA0 (--0CMILCOMBase@@QEAA@XZ.c)
 *     ??0IBitmapLock@@QEAA@XZ @ 0x180013FD4 (--0IBitmapLock@@QEAA@XZ.c)
 *     ??0IBitmapDest@@QEAA@XZ @ 0x180013FFC (--0IBitmapDest@@QEAA@XZ.c)
 *     ??0IBitmapUnlock@@QEAA@XZ @ 0x180014024 (--0IBitmapUnlock@@QEAA@XZ.c)
 *     ??0IWICBitmap@@QEAA@XZ @ 0x180014100 (--0IWICBitmap@@QEAA@XZ.c)
 *     ??0CMTALock@@QEAA@XZ @ 0x18005A360 (--0CMTALock@@QEAA@XZ.c)
 *     ??0CMILResourceCache@@IEAA@XZ @ 0x18005A3B8 (--0CMILResourceCache@@IEAA@XZ.c)
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
