/*
 * XREFs of ??0IBitmapDest@@QEAA@XZ @ 0x180013FFC
 * Callers:
 *     ??0CBitmap@@QEAA@XZ @ 0x18005A21C (--0CBitmap@@QEAA@XZ.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x18009C4A4 (--0IUnknown@@QEAA@XZ.c)
 */

IBitmapDest *__fastcall IBitmapDest::IBitmapDest(IBitmapDest *this)
{
  IUnknown::IUnknown((IUnknown *)this);
  *(_QWORD *)this = &IBitmapDest::`vftable';
  return this;
}
