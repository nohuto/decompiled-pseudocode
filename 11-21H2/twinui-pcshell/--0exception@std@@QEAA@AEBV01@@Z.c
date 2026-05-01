/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1802D662C
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1802D63EC (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1802D6530 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x1802D66E0 (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x1802DF3F4 (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x1802DF444 (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0Exception@cereal@@QEAA@AEBU01@@Z @ 0x18034C3E4 (--0Exception@cereal@@QEAA@AEBU01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x1803F8D78 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??0_System_error@std@@QEAA@AEBV01@@Z @ 0x18057E8EC (--0_System_error@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x180188DB6 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0((__int64)a2 + 8, (__int64)this + 8);
  return this;
}
