/*
 * XREFs of ?SetWinlogonHotKeys@@YAXXZ @ 0x1C00413EC
 * Callers:
 *     RawInputThread @ 0x1C003F070 (RawInputThread.c)
 * Callees:
 *     ?_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z @ 0x1C0043264 (-_RegisterHotKey@@YAHPEAUtagWND@@P6AX_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

void SetWinlogonHotKeys(void)
{
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 0, 0x8003u, 0x2Eu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 4, 6u, 0x1Bu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 5, 0x8008u, 0x4Cu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 6, 0x2008u, 0x55u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 13, 0x600Au, 0xDu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 14, 0x6008u, 0xDu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 12, 0x6008u, 0xBBu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 12, 0x6008u, 0x6Bu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 15, 0x200Eu, 0x4Cu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 10, 0x600Au, 0x7Du, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 7, 0x2008u, 0x50u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 8, 0x200Au, 0x50u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 9, 0x200Cu, 0x50u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))RotationLockCallback, -12, 0x2008u, 0x4Fu, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonWinSpaceCallback, -8, 0x2008u, 0x20u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonWinSpaceCallback, -9, 0x200Au, 0x20u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonWinSpaceCallback, -10, 0x200Cu, 0x20u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonWinSpaceCallback, -11, 0x200Eu, 0x20u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 7, 0x2008u, 0x85u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 8, 0x200Au, 0x85u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 9, 0x200Cu, 0x85u, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))RotationLockCallback, -13, 0x6008u, 0x7Du, 0LL);
  _RegisterHotKey(0LL, (void (*)(unsigned __int64, __int64))WinlogonHotkeyCallback, 11, 0x6808u, 0x7Fu, 0LL);
  _RegisterHotKey(0LL, PTPEnableHotkeyCallback, -14, 0x480Au, 0x87u, 0LL);
}
