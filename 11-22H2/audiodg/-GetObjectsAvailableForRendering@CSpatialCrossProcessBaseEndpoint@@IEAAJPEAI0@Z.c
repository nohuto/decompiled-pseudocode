/*
 * XREFs of ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14009DAA4
 * Callers:
 *     ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x14009F6F0 (-GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14009D770 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14009DC70 (-GetPingPongWriteIndex@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForRendering(
        SpatialBlock **this,
        unsigned int *a2,
        unsigned int *a3)
{
  int GrantedDynamicObjectCount; // ebx
  __int64 v7; // r9
  unsigned __int32 v8; // eax
  unsigned __int32 v9; // ecx

  *a2 = 0;
  GrantedDynamicObjectCount = CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount(this, a3);
  if ( GrantedDynamicObjectCount < 0 )
    goto LABEL_5;
  v8 = _InterlockedCompareExchange((volatile signed __int32 *)this[162] + 11, 0, 0);
  v9 = *((_DWORD *)this + 71);
  if ( v8 < v9 )
    v9 = v8;
  *((_DWORD *)this + 38) = v9;
  GrantedDynamicObjectCount = CSpatialCrossProcessBaseEndpoint::GetPingPongWriteIndex(
                                (CSpatialCrossProcessBaseEndpoint *)this,
                                a2);
  if ( GrantedDynamicObjectCount < 0 )
  {
LABEL_5:
    *a3 = 0;
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForRendering",
      769,
      (unsigned int)GrantedDynamicObjectCount,
      v7);
  }
  return (unsigned int)GrantedDynamicObjectCount;
}
