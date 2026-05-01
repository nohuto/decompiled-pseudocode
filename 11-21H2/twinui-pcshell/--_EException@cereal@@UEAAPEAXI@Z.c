/*
 * XREFs of ??_EException@cereal@@UEAAPEAXI@Z @ 0x1802D6EA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _o___std_exception_destroy_0 @ 0x180188DC2 (_o___std_exception_destroy_0.c)
 */

cereal::Exception *__fastcall cereal::Exception::`vector deleting destructor'(cereal::Exception *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
