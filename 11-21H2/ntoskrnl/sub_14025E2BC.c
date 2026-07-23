/*
 * XREFs of sub_14025E2BC @ 0x14025E2BC
 * Callers:
 *     sub_140AABB9C @ 0x140AABB9C (sub_140AABB9C.c)
 *     sub_140AABFF8 @ 0x140AABFF8 (sub_140AABFF8.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 *     sub_140AAE560 @ 0x140AAE560 (sub_140AAE560.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_14025E2BC(_DWORD *a1)
{
  *a1 = DWORD2(xmmword_140C0DF20);
  a1[1] = DWORD1(xmmword_140C0DF20);
  a1[2] = HIDWORD(xmmword_140C0DF20);
  return a1;
}
