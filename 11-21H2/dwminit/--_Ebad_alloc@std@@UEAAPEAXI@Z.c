/*
 * XREFs of ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180003090
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_destroy_0 @ 0x180002552 (_o___std_exception_destroy_0.c)
 *     ??3@YAXPEAX@Z @ 0x180003148 (--3@YAXPEAX@Z.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::`vector deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
