/*
 * XREFs of ?UpdateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@@Z @ 0x180106CB4
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18009A5FC (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 *     ?UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z @ 0x18009B538 (-UpdateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateRect(CAcrylicSheet *this, struct CWindowData *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v5; // [rsp+30h] [rbp-18h] BYREF

  v4 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v5, a2);
  return CAcrylicSheet::UpdateRect(this, &v4);
}
