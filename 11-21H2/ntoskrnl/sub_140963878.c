/*
 * XREFs of sub_140963878 @ 0x140963878
 * Callers:
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 * Callees:
 *     sub_14075C924 @ 0x14075C924 (sub_14075C924.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 */

__int64 __fastcall sub_140963878(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *v4; // rax

  v4 = (_WORD *)sub_140842A24(a1, a2);
  if ( v4 )
    return sub_14075C924(a3, v4);
  else
    return 3221225485LL;
}
