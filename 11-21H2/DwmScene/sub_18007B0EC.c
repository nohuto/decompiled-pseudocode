/*
 * XREFs of sub_18007B0EC @ 0x18007B0EC
 * Callers:
 *     sub_1801046B7 @ 0x1801046B7 (sub_1801046B7.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18007AD28 @ 0x18007AD28 (sub_18007AD28.c)
 */

__int64 __fastcall sub_18007B0EC(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
    {
      sub_18007AD28(*v1, v1[1]);
      result = sub_180010884((char *)*v1, (v1[2] - *v1) & 0xFFFFFFFFFFFFFF80uLL);
      *v1 = 0LL;
      v1[1] = 0LL;
      v1[2] = 0LL;
    }
  }
  return result;
}
