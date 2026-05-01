/*
 * XREFs of ??0CRect@Geometry@@QEAA@VRect@Foundation@Windows@@@Z @ 0x180040650
 * Callers:
 *     ?Position@TaskViewFrame@@UEAA?AUtagRECT@@XZ @ 0x1800405E0 (-Position@TaskViewFrame@@UEAA-AUtagRECT@@XZ.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806031D0 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall Geometry::CRect::CRect(_DWORD *a1, float *a2)
{
  *a1 = (int)*a2;
  a1[1] = (int)a2[1];
  a1[2] = (int)Windows::Foundation::Rect::Right::get((Windows::Foundation::Rect::Right *)a2);
  a1[3] = (int)Windows::Foundation::Rect::Bottom::get((Windows::Foundation::Rect::Bottom *)a2);
  return a1;
}
