/*
 * XREFs of ??_GTwoFingerClickRecognizer@@UEAAPEAXI@Z @ 0x1801E4610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

TwoFingerClickRecognizer *__fastcall TwoFingerClickRecognizer::`scalar deleting destructor'(
        TwoFingerClickRecognizer *this,
        char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
