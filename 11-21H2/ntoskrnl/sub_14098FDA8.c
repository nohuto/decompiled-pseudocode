/*
 * XREFs of sub_14098FDA8 @ 0x14098FDA8
 * Callers:
 *     sub_140A68674 @ 0x140A68674 (sub_140A68674.c)
 * Callees:
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 */

__int64 __fastcall sub_14098FDA8(_DWORD *a1, int a2)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  a1[4] = 10;
  sub_1407FE82C(a1, (__int64)&v4);
  a1[4] = 9;
  return sub_1407FE82C(a1, 0LL);
}
