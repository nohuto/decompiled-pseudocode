/*
 * XREFs of ??0IBitmapDest@@QEAA@XZ @ 0x18004F2C4
 * Callers:
 *     ??0CBitmap@@QEAA@XZ @ 0x18004F154 (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18006BA66 (--0IUnknown@@QEAA@XZ.c)
 */

IBitmapDest *__fastcall IBitmapDest::IBitmapDest(IBitmapDest *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IBitmapDest::`vftable';
  return this;
}
