/*
 * XREFs of sub_140995E20 @ 0x140995E20
 * Callers:
 *     sub_1405D6AC0 @ 0x1405D6AC0 (sub_1405D6AC0.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

void sub_140995E20()
{
  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  if ( (_DWORD)xmmword_140C20BD0 == 1 )
    BYTE9(xmmword_140C20BE0) = 0;
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
}
