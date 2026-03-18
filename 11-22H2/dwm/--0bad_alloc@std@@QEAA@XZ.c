/*
 * XREFs of ??0bad_alloc@std@@QEAA@XZ @ 0x14000604C
 * Callers:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x140006174 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 * Callees:
 *     <none>
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad allocation";
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
