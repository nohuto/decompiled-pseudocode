/*
 * XREFs of WPP_SF__guid_ @ 0x1800D0F5C
 * Callers:
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x18000FF20 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800D04D0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF__guid_(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
