/*
 * XREFs of sub_180081F78 @ 0x180081F78
 * Callers:
 *     sub_180050BF0 @ 0x180050BF0 (sub_180050BF0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_1800105A8 @ 0x1800105A8 (sub_1800105A8.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001B880 @ 0x18001B880 (sub_18001B880.c)
 *     sub_180083B60 @ 0x180083B60 (sub_180083B60.c)
 *     sub_180083BBC @ 0x180083BBC (sub_180083BBC.c)
 */

__int64 __fastcall sub_180081F78(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  sub_1800105A8((__int64)(a1 + 152));
  sub_1800105A8((__int64)(a1 + 149));
  v2 = a1[148];
  if ( v2 )
    sub_180010530(v2);
  v3 = a1[145];
  if ( v3 )
    sub_180010530(v3);
  sub_180083BBC(a1 + 13);
  sub_18001B880((__int64)(a1 + 10));
  sub_180083B60(a1 + 7);
  result = sub_180011B24((__int64)(a1 + 2));
  v5 = (volatile signed __int32 *)a1[1];
  if ( v5 )
    return sub_180010574(v5);
  return result;
}
