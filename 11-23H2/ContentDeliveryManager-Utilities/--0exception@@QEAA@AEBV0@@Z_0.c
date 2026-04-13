/*
 * XREFs of ??0exception@@QEAA@AEBV0@@Z_0 @ 0x1800229C4
 * Callers:
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x18000475C (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_function_call@std@@QEAA@AEBV01@@Z @ 0x1800047CC (--0bad_function_call@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x180004824 (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
exception *__fastcall exception::exception(exception *this, const struct exception *a2)
{
  return __imp_??0exception@@QEAA@AEBV0@@Z(this, a2);
}
