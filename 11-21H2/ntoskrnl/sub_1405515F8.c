/*
 * XREFs of sub_1405515F8 @ 0x1405515F8
 * Callers:
 *     sub_140551414 @ 0x140551414 (sub_140551414.c)
 *     sub_140551530 @ 0x140551530 (sub_140551530.c)
 *     sub_140551580 @ 0x140551580 (sub_140551580.c)
 *     BgkDisplayCharacter @ 0x140AB0670 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AB0740 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AB0790 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AB0820 (BgkSetCursor.c)
 * Callees:
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

bool sub_1405515F8()
{
  return sub_140347810(&RunRef) != 0;
}
