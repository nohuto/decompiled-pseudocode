/*
 * XREFs of sub_14023A0BC @ 0x14023A0BC
 * Callers:
 *     sub_140236030 @ 0x140236030 (sub_140236030.c)
 *     sub_14023A080 @ 0x14023A080 (sub_14023A080.c)
 *     sub_14023A0A0 @ 0x14023A0A0 (sub_14023A0A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_14023A0BC(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !a1 )
    return 1;
  sub_14042A5E0(sub_14045E1C0, a2);
  return v2;
}
