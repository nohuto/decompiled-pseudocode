/*
 * XREFs of sub_1409899DC @ 0x1409899DC
 * Callers:
 *     sub_1407EE90C @ 0x1407EE90C (sub_1407EE90C.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void __fastcall sub_1409899DC(char a1)
{
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  HIBYTE(xmmword_140C54798) = (a1 << 7) | HIBYTE(xmmword_140C54798) & 0x7F;
  sub_1403697C8(1);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
