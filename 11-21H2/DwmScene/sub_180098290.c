/*
 * XREFs of sub_180098290 @ 0x180098290
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180097FDC @ 0x180097FDC (sub_180097FDC.c)
 */

__int64 *__fastcall sub_180098290(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = sub_180097FDC(a3, v8);
  v5 = *v4;
  *v4 = 0LL;
  *a2 = v5;
  v6 = v4[1];
  v4[1] = 0LL;
  a2[1] = v6;
  sub_180010910((__int64)v8);
  return a2;
}
