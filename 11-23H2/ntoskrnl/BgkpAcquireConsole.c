/*
 * XREFs of BgkpAcquireConsole @ 0x14054EF88
 * Callers:
 *     BgkDisplayStringEx @ 0x14054EDA4 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x14054EEC0 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x14054EF10 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140AF0F70 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AF1040 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AF1090 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AF1120 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B360 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140C0BD38) != 0;
}
