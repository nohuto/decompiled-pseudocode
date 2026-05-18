/*
 * XREFs of sub_18005BA84 @ 0x18005BA84
 * Callers:
 *     sub_18005A490 @ 0x18005A490 (sub_18005A490.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_180072240 @ 0x180072240 (sub_180072240.c)
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 *     sub_180097C50 @ 0x180097C50 (sub_180097C50.c)
 *     sub_18009C1D0 @ 0x18009C1D0 (sub_18009C1D0.c)
 *     sub_18009C480 @ 0x18009C480 (sub_18009C480.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_1800435C8 @ 0x1800435C8 (sub_1800435C8.c)
 */

_QWORD *__fastcall sub_18005BA84(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 448);
  v7 = sub_180026650(*a3);
  v5 = sub_1800435C8((__int64)v3, (__int64)&v7);
  if ( v5 == *v3 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_18001246C(a2, (_QWORD *)(v5 + 40));
  }
  return a2;
}
