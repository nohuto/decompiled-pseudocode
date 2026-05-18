/*
 * XREFs of sub_18002D554 @ 0x18002D554
 * Callers:
 *     sub_18002E0C0 @ 0x18002E0C0 (sub_18002E0C0.c)
 *     sub_18007FD3C @ 0x18007FD3C (sub_18007FD3C.c)
 *     sub_1800B3618 @ 0x1800B3618 (sub_1800B3618.c)
 *     sub_1800B37A4 @ 0x1800B37A4 (sub_1800B37A4.c)
 *     sub_1800B49A4 @ 0x1800B49A4 (sub_1800B49A4.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 */

__int64 __fastcall sub_18002D554(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 result; // rax
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 136);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  v7 = (__int64 *)(a1 + 136);
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v7 = (__int64 *)sub_180011088(0x58uLL);
  sub_18001DE8C(v7, (__int64 *)&v7);
  sub_18001DE8C((__int64 *)(v3 + 8), (__int64 *)&v7);
  sub_18001DE8C((__int64 *)(v4 + 16), (__int64 *)&v7);
  *(_WORD *)(v5 + 24) = 257;
  result = a1;
  *v1 = v5;
  return result;
}
