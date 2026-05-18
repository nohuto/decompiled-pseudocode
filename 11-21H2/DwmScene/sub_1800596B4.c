/*
 * XREFs of sub_1800596B4 @ 0x1800596B4
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 * Callees:
 *     sub_180058C5C @ 0x180058C5C (sub_180058C5C.c)
 *     sub_180058D64 @ 0x180058D64 (sub_180058D64.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059724 @ 0x180059724 (sub_180059724.c)
 *     sub_1800B62C0 @ 0x1800B62C0 (sub_1800B62C0.c)
 *     sub_1800B6634 @ 0x1800B6634 (sub_1800B6634.c)
 */

__int64 __fastcall sub_1800596B4(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r9
  __m128 *v7; // r9
  __int128 v9; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v10[152]; // [rsp+30h] [rbp-98h] BYREF

  sub_180058C5C((_DWORD *)(a1 + 108), a2);
  *(_DWORD *)(v2 + 252) = 2;
  sub_1800B62C0();
  v4 = (_DWORD *)sub_1800B6634(v10, v3);
  sub_180058D64((_DWORD *)(v5 + 256), v4);
  sub_180059724(v6);
  v9 = xmmword_1801289A8;
  return sub_1800592F4(v7, (__m128 *)&v9);
}
