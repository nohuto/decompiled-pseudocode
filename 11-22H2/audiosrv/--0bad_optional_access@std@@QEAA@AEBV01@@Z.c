/*
 * XREFs of ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1800F1B68
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x180067902 (_o___std_exception_copy_0.c)
 */

std::bad_optional_access *__fastcall std::bad_optional_access::bad_optional_access(
        std::bad_optional_access *this,
        const struct std::bad_optional_access *a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &std::bad_optional_access::`vftable';
  return this;
}
