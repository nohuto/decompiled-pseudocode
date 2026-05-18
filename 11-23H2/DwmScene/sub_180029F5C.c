/*
 * XREFs of sub_180029F5C @ 0x180029F5C
 * Callers:
 *     sub_180025598 @ 0x180025598 (sub_180025598.c)
 *     sub_18002B444 @ 0x18002B444 (sub_18002B444.c)
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 *     sub_18003FBE0 @ 0x18003FBE0 (sub_18003FBE0.c)
 *     sub_18003FC8C @ 0x18003FC8C (sub_18003FC8C.c)
 * Callees:
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

__int64 __fastcall sub_180029F5C(__int64 a1, int a2)
{
  sub_1800E0D60(a1);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
