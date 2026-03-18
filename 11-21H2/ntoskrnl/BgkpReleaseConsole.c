/*
 * XREFs of BgkpReleaseConsole @ 0x140551644
 * Callers:
 *     BgkDisplayCharacter @ 0x140AB0670 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AB0740 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AB0790 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AB0820 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection(&stru_140C0B8C8);
}
