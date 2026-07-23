/*
 * XREFs of sub_140A92934 @ 0x140A92934
 * Callers:
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A92934(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( *a2 > 0x1Bu )
    v4 = (*a2 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a2;
  if ( *((_QWORD *)&unk_140D59768 + 12 * v4) )
    sub_14042A5E0(a1, a2);
  result = qword_140D5A1E8;
  if ( qword_140D5A1E8 )
    return sub_14042A5E0(a1, a2);
  return result;
}
