/*
 * XREFs of ??_GPinchStretchRecognizer@@UEAAPEAXI@Z @ 0x1801E2100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

PinchStretchRecognizer *__fastcall PinchStretchRecognizer::`scalar deleting destructor'(
        PinchStretchRecognizer *this,
        char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
