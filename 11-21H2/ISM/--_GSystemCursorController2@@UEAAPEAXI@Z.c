/*
 * XREFs of ??_GSystemCursorController2@@UEAAPEAXI@Z @ 0x1800E8480
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ??1SystemCursorController2@@UEAA@XZ @ 0x1800E82CC (--1SystemCursorController2@@UEAA@XZ.c)
 */

void **__fastcall SystemCursorController2::`scalar deleting destructor'(void **this, char a2)
{
  SystemCursorController2::~SystemCursorController2(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
