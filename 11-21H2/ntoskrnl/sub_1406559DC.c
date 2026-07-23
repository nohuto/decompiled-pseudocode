/*
 * XREFs of sub_1406559DC @ 0x1406559DC
 * Callers:
 *     sub_140655828 @ 0x140655828 (sub_140655828.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406559DC(_DWORD *a1, __int64 a2)
{
  if ( !qword_140D04DB0 || !a1 )
    return 2LL;
  *a1 = sub_14042A5E0(qword_140D04DB0, a2);
  return 0LL;
}
