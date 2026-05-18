/*
 * XREFs of sub_1800291D8 @ 0x1800291D8
 * Callers:
 *     sub_18002920C @ 0x18002920C (sub_18002920C.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 * Callees:
 *     sub_180070B70 @ 0x180070B70 (sub_180070B70.c)
 *     sub_180070B94 @ 0x180070B94 (sub_180070B94.c)
 */

__int64 __fastcall sub_1800291D8(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r10

  *(_DWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v3 = sub_180070B94();
  sub_180070B70(v3, v4, 2LL, v5);
  return v6;
}
