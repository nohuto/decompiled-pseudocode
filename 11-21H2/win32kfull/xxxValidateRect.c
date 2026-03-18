/*
 * XREFs of xxxValidateRect @ 0x1C0115F9C
 * Callers:
 *     xxxMoveWindow @ 0x1C00FA07C (xxxMoveWindow.c)
 *     NtUserValidateRect @ 0x1C0115EA0 (NtUserValidateRect.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 */

__int64 __fastcall xxxValidateRect(struct tagWND *a1, int *a2)
{
  int v2; // r9d

  if ( a1 )
  {
    v2 = 8;
  }
  else
  {
    a2 = 0LL;
    v2 = 645;
    a1 = 0LL;
  }
  return xxxRedrawWindow(a1, a2, 0LL, v2);
}
