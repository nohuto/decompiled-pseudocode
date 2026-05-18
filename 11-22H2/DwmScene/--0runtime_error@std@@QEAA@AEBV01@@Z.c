/*
 * XREFs of ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x180017914
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::runtime_error *__fastcall std::runtime_error::runtime_error(
        std::runtime_error *this,
        const struct std::runtime_error *a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = &std::runtime_error::`vftable';
  return this;
}
