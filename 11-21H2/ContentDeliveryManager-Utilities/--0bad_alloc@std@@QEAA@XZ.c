/*
 * XREFs of ??0bad_alloc@std@@QEAA@XZ @ 0x1800040F4
 * Callers:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800042A8 (-_Xbad_alloc@std@@YAXXZ.c)
 * Callees:
 *     ??0exception@@QEAA@AEBQEBDH@Z_0 @ 0x1800222F0 (--0exception@@QEAA@AEBQEBDH@Z_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  char *v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = "bad allocation";
  exception::exception(this, (const char *const *)&v3, 1);
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
