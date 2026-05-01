/*
 * XREFs of ShouldIgnoreWindow @ 0x180044F80
 * Callers:
 *     ?OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18017FD40 (-OnApplicationViewChanged@SnapEducationHandler@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     IsFullscreen @ 0x180044FD8 (IsFullscreen.c)
 */

char __fastcall ShouldIgnoreWindow(HWND hWnd)
{
  LONG WindowLongW; // edi
  char v3; // al
  char v4; // cl

  WindowLongW = GetWindowLongW(hWnd, -16);
  v3 = IsFullscreen(hWnd);
  v4 = 0;
  if ( v3 || (WindowLongW & 0x80040000) != 0x40000 )
    return 1;
  return v4;
}
