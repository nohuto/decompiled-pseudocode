/*
 * XREFs of sub_180021D44 @ 0x180021D44
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180021D44(_QWORD *a1, __int64 a2)
{
  *a1 = &stdext::exception::`vftable';
  a1[1] = *(_QWORD *)(a2 + 8);
  *a1 = &stdext::bad_alloc::`vftable';
  return a1;
}
