/*
 * XREFs of ??_GFlickRecognizer@@UEAAPEAXI@Z @ 0x1801B5D10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 */

FlickRecognizer *__fastcall FlickRecognizer::`scalar deleting destructor'(FlickRecognizer *this, char a2)
{
  *(_QWORD *)this = &GestureRecognizer::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
