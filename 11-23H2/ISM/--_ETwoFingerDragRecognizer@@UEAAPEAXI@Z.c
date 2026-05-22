/*
 * XREFs of ??_ETwoFingerDragRecognizer@@UEAAPEAXI@Z @ 0x1801D6590
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

TwoFingerDragRecognizer *__fastcall TwoFingerDragRecognizer::`vector deleting destructor'(
        TwoFingerDragRecognizer *this,
        char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
