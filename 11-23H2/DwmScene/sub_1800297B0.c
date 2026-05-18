/*
 * XREFs of sub_1800297B0 @ 0x1800297B0
 * Callers:
 *     sub_180088DF8 @ 0x180088DF8 (sub_180088DF8.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CD8AC @ 0x1800CD8AC (sub_1800CD8AC.c)
 *     sub_1800D3790 @ 0x1800D3790 (sub_1800D3790.c)
 *     sub_1800D4730 @ 0x1800D4730 (sub_1800D4730.c)
 *     sub_1800D55C0 @ 0x1800D55C0 (sub_1800D55C0.c)
 *     sub_1800D71F0 @ 0x1800D71F0 (sub_1800D71F0.c)
 *     sub_1800D7480 @ 0x1800D7480 (sub_1800D7480.c)
 *     sub_1800D7720 @ 0x1800D7720 (sub_1800D7720.c)
 *     sub_1800D79D0 @ 0x1800D79D0 (sub_1800D79D0.c)
 *     sub_1800D8450 @ 0x1800D8450 (sub_1800D8450.c)
 * Callees:
 *     sub_1800291D8 @ 0x1800291D8 (sub_1800291D8.c)
 *     sub_18002933C @ 0x18002933C (sub_18002933C.c)
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 */

__int64 __fastcall sub_1800297B0(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned int *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v18[6]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  if ( a3 == 15 )
    v3 = *(_DWORD *)(a1 + 48);
  sub_1800291D8((__int64)v18, v3, a2);
  v9 = sub_180070B94(v6, v5, v7, v8);
  sub_180070B70(v9, *(unsigned int *)(a1 + 56), 2LL, -*(_QWORD *)(a1 + 64));
  v11 = *v10;
  *(_DWORD *)(a1 + 56) = v11;
  v12 = *((_QWORD *)v10 + 1);
  *(_QWORD *)(a1 + 64) = v12;
  sub_180070B70(v14, v11, v13, v12);
  return sub_18002933C(v18, v15, v16);
}
