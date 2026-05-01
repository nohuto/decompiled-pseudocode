/*
 * XREFs of ??0system_error@std@@QEAA@AEBV01@@Z @ 0x1803D46A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x1803D442C (--0_System_error@std@@QEAA@AEBV01@@Z.c)
 */

std::system_error *__fastcall std::system_error::system_error(
        std::system_error *this,
        const struct std::system_error *a2)
{
  std::_System_error::_System_error(this, a2);
  *(_QWORD *)this = &std::system_error::`vftable';
  return this;
}
