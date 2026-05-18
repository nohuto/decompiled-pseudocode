/*
 * XREFs of ??_Gbad_alloc@stdext@@UEAAPEAXI@Z @ 0x18000D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

stdext::bad_alloc *__fastcall stdext::bad_alloc::`scalar deleting destructor'(stdext::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
