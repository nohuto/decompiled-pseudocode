/*
 * XREFs of HideAutorunCursor @ 0x1C01CFB60
 * Callers:
 *     <none>
 * Callees:
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 */

struct tagCURSOR *HideAutorunCursor()
{
  FindTimer(0LL, gtmridAutorunCursor, 4u, 1, 0LL);
  gtmridAutorunCursor = 0LL;
  return zzzUpdateCursorImage();
}
