/*
 * XREFs of ??0bad_alloc@stdext@@QEAA@AEBV01@@Z @ 0x180021CC4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

stdext::bad_alloc *__fastcall stdext::bad_alloc::bad_alloc(stdext::bad_alloc *this, const struct stdext::bad_alloc *a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  *(_QWORD *)this = &stdext::bad_alloc::`vftable';
  return this;
}
