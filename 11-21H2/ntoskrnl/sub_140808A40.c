/*
 * XREFs of sub_140808A40 @ 0x140808A40
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140809508 @ 0x140809508 (sub_140809508.c)
 */

void __fastcall sub_140808A40(__int64 a1, __int64 a2)
{
  if ( qword_140C5ADE8 )
    sub_14042A5E0(a1, a2);
  sub_1402D66A8((ULONG_PTR)&qword_140C21D20);
  if ( (_DWORD)xmmword_140C20BF8 == 2 )
  {
    LOBYTE(xmmword_140C20C08) = 1;
    sub_140809508(&qword_140C20BC0);
  }
  sub_1402935D0((ULONG_PTR)&qword_140C21D20);
}
