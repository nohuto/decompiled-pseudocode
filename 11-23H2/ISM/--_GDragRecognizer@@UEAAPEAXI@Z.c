/*
 * XREFs of ??_GDragRecognizer@@UEAAPEAXI@Z @ 0x1801D5600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

DragRecognizer *__fastcall DragRecognizer::`scalar deleting destructor'(DragRecognizer *this, char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
