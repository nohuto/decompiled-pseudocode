/*
 * XREFs of sub_1800D70B0 @ 0x1800D70B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D5B6C @ 0x1800D5B6C (sub_1800D5B6C.c)
 */

__int64 __fastcall sub_1800D70B0(__int64 a1, __int64 *a2, int *a3, unsigned int *a4)
{
  __int64 v4; // rax
  unsigned int v5; // r9d
  int v6; // r8d
  __int64 v7; // rax
  __int64 v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  v5 = *a4;
  v6 = *a3;
  *a2 = 0LL;
  v9[0] = v4;
  v7 = a2[1];
  a2[1] = 0LL;
  v9[1] = v7;
  return sub_1800D5B6C(a1 + 8, v9, v6, v5);
}
