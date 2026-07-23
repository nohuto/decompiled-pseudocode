/*
 * XREFs of sub_1403CF630 @ 0x1403CF630
 * Callers:
 *     sub_1403CF51C @ 0x1403CF51C (sub_1403CF51C.c)
 *     sub_1405B3268 @ 0x1405B3268 (sub_1405B3268.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 * Callees:
 *     sub_1403CF698 @ 0x1403CF698 (sub_1403CF698.c)
 */

__int64 __fastcall sub_1403CF630(_QWORD *a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // rdx
  __int64 v3; // rax

  v1 = a1[2187];
  v2 = v1 / 0xA;
  if ( v1 / 0xA > 0x10000 )
    v2 = 0x10000LL;
  a1[2004] = v1 - v2;
  v3 = v1 >> 2;
  if ( v1 >> 2 > 0x100000 )
    v3 = 0x100000LL;
  a1[2003] = v1 - v3;
  return sub_1403CF698(a1, 1LL);
}
