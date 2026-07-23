/*
 * XREFs of sub_140A92668 @ 0x140A92668
 * Callers:
 *     sub_140A82730 @ 0x140A82730 (sub_140A82730.c)
 *     sub_140A82930 @ 0x140A82930 (sub_140A82930.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A92668(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax

  v2 = a2;
  if ( *a1 > 0x1Bu )
    v4 = (*a1 != 0xFF) + 28LL;
  else
    v4 = (unsigned __int8)*a1;
  if ( (!*((_QWORD *)&unk_140D59780 + 12 * v4) || (unsigned int)sub_14042A5E0(a1, a2)) && qword_140D5A200 )
    return sub_14042A5E0(a1, v2);
  else
    return 0LL;
}
