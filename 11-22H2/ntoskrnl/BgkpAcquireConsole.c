/*
 * XREFs of BgkpAcquireConsole @ 0x14054F028
 * Callers:
 *     BgkDisplayStringEx @ 0x14054EE44 (BgkDisplayStringEx.c)
 *     BgkSetTextColor @ 0x14054EF60 (BgkSetTextColor.c)
 *     BgkSolidColorFill @ 0x14054EFB0 (BgkSolidColorFill.c)
 *     BgkDisplayCharacter @ 0x140AF1F70 (BgkDisplayCharacter.c)
 *     BgkGetConsoleState @ 0x140AF2040 (BgkGetConsoleState.c)
 *     BgkGetCursorState @ 0x140AF2090 (BgkGetCursorState.c)
 *     BgkSetCursor @ 0x140AF2120 (BgkSetCursor.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 */

bool BgkpAcquireConsole()
{
  return ExAcquireRundownProtection_0(&stru_140C0BD38) != 0;
}
