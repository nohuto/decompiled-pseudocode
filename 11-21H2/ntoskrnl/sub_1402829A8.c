/*
 * XREFs of sub_1402829A8 @ 0x1402829A8
 * Callers:
 *     sub_14025F440 @ 0x14025F440 (sub_14025F440.c)
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_1402704A0 @ 0x1402704A0 (sub_1402704A0.c)
 *     sub_1402A188C @ 0x1402A188C (sub_1402A188C.c)
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 * Callees:
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 */

__int64 __fastcall sub_1402829A8(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(sub_140282AD0(a1) + 24);
}
