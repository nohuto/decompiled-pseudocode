/*
 * XREFs of sub_14098FC84 @ 0x14098FC84
 * Callers:
 *     sub_140A6927C @ 0x140A6927C (sub_140A6927C.c)
 * Callees:
 *     sub_1407FE82C @ 0x1407FE82C (sub_1407FE82C.c)
 */

__int64 __fastcall sub_14098FC84(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 11;
  return sub_1407FE82C(a1, (__int64)&v3);
}
