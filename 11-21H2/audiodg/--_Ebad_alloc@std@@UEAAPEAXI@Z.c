/*
 * XREFs of ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x14004D820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 *     _o___std_exception_destroy_0 @ 0x140030822 (_o___std_exception_destroy_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::`vector deleting destructor'(std::bad_alloc *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
