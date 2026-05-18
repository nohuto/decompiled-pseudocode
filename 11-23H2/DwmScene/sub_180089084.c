/*
 * XREFs of sub_180089084 @ 0x180089084
 * Callers:
 *     sub_1800894D0 @ 0x1800894D0 (sub_1800894D0.c)
 *     sub_1800898D0 @ 0x1800898D0 (sub_1800898D0.c)
 * Callees:
 *     sub_180088934 @ 0x180088934 (sub_180088934.c)
 */

_QWORD *__fastcall sub_180089084(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, __int64))*a1;
  *a1 = v2;
  if ( v4 )
    sub_180088934((__int64)a1, v4);
  return a1;
}
