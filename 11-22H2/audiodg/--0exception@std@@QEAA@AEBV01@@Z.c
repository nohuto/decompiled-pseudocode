/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x14004B1A0
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x14004B0C0 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x140064C00 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_array_new_length@std@@QEAA@AEBV01@@Z @ 0x140064C28 (--0bad_array_new_length@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x14009CDB4 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x140029096 (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  return this;
}
