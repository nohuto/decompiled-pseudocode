/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x14009FC70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x14003B564 (-GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14009EC14 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x1400A0390 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        float **a3,
        unsigned int *a4)
{
  int ObjectSampleBuffer; // ebx
  __int64 v7; // r11
  CSpatialCrossProcessBaseEndpoint *v8; // rsi
  unsigned int *v9; // rdi
  unsigned int v11[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectSampleBuffer = -2005139437;
LABEL_9:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetObjectSampleBuffer",
      125,
      (unsigned int)ObjectSampleBuffer,
      (__int64)a4);
    return (unsigned int)ObjectSampleBuffer;
  }
  if ( !*((_BYTE *)this + 1464) )
  {
    ObjectSampleBuffer = -2004287481;
    goto LABEL_9;
  }
  ObjectSampleBuffer = CSparseIndexMapRT::TranslateIndex(
                         (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 1328),
                         a2,
                         v11,
                         &v12);
  if ( ObjectSampleBuffer < 0 )
    goto LABEL_9;
  v8 = (CSpatialCrossProcessBaseEndpoint *)(v7 - 16);
  v9 = (unsigned int *)(v7 + 1448);
  if ( v12 )
  {
    ObjectSampleBuffer = CSpatialCrossProcessBaseEndpoint::ZeroOutObject((SpatialBlock **)(v7 - 16), *v9, v11[0]);
    if ( ObjectSampleBuffer < 0 )
      goto LABEL_9;
  }
  ObjectSampleBuffer = CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(v8, *v9, v11[0], a3, a4);
  if ( ObjectSampleBuffer < 0 )
    goto LABEL_9;
  return (unsigned int)ObjectSampleBuffer;
}
