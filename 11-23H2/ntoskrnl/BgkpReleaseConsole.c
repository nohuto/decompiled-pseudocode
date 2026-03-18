/*
 * XREFs of BgkpReleaseConsole @ 0x14054EFD4
 * Callers:
 *     BgkDisplayCharacter @ 0x140AF0F70 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AF1040 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AF1090 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AF1120 (BgkSetCursor.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B390 (ExReleaseRundownProtection_0.c)
 */

void BgkpReleaseConsole()
{
  ExReleaseRundownProtection_0(&stru_140C0BD38);
}
