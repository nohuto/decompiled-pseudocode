/*
 * XREFs of ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x180097CEC
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x180092070 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this, const struct std::bad_alloc *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
