/*
 * XREFs of sub_1406EF10C @ 0x1406EF10C
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_1406EF140 @ 0x1406EF140 (sub_1406EF140.c)
 */

__int64 __fastcall sub_1406EF10C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int *v6; // rcx

  if ( (unsigned int)a2 < 0xB0 || (unsigned int)a3 < 0xB0 )
    return 3221225990LL;
  result = sub_1406EF140(a1, a2, a3, a4);
  if ( (int)result < 0 )
    return result;
  if ( *v6 > v5 )
    return 3221225990LL;
  return 0LL;
}
