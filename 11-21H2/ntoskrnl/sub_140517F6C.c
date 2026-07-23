/*
 * XREFs of sub_140517F6C @ 0x140517F6C
 * Callers:
 *     sub_140A64F30 @ 0x140A64F30 (sub_140A64F30.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall sub_140517F6C(void *a1, void *a2, unsigned int a3)
{
  PoSetHiberRange(a1, a1 != 0LL ? 2 : 0x10000, a2, a3, 0x496C6148u);
}
