/*
 * XREFs of GetWindowBordersForDpiWithCompatFlags2 @ 0x1C00BBC5C
 * Callers:
 *     GetWindowBordersForDpi @ 0x1C00BBC00 (GetWindowBordersForDpi.c)
 * Callees:
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C00BBD38 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00BBD80 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 */

__int64 __fastcall GetWindowBordersForDpiWithCompatFlags2(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int16 v7; // di
  int v8; // ebp
  int v9; // r8d
  unsigned int v10; // ebx
  int WindowFrameMetricForDpiWithCompatFlags2; // r14d
  __int64 result; // rax

  v7 = a2;
  v8 = a1;
  if ( (a2 & 0x100) != 0 )
    v9 = 2;
  else
    v9 = (a2 & 0x20000) != 0;
  v10 = v9 + 1;
  LOBYTE(a1) = (a1 & 0xC00000) == 0;
  if ( ((unsigned __int8)a1 & ((a2 & 1) == 0)) != 0 )
    v10 = v9;
  WindowFrameMetricForDpiWithCompatFlags2 = GetWindowFrameMetricForDpiWithCompatFlags2(a1, a5, a6);
  if ( (v8 & 0x40000) != 0
    || (result = v10, WindowFrameMetricForDpiWithCompatFlags2 > 0)
    && ((v8 & 0xC00000) == 12582912 || (v8 & 0x40000) != 0)
    && (a6 & 0x30000000) == 0 )
  {
    result = WindowFrameMetricForDpiWithCompatFlags2
           + v10
           + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(a5, a6);
  }
  if ( a4 )
  {
    if ( (v7 & 0x200) != 0 )
      return (unsigned int)(result + 2);
  }
  return result;
}
