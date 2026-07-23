/*
 * XREFs of sub_140A9247C @ 0x140A9247C
 * Callers:
 *     sub_140A8C1BC @ 0x140A8C1BC (sub_140A8C1BC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A9247C(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // rax

  v2 = a2;
  if ( dword_140C0B1F8 <= 2 || (dword_140C29FC0 & 0x1000) == 0 )
    return 0LL;
  if ( *a1 > 0x1Bu )
    v4 = (*a1 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a1;
  if ( *((_QWORD *)&unk_140D59778 + 12 * v4) && (unsigned int)sub_14042A5E0(a1, a2) )
    return 1LL;
  if ( qword_140D5A1F8 )
    return sub_14042A5E0(a1, v2);
  else
    return 0LL;
}
