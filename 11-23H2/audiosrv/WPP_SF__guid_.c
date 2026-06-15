/*
 * XREFs of WPP_SF__guid_ @ 0x1800E3D10
 * Callers:
 *     ?SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800E2D80 (-SetGroupingParamInternal@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF__guid_(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return EtwTraceMessage(a1, 43LL, &WPP_bb8c20e8cc9f3f3c48250634c7540f80_Traceguids, 14LL, a4);
}
