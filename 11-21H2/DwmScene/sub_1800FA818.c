/*
 * XREFs of sub_1800FA818 @ 0x1800FA818
 * Callers:
 *     sub_1800F7A7C @ 0x1800F7A7C (sub_1800F7A7C.c)
 *     sub_1800F7D18 @ 0x1800F7D18 (sub_1800F7D18.c)
 *     sub_1800F84E0 @ 0x1800F84E0 (sub_1800F84E0.c)
 *     sub_1800F8560 @ 0x1800F8560 (sub_1800F8560.c)
 *     sub_1800F860C @ 0x1800F860C (sub_1800F860C.c)
 *     sub_1800F868C @ 0x1800F868C (sub_1800F868C.c)
 *     sub_1800F8E90 @ 0x1800F8E90 (sub_1800F8E90.c)
 *     sub_1800F9EB8 @ 0x1800F9EB8 (sub_1800F9EB8.c)
 *     sub_1800FA084 @ 0x1800FA084 (sub_1800FA084.c)
 *     sub_18010D265 @ 0x18010D265 (sub_18010D265.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_1800F868C @ 0x1800F868C (sub_1800F868C.c)
 */

__int64 __fastcall sub_1800FA818(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  sub_180010884(*(char **)(a1 + 88), (*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  result = sub_1800F868C((char **)(a1 + 72));
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 >= 8 )
    result = sub_180010884(*(char **)(a1 + 8), 2 * v3 + 2);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 7LL;
  *(_WORD *)(a1 + 8) = 0;
  return result;
}
