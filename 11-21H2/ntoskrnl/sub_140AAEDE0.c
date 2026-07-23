/*
 * XREFs of sub_140AAEDE0 @ 0x140AAEDE0
 * Callers:
 *     sub_1403DC330 @ 0x1403DC330 (sub_1403DC330.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140AAEDE0(_DWORD *a1)
{
  if ( !(_BYTE)qword_140C0E110 )
    return 0;
  *a1 = HIDWORD(qword_140C0E110);
  return 1;
}
