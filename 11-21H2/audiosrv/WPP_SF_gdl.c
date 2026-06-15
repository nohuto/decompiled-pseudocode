/*
 * XREFs of WPP_SF_gdl @ 0x180124B1C
 * Callers:
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x18012032C (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_gdl(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  double v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_a37dfcc815523b32eaec5cff52282599_Traceguids, 47LL, &v5);
}
