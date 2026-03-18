/*
 * XREFs of xxxUpdateWindows @ 0x1C023D2E8
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     NtUserUpdateWindows @ 0x1C0200460 (NtUserUpdateWindows.c)
 * Callees:
 *     xxxUpdateThreadsWindows @ 0x1C02105B8 (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxUpdateWindows(struct tagWND *a1, HRGN a2)
{
  xxxUpdateThreadsWindows(gptiCurrent, a1, a2);
  return 1LL;
}
