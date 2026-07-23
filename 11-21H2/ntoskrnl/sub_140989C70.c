/*
 * XREFs of sub_140989C70 @ 0x140989C70
 * Callers:
 *     sub_140A6AEC0 @ 0x140A6AEC0 (sub_140A6AEC0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void sub_140989C70()
{
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  BYTE8(xmmword_140C54798) &= ~1u;
  sub_1403697C8(8);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
