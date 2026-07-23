/*
 * XREFs of BgkpAcquireConsole @ 0x14054F648
 * Callers:
 *     BgkDisplayStringEx @ 0x14054F464 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x14054F580 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x14054F5D0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140AF0F80 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AF1050 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AF10A0 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AF1130 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B5F0 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140C0BD48) != 0;
}
