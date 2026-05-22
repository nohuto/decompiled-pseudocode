/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x18007B234
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x18007B0B4 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x180080820 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x180080848 (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x180081840 (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1800847E8 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_variant_access@std@@QEAA@AEBV01@@Z @ 0x180094580 (--0bad_variant_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x1800EB6BC (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18004A72E (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
