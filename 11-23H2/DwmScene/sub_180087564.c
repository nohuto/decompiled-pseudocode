/*
 * XREFs of sub_180087564 @ 0x180087564
 * Callers:
 *     sub_180087790 @ 0x180087790 (sub_180087790.c)
 *     sub_1800877F4 @ 0x1800877F4 (sub_1800877F4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180054C80 @ 0x180054C80 (sub_180054C80.c)
 */

__int64 __fastcall sub_180087564(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx

  v2 = a2;
  if ( a2 == 1 )
  {
    a1[22] = 0LL;
    v4 = a1[23];
    a1[23] = 0LL;
    if ( v4 )
      sub_180010530(v4);
  }
  sub_180054C80(a1 + 60);
  return sub_180050D08(&a1[2 * v2 + 48]);
}
