/*
 * XREFs of sub_14023B354 @ 0x14023B354
 * Callers:
 *     sub_1402C6EB0 @ 0x1402C6EB0 (sub_1402C6EB0.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 * Callees:
 *     sub_14023B3C8 @ 0x14023B3C8 (sub_14023B3C8.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 */

__int64 __fastcall sub_14023B354(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL));
  v3 = sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4));
  return sub_14023B3C8(v2, sub_14023BE50, a1, *(unsigned int *)(v3 + 8));
}
