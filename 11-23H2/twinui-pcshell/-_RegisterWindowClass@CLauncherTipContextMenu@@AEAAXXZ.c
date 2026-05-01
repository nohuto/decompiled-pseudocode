/*
 * XREFs of ?_RegisterWindowClass@CLauncherTipContextMenu@@AEAAXXZ @ 0x1801B9174
 * Callers:
 *     ?RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ @ 0x18010B78C (-RuntimeClassInitialize@CLauncherTipContextMenu@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

void __fastcall CLauncherTipContextMenu::_RegisterWindowClass(CLauncherTipContextMenu *this)
{
  HBRUSH StockObject; // rax
  WNDCLASSEXW v2; // [rsp+20h] [rbp-58h] BYREF

  v2.cbSize = 80;
  memset_0(&v2.style, 0, 0x4CuLL);
  v2.style = 3;
  v2.lpfnWndProc = (WNDPROC)CWRLImpWndProc<CLauncherTipContextMenu>::s_WndProcBase;
  v2.hInstance = &_ImageBase;
  v2.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  StockObject = (HBRUSH)GetStockObject(5);
  v2.cbWndExtra = 8;
  v2.hbrBackground = StockObject;
  v2.lpszClassName = L"LauncherTipWnd";
  RegisterClassExW(&v2);
}
