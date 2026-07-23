/*
 * XREFs of sub_1408002F8 @ 0x1408002F8
 * Callers:
 *     sub_140A4E3A0 @ 0x140A4E3A0 (sub_140A4E3A0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void sub_1408002F8()
{
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  BYTE8(xmmword_140C54798) &= ~8u;
  LOBYTE(xmmword_140C548E0) = -1;
  sub_1403697C8(8);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
