/*
 * XREFs of sub_180033188 @ 0x180033188
 * Callers:
 *     sub_180019608 @ 0x180019608 (sub_180019608.c)
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 * Callees:
 *     sub_18002E324 @ 0x18002E324 (sub_18002E324.c)
 *     sub_18003027C @ 0x18003027C (sub_18003027C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180033188(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v8 = 0;
  v7 = 1;
  sub_18003027C(a2, a1, &v7, &v9);
  v8 = 1;
  sub_18002E324(a1 + 168, *(_QWORD *)(a1 + 168), a2);
  return a2;
}
