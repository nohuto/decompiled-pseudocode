/*
 * XREFs of sub_18001D168 @ 0x18001D168
 * Callers:
 *     sub_18001C8BC @ 0x18001C8BC (sub_18001C8BC.c)
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 * Callees:
 *     sub_18001D0F4 @ 0x18001D0F4 (sub_18001D0F4.c)
 */

_DWORD *__fastcall sub_18001D168(_DWORD *a1, _DWORD *a2)
{
  *a1 = *a2;
  sub_18001D0F4((__int64)(a1 + 2), (__int64)(a2 + 2));
  return a1;
}
