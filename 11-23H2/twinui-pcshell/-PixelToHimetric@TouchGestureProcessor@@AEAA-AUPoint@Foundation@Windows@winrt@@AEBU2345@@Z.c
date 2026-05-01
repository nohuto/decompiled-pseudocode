/*
 * XREFs of ?PixelToHimetric@TouchGestureProcessor@@AEAA?AUPoint@Foundation@Windows@winrt@@AEBU2345@@Z @ 0x180650CE0
 * Callers:
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18064FE44 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 *     ?FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x1806501E0 (-FinishSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180651D0C (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     InitDPI @ 0x18073DC68 (InitDPI.c)
 */

float *__fastcall TouchGestureProcessor::PixelToHimetric(__int64 a1, float *a2, float *a3)
{
  HWND ShellWindow; // rax
  __int64 v6; // rdx
  unsigned int DpiForWindow; // kr00_4
  float v8; // xmm8_4
  __int64 v9; // rdx
  __int64 v10; // rcx
  float *result; // rax

  ShellWindow = GetShellWindow();
  DpiForWindow = GetDpiForWindow(ShellWindow);
  LODWORD(v6) = (2863311531u * (unsigned __int64)DpiForWindow) >> 32;
  InitDPI(DpiForWindow, v6);
  v8 = (float)(DpiForWindow / 0x60);
  *a2 = (float)((float)(v8 * *a3) / (float)dword_18098C404) * 25.4 * 100.0;
  InitDPI(v10, v9);
  result = a2;
  a2[1] = (float)((float)(v8 * a3[1]) / (float)dword_18098C400) * 25.4 * 100.0;
  return result;
}
