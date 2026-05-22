/*
 * XREFs of ??_GClickRecognizer@@UEAAPEAXI@Z @ 0x1801E2570
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

ClickRecognizer *__fastcall ClickRecognizer::`scalar deleting destructor'(ClickRecognizer *this, char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
