/*
 * XREFs of ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14009EC64
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14009FB20 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14009FBF0 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14009FCC0 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ZeroOutObject@SpatialBlock@@QEAAJII@Z @ 0x14009ECA0 (-ZeroOutObject@SpatialBlock@@QEAAJII@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ZeroOutObject(
        SpatialBlock **this,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // eax
  __int64 v4; // r9
  unsigned int v5; // ebx

  v3 = SpatialBlock::ZeroOutObject(this[163], a2, a3);
  v5 = v3;
  if ( v3 < 0 )
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::ZeroOutObject", 904, (unsigned int)v3, v4);
  return v5;
}
