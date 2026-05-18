/*
 * XREFs of ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x180003090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000253C (--3@YAXPEAX@Z.c)
 *     _o___std_exception_destroy_0 @ 0x180002562 (_o___std_exception_destroy_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::`vector deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
