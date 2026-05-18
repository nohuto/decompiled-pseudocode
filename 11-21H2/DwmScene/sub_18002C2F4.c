/*
 * XREFs of sub_18002C2F4 @ 0x18002C2F4
 * Callers:
 *     sub_180027068 @ 0x180027068 (sub_180027068.c)
 *     sub_18002D060 @ 0x18002D060 (sub_18002D060.c)
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 *     sub_1800447C8 @ 0x1800447C8 (sub_1800447C8.c)
 *     sub_180044918 @ 0x180044918 (sub_180044918.c)
 * Callees:
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

__int64 __fastcall sub_18002C2F4(__int64 a1, int a2)
{
  sub_1800FC230(a1);
  *(_DWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
