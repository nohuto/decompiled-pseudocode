/*
 * XREFs of sub_14080D294 @ 0x14080D294
 * Callers:
 *     sub_14080D028 @ 0x14080D028 (sub_14080D028.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_1403697C8 @ 0x1403697C8 (sub_1403697C8.c)
 */

void __fastcall sub_14080D294(char a1)
{
  sub_1402D66A8((ULONG_PTR)&qword_140C24600);
  BYTE14(xmmword_140C54798) = BYTE14(xmmword_140C54798) & 0x3F | ((a1 + 1) << 6);
  sub_1403697C8(1);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
