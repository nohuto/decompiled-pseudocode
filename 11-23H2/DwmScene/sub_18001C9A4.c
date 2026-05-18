/*
 * XREFs of sub_18001C9A4 @ 0x18001C9A4
 * Callers:
 *     sub_18001D308 @ 0x18001D308 (sub_18001D308.c)
 *     sub_18001D35C @ 0x18001D35C (sub_18001D35C.c)
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 *     sub_1800F2560 @ 0x1800F2560 (sub_1800F2560.c)
 * Callees:
 *     sub_18001C9D4 @ 0x18001C9D4 (sub_18001C9D4.c)
 */

__int64 __fastcall sub_18001C9A4(void **a1, __int64 a2)
{
  sub_18001C9D4(a1, a2, *((_QWORD *)*a1 + 1));
  return sub_1800100E8(*a1, 0x68uLL);
}
