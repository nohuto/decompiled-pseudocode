/*
 * XREFs of ?RoundToNearestInt@@YAHN@Z @ 0x18006DB8C
 * Callers:
 *     ?GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z @ 0x180007928 (-GetFrameMargins@CTopLevelWindow@@QEBAXPEAU_MARGINS@@@Z.c)
 * Callees:
 *     _o_ceil_0 @ 0x18005D2A4 (_o_ceil_0.c)
 *     floor @ 0x18005D2C8 (floor.c)
 */

__int64 __fastcall RoundToNearestInt(double a1)
{
  double v1; // xmm0_8

  if ( a1 < 0.0 )
    v1 = o_ceil_0();
  else
    v1 = floor(a1 + 0.5);
  return (unsigned int)(int)v1;
}
