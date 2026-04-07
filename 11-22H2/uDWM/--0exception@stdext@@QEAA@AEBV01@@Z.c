/*
 * XREFs of ??0exception@stdext@@QEAA@AEBV01@@Z @ 0x180058548
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

stdext::exception *__fastcall stdext::exception::exception(stdext::exception *this, const struct stdext::exception *a2)
{
  *(_QWORD *)this = &stdext::exception::`vftable';
  *((_QWORD *)this + 1) = *((_QWORD *)a2 + 1);
  return this;
}
