/*
 * XREFs of ??0bad_function_call@std@@QEAA@AEBV01@@Z @ 0x18000413C
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@@QEAA@AEBV0@@Z_0 @ 0x1800221B4 (--0exception@@QEAA@AEBV0@@Z_0.c)
 */

std::bad_function_call *__fastcall std::bad_function_call::bad_function_call(
        std::bad_function_call *this,
        const struct std::bad_function_call *a2)
{
  exception::exception(this, a2);
  *(_QWORD *)this = &std::bad_function_call::`vftable';
  return this;
}
