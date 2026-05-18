/*
 * XREFs of sub_1800895A0 @ 0x1800895A0
 * Callers:
 *     sub_1800894D0 @ 0x1800894D0 (sub_1800894D0.c)
 *     sub_180089780 @ 0x180089780 (sub_180089780.c)
 *     sub_1800897E0 @ 0x1800897E0 (sub_1800897E0.c)
 *     sub_1800898D0 @ 0x1800898D0 (sub_1800898D0.c)
 * Callees:
 *     sub_180089670 @ 0x180089670 (sub_180089670.c)
 */

__int64 __fastcall sub_1800895A0(void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180089670(v1);
  return result;
}
