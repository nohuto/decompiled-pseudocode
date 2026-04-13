/*
 * XREFs of ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x1800520C0
 * Callers:
 *     ??0system_error@std@@QEAA@AEBV01@@Z @ 0x180052204 (--0system_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0range_error@std@@QEAA@AEBV01@@Z @ 0x18006E5A8 (--0range_error@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

std::runtime_error *__fastcall std::runtime_error::runtime_error(
        std::runtime_error *this,
        const struct std::runtime_error *a2)
{
  exception::exception(this, a2);
  *(_QWORD *)this = &std::range_error::`vftable';
  return this;
}
