/*
 * XREFs of sub_18003EE90 @ 0x18003EE90
 * Callers:
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 *     sub_18003E4F4 @ 0x18003E4F4 (sub_18003E4F4.c)
 *     sub_18003E764 @ 0x18003E764 (sub_18003E764.c)
 *     sub_18003ED90 @ 0x18003ED90 (sub_18003ED90.c)
 *     sub_18003EF14 @ 0x18003EF14 (sub_18003EF14.c)
 *     sub_1800421D0 @ 0x1800421D0 (sub_1800421D0.c)
 *     sub_18005F4C0 @ 0x18005F4C0 (sub_18005F4C0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

_QWORD *__fastcall sub_18003EE90(__int64 *a1, __int64 *a2, _QWORD *a3)
{
  __int64 *i; // rdi
  __int64 v6; // r9
  __int64 v7; // r10
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a1; i != a2; i += 2 )
  {
    v6 = *i;
    *i = 0LL;
    v7 = i[1];
    i[1] = 0LL;
    v9[0] = *a3;
    v9[1] = a3[1];
    *a3 = v6;
    a3[1] = v7;
    sub_180010910((__int64)v9);
    a3 += 2;
  }
  return a3;
}
