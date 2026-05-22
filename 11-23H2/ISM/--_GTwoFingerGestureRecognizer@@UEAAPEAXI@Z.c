/*
 * XREFs of ??_GTwoFingerGestureRecognizer@@UEAAPEAXI@Z @ 0x1801D6030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

TwoFingerGestureRecognizer *__fastcall TwoFingerGestureRecognizer::`scalar deleting destructor'(
        TwoFingerGestureRecognizer *this,
        char a2)
{
  *((_QWORD *)this + 11) = &GestureRecognizer::`vftable';
  *((_QWORD *)this + 2) = &GestureRecognizer::`vftable';
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
