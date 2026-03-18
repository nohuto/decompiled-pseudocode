/*
 * XREFs of ?SetPenHotKeys@@YAXXZ @ 0x1C0040E54
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0043264 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

void SetPenHotKeys(void)
{
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 25, 0x4208u, 0x83u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 26, 0x4208u, 0x82u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 27, 0x4208u, 0x81u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 28, 0x420Au, 0x83u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))PenHotkeyCallback, 29, 0x420Au, 0x82u, 0LL);
}
