/*
 * XREFs of sub_1800D45E8 @ 0x1800D45E8
 * Callers:
 *     sub_1800D41F0 @ 0x1800D41F0 (sub_1800D41F0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001E9F4 @ 0x18001E9F4 (sub_18001E9F4.c)
 *     sub_1800D3A00 @ 0x1800D3A00 (sub_1800D3A00.c)
 */

__int64 __fastcall sub_1800D45E8(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  char *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 5;
  v5 = sub_18001E9F4(a2);
  v6 = (char *)sub_18001090C(v5);
  sub_1800D3A00(*(void **)a1, *(_QWORD *)(a1 + 8), v6);
  return sub_1800D4578(a1, (__int64)v6, v4, a2);
}
