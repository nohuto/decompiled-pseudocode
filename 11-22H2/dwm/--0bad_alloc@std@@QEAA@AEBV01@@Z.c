/*
 * XREFs of ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x140006008
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x140006258 (_o___std_exception_copy_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this, const struct std::bad_alloc *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((char *)a2 + 8);
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
