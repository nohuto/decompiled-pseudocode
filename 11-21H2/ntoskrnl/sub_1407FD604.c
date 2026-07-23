/*
 * XREFs of sub_1407FD604 @ 0x1407FD604
 * Callers:
 *     sub_1407FCE7C @ 0x1407FCE7C (sub_1407FCE7C.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 */

void __fastcall sub_1407FD604(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 37) & 1) != 0 )
    sub_140224C00(&qword_140C22FE0);
  else
    sub_1402935D0((ULONG_PTR)&qword_140C23010);
}
