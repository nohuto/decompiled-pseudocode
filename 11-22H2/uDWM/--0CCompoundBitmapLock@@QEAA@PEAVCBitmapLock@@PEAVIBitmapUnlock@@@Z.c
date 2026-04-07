/*
 * XREFs of ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x180059FF4
 * Callers:
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180059CF0 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ??0IWICBitmap@@QEAA@XZ @ 0x18004F10C (--0IWICBitmap@@QEAA@XZ.c)
 *     ??0CMILCOMBase@@QEAA@XZ @ 0x18004F298 (--0CMILCOMBase@@QEAA@XZ.c)
 *     ??0IBitmapLock@@QEAA@XZ @ 0x18004F2EC (--0IBitmapLock@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

CCompoundBitmapLock *__fastcall CCompoundBitmapLock::CCompoundBitmapLock(
        CCompoundBitmapLock *this,
        struct CBitmapLock *a2,
        struct IBitmapUnlock *a3)
{
  CMILCOMBase::CMILCOMBase(this);
  IBitmapLock::IBitmapLock((CCompoundBitmapLock *)((char *)this + 16));
  IWICBitmap::IWICBitmap((IWICBitmap *)this + 3);
  *((_QWORD *)this + 4) = a2;
  *(_QWORD *)this = &CCompoundBitmapLock::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CCompoundBitmapLock::`vftable'{for `IBitmapLock'};
  *((_QWORD *)this + 3) = &CCompoundBitmapLock::`vftable'{for `IWICBitmapLock'};
  (*(void (__fastcall **)(struct CBitmapLock *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 5) = a3;
  (*(void (__fastcall **)(struct IBitmapUnlock *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
