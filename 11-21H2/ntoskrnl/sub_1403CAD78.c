/*
 * XREFs of sub_1403CAD78 @ 0x1403CAD78
 * Callers:
 *     sub_1403A7CAC @ 0x1403A7CAC (sub_1403A7CAC.c)
 *     sub_1403CACA0 @ 0x1403CACA0 (sub_1403CACA0.c)
 *     sub_140AAC868 @ 0x140AAC868 (sub_140AAC868.c)
 *     sub_140AB1844 @ 0x140AB1844 (sub_140AB1844.c)
 *     sub_140B55FC4 @ 0x140B55FC4 (sub_140B55FC4.c)
 * Callees:
 *     sub_1403CADA8 @ 0x1403CADA8 (sub_1403CADA8.c)
 */

__int64 __fastcall sub_1403CAD78(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  sub_1403CADA8(a1, a2 + 4, a2);
  return 0LL;
}
