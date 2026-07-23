/*
 * XREFs of sub_140942CE4 @ 0x140942CE4
 * Callers:
 *     IoResolveDependency @ 0x1403CBF80 (IoResolveDependency.c)
 * Callees:
 *     sub_14055FDDC @ 0x14055FDDC (sub_14055FDDC.c)
 *     sub_14085CA14 @ 0x14085CA14 (sub_14085CA14.c)
 *     sub_140942B68 @ 0x140942B68 (sub_140942B68.c)
 */

void __fastcall sub_140942CE4(_DWORD *P, _DWORD *a2)
{
  bool v4; // zf

  ++P[22];
  ++a2[22];
  P[23] |= a2[23];
  sub_14055FDDC((_QWORD *)P + 7, (__int64)(a2 + 14));
  sub_140942B68((__int64)P, (__int64)a2, 0);
  sub_140942B68((__int64)P, (__int64)a2, 1);
  v4 = P[22]-- == 1;
  if ( v4 )
    sub_14085CA14(P);
  v4 = a2[22]-- == 1;
  if ( v4 )
    sub_14085CA14(a2);
}
