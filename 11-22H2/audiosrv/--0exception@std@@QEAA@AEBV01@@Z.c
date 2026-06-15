/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800CC4C8
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x180067902 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
