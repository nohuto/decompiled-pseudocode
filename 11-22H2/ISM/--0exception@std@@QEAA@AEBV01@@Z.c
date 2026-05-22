/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800A4C50
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1800A4AA0 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1800AA2E8 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x1800AA310 (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x1800AB0B8 (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1800ADDE4 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_variant_access@std@@QEAA@AEBV01@@Z @ 0x1800BD3A8 (--0bad_variant_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x180112E48 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x18005722E (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
