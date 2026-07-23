/*
 * XREFs of sub_140864164 @ 0x140864164
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_14081C05C @ 0x14081C05C (sub_14081C05C.c)
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_140790CA8 @ 0x140790CA8 (sub_140790CA8.c)
 *     sub_14079435C @ 0x14079435C (sub_14079435C.c)
 */

__int64 __fastcall sub_140864164(__int64 a1, ACCESS_MASK a2)
{
  if ( (*(_DWORD *)(a1 + 816) & 0x20) != 0 )
    return sub_14079435C(a2, a1);
  else
    return sub_140790CA8((__int64)&qword_14000EEE0, a2);
}
