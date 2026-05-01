/*
 * XREFs of ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x1803D442C
 * Callers:
 *     ??0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z @ 0x1803D446C (--0filesystem_error@filesystem@std@@QEAA@AEBV012@@Z.c)
 *     ??0system_error@std@@QEAA@AEBV01@@Z @ 0x1803D46A0 (--0system_error@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x18038CD08 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

std::_System_error *__fastcall std::_System_error::_System_error(
        std::_System_error *this,
        const struct std::_System_error *a2)
{
  std::_System_error *result; // rax

  std::exception::exception(this, a2);
  *(_QWORD *)this = &std::_System_error::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  return result;
}
