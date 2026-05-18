/*
 * XREFs of sub_1800342AC @ 0x1800342AC
 * Callers:
 *     sub_180033280 @ 0x180033280 (sub_180033280.c)
 *     sub_180060610 @ 0x180060610 (sub_180060610.c)
 *     sub_18008AFA0 @ 0x18008AFA0 (sub_18008AFA0.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 */

_QWORD *__fastcall sub_1800342AC(__int64 a1, _QWORD *a2, int a3)
{
  __int64 *v6; // rdx
  __int64 *v7; // r9
  _QWORD *v8; // rdx
  _BYTE v10[32]; // [rsp+28h] [rbp-20h] BYREF

  sub_18002A244(a1 + 112, (__int64)v10);
  v6 = *(__int64 **)(a1 + 88);
  v7 = *(__int64 **)(a1 + 96);
  while ( v6 != v7 )
  {
    if ( (unsigned int)sub_180026650(*v6) == a3 )
    {
      sub_18001246C(a2, v8);
      goto LABEL_7;
    }
    v6 = v8 + 2;
  }
  *a2 = 0LL;
  a2[1] = 0LL;
LABEL_7:
  sub_180029FA0((__int64)v10);
  return a2;
}
