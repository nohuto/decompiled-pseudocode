/*
 * XREFs of ?UpdateRectAnimation@CAcrylicSheet@@UEAAJPEBUtagRECT@@MUInterpolationParameters@@@Z @ 0x18009B650
 * Callers:
 *     <none>
 * Callees:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z @ 0x180099CE4 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::UpdateRectAnimation(__int64 a1, const RECT *a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm1
  _OWORD v6[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v4 = *(_OWORD *)(a4 + 16);
  v6[0] = *(_OWORD *)a4;
  v7 = *(_QWORD *)(a4 + 32);
  v6[1] = v4;
  return CAcrylicSheet::AnimateRect(a1 - 296, a2, a3, 0, (__int64)v6);
}
