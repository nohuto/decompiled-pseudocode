/*
 * XREFs of sub_180097908 @ 0x180097908
 * Callers:
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 *     sub_1800CB9B0 @ 0x1800CB9B0 (sub_1800CB9B0.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CFF50 @ 0x1800CFF50 (sub_1800CFF50.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180047AFC @ 0x180047AFC (sub_180047AFC.c)
 */

_QWORD *__fastcall sub_180097908(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  sub_180047AFC(a1, a2);
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    sub_180010530(v4);
  return a1;
}
