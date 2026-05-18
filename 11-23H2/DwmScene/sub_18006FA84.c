/*
 * XREFs of sub_18006FA84 @ 0x18006FA84
 * Callers:
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 * Callees:
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_180055EA0 @ 0x180055EA0 (sub_180055EA0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006FA84(__int64 *a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // r8
  __int64 v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]

  sub_180016268(a2, a1);
  sub_180029870(*a1, 1, 0);
  sub_180029870(*a1, v10 + 2, v10);
  sub_180029870(*a1, v11 + 4, v11);
  sub_180055EA0(*a1, a3, a4, 0, a5, a6, a7, (const void *)(v12 & v14), v12 & v15, v12 & v16);
  return a1;
}
