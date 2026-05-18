/*
 * XREFs of sub_180094524 @ 0x180094524
 * Callers:
 *     sub_1801068C0 @ 0x1801068C0 (sub_1801068C0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 */

__int64 __fastcall sub_180094524(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
    {
      sub_180088D1C(*v1, v1[1]);
      result = sub_180010884((char *)*v1, 16 * ((v1[2] - *v1) >> 4));
      *v1 = 0LL;
      v1[1] = 0LL;
      v1[2] = 0LL;
    }
  }
  return result;
}
