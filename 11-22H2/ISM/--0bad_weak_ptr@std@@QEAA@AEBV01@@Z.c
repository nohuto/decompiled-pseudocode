/*
 * XREFs of ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x180112E48
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800A4C50 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::bad_weak_ptr *__fastcall std::bad_weak_ptr::bad_weak_ptr(
        std::bad_weak_ptr *this,
        const struct std::bad_weak_ptr *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_weak_ptr::`vftable';
  return this;
}
