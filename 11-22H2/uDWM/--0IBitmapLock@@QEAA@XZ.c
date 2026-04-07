/*
 * XREFs of ??0IBitmapLock@@QEAA@XZ @ 0x18004F2EC
 * Callers:
 *     ??0CBitmap@@QEAA@XZ @ 0x18004F154 (--0CBitmap@@QEAA@XZ.c)
 *     ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x180059FF4 (--0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x18005A144 (--0CBitmapLock@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006BA66 (--0IUnknown@@QEAA@XZ.c)
 */

IBitmapLock *__fastcall IBitmapLock::IBitmapLock(IBitmapLock *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IBitmapLock::`vftable';
  return this;
}
