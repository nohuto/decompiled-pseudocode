/*
 * XREFs of ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x1400943D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z @ 0x140091CAC (-GetObjectSampleBuffer@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAMPEAI@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x140093244 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x140094AF0 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectSampleBuffer(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        float **a3,
        unsigned int *a4)
{
  int ObjectSampleBuffer; // ebx
  unsigned int v9[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v10; // [rsp+60h] [rbp+8h] BYREF

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
                         v9,
                         &v10);
  if ( ObjectSampleBuffer < 0 )
    goto LABEL_9;
  if ( v10 )
  {
    ObjectSampleBuffer = CSpatialCrossProcessBaseEndpoint::ZeroOutObject(
                           (SpatialBlock **)this - 2,
                           *((_DWORD *)this + 362),
                           v9[0]);
    if ( ObjectSampleBuffer < 0 )
      goto LABEL_9;
  }
  ObjectSampleBuffer = CSpatialCrossProcessBaseEndpoint::GetObjectSampleBuffer(
                         (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                         *((_DWORD *)this + 362),
                         v9[0],
                         a3,
                         a4);
  if ( ObjectSampleBuffer < 0 )
    goto LABEL_9;
  return (unsigned int)ObjectSampleBuffer;
}
