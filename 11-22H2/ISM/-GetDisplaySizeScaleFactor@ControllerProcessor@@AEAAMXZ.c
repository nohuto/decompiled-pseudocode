/*
 * XREFs of ?GetDisplaySizeScaleFactor@ControllerProcessor@@AEAAMXZ @ 0x1801A41E4
 * Callers:
 *     ?CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z @ 0x1801A3BB8 (-CalculateNavigationDelta@ControllerProcessor@@AEAAJMM@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1801A6620 (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

float __fastcall ControllerProcessor::GetDisplaySizeScaleFactor(ControllerProcessor *this)
{
  HMONITOR v1; // rax
  int v3; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[4]; // [rsp+24h] [rbp-34h] BYREF
  _BYTE v5[4]; // [rsp+28h] [rbp-30h] BYREF
  int v6; // [rsp+2Ch] [rbp-2Ch]
  int v7; // [rsp+34h] [rbp-24h]
  _BYTE v8[16]; // [rsp+38h] [rbp-20h] BYREF

  if ( *((_BYTE *)this + 7521) )
  {
    GetPointerDeviceRects(-1LL, v8, v5);
    if ( v7 - v6 > 1080 )
      return (float)(v7 - v6) / 1080.0;
  }
  else
  {
    v1 = MonitorFromPoint(*(POINT *)((char *)this + 360), 2u);
    if ( (int)GetDpiForMonitor(v1, 0LL, &v3, v4) >= 0 )
      return (float)v3 / 96.0;
  }
  return FLOAT_1_0;
}
