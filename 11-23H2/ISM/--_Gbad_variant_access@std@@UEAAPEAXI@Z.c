/*
 * XREFs of ??_Gbad_variant_access@std@@UEAAPEAXI@Z @ 0x180092850
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_destroy_0 @ 0x1800564AA (_o___std_exception_destroy_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 */

std::bad_variant_access *__fastcall std::bad_variant_access::`scalar deleting destructor'(
        std::bad_variant_access *this,
        char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
