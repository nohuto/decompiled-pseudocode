/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x18038CD08
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x18038CAFC (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x18038CC0C (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x18038CDD4 (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x18039154C (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x180396204 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x1803D442C (--0_System_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0Exception@cereal@@QEAA@AEBU01@@Z @ 0x1803E2D78 (--0Exception@cereal@@QEAA@AEBU01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x1804D4220 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x1801C7312 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((__int64)a2 + 8, (__int64)this + 8);
  return this;
}
