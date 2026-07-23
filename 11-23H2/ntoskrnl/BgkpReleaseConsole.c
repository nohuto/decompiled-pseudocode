/*
 * XREFs of BgkpReleaseConsole @ 0x14054F694
 * Callers:
 *     BgkDisplayCharacter @ 0x140AF0F80 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AF1050 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AF10A0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AF1130 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140C0BD48);
}
