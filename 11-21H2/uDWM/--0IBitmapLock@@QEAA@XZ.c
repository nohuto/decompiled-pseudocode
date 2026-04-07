/*
 * XREFs of ??0IBitmapLock@@QEAA@XZ @ 0x180013FD4
 * Callers:
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180059540 (--0CBitmapLock@@QEAA@XZ.c)
 *     ??0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z @ 0x180059888 (--0CCompoundBitmapLock@@QEAA@PEAVCBitmapLock@@PEAVIBitmapUnlock@@@Z.c)
 *     ??0CBitmap@@QEAA@XZ @ 0x18005A21C (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18009C4A4 (--0IUnknown@@QEAA@XZ.c)
 */

IBitmapLock *__fastcall IBitmapLock::IBitmapLock(IBitmapLock *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IBitmapLock::`vftable';
  return this;
}
