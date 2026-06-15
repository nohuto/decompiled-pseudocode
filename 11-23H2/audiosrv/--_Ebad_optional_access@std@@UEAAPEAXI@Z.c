/*
 * XREFs of ??_Ebad_optional_access@std@@UEAAPEAXI@Z @ 0x1800CC740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _o___std_exception_destroy_0 @ 0x18006791E (_o___std_exception_destroy_0.c)
 */

std::bad_optional_access *__fastcall std::bad_optional_access::`vector deleting destructor'(
        std::bad_optional_access *this,
        char a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
