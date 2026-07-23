/*
 * XREFs of sub_140A925E8 @ 0x140A925E8
 * Callers:
 *     sub_140A82730 @ 0x140A82730 (sub_140A82730.c)
 *     sub_140A8B840 @ 0x140A8B840 (sub_140A8B840.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A925E8(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v4 = (*a2 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a2;
  if ( *((_QWORD *)&unk_140D59788 + 12 * v4) && (unsigned int)sub_14042A5E0(a1, a2) )
    return 1LL;
  result = qword_140D5A208;
  if ( qword_140D5A208 )
    return sub_14042A5E0(a1, a2);
  return result;
}
