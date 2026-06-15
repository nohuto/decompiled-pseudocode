/*
 * XREFs of ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1800C6920
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18005F892 (_o___std_exception_copy_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this, const struct std::bad_alloc *a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
