/*
 * XREFs of WPP_SF_gdl @ 0x180132BC8
 * Callers:
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1801301E8 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gdl(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_bd59d04cb15c3bed485848ef4f6ee602_Traceguids, 37LL, &v5);
}
