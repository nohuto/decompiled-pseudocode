/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14009FAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14009D9D0 (-GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14009EC14 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x1400A0390 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectMetadata(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  int ObjectMetadata; // ebx
  __int64 v7; // r11
  CSpatialCrossProcessBaseEndpoint *v8; // rsi
  unsigned int *v9; // rdi
  unsigned int v11[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectMetadata = -2005139437;
LABEL_9:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetObjectMetadata",
      202,
      (unsigned int)ObjectMetadata,
      (__int64)a4);
    return (unsigned int)ObjectMetadata;
  }
  if ( !*((_BYTE *)this + 1464) )
  {
    ObjectMetadata = -2004287481;
    goto LABEL_9;
  }
  ObjectMetadata = CSparseIndexMapRT::TranslateIndex(
                     (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 1328),
                     a2,
                     v11,
                     &v12);
  if ( ObjectMetadata < 0 )
    goto LABEL_9;
  v8 = (CSpatialCrossProcessBaseEndpoint *)(v7 - 16);
  v9 = (unsigned int *)(v7 + 1448);
  if ( v12 )
  {
    ObjectMetadata = CSpatialCrossProcessBaseEndpoint::ZeroOutObject((SpatialBlock **)(v7 - 16), *v9, v11[0]);
    if ( ObjectMetadata < 0 )
      goto LABEL_9;
  }
  ObjectMetadata = CSpatialCrossProcessBaseEndpoint::GetObjectMetadata(v8, *v9, v11[0], a3, a4);
  if ( ObjectMetadata < 0 )
    goto LABEL_9;
  return (unsigned int)ObjectMetadata;
}
