/*
 * XREFs of sub_180059610 @ 0x180059610
 * Callers:
 *     sub_180059480 @ 0x180059480 (sub_180059480.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 * Callees:
 *     sub_180058C5C @ 0x180058C5C (sub_180058C5C.c)
 *     sub_180058D64 @ 0x180058D64 (sub_180058D64.c)
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059724 @ 0x180059724 (sub_180059724.c)
 *     sub_1800B6364 @ 0x1800B6364 (sub_1800B6364.c)
 *     sub_1800B659C @ 0x1800B659C (sub_1800B659C.c)
 *     sub_1800B6600 @ 0x1800B6600 (sub_1800B6600.c)
 */

__int64 __fastcall sub_180059610(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r8
  _DWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r10
  __m128 *v10; // r9
  __m128 *v11; // r10
  __m128 v13; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v14[168]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = (_DWORD *)sub_1800B659C(v14, a2, a1 + 256, a2);
  sub_180058D64(v3, v2);
  sub_1800B6600(v4, v5);
  v7 = (_DWORD *)sub_1800B6364(v14, v6);
  sub_180058C5C((_DWORD *)(v8 + 108), v7);
  sub_180059724(v9);
  v13 = *v10;
  return sub_1800592F4(v11, &v13);
}
