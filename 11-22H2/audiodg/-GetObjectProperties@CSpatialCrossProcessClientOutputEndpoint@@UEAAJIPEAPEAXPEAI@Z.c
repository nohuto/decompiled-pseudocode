/*
 * XREFs of ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14009FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14003B52E (-GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z @ 0x14009EC64 (-ZeroOutObject@CSpatialCrossProcessBaseEndpoint@@IEAAJII@Z.c)
 *     ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x1400A03E0 (-TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetObjectProperties(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  int ObjectProperties; // ebx
  __int64 v7; // r11
  CSpatialCrossProcessBaseEndpoint *v8; // rsi
  unsigned int *v9; // rdi
  unsigned int v11[10]; // [rsp+30h] [rbp-28h] BYREF
  bool v12; // [rsp+60h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectProperties = -2005139437;
LABEL_9:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetObjectProperties",
      163,
      (unsigned int)ObjectProperties,
      (__int64)a4);
    return (unsigned int)ObjectProperties;
  }
  if ( !*((_BYTE *)this + 1464) )
  {
    ObjectProperties = -2004287481;
    goto LABEL_9;
  }
  ObjectProperties = CSparseIndexMapRT::TranslateIndex(
                       (CSpatialCrossProcessClientOutputEndpoint *)((char *)this + 1328),
                       a2,
                       v11,
                       &v12);
  if ( ObjectProperties < 0 )
    goto LABEL_9;
  v8 = (CSpatialCrossProcessBaseEndpoint *)(v7 - 16);
  v9 = (unsigned int *)(v7 + 1448);
  if ( v12 )
  {
    ObjectProperties = CSpatialCrossProcessBaseEndpoint::ZeroOutObject((SpatialBlock **)(v7 - 16), *v9, v11[0]);
    if ( ObjectProperties < 0 )
      goto LABEL_9;
  }
  ObjectProperties = CSpatialCrossProcessBaseEndpoint::GetObjectProperties(v8, *v9, v11[0], a3, a4);
  if ( ObjectProperties < 0 )
    goto LABEL_9;
  return (unsigned int)ObjectProperties;
}
