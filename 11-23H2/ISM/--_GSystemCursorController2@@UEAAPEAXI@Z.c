/*
 * XREFs of ??_GSystemCursorController2@@UEAAPEAXI@Z @ 0x180101180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??1SystemCursorController2@@UEAA@XZ @ 0x180100FCC (--1SystemCursorController2@@UEAA@XZ.c)
 */

void **__fastcall SystemCursorController2::`scalar deleting destructor'(void **this, char a2)
{
  SystemCursorController2::~SystemCursorController2(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
