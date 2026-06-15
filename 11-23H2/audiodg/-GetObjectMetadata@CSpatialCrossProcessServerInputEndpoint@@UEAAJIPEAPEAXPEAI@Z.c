/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x1400A0C40
 * Callers:
 *     <none>
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14009D9D0 (-GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetObjectMetadata(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  unsigned int ObjectMetadata; // ebx

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectMetadata = -2005139437;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessServerInputEndpoint::GetObjectMetadata",
      119,
      ObjectMetadata,
      (__int64)a4);
    return ObjectMetadata;
  }
  if ( !*((_BYTE *)this + 1488) )
  {
    ObjectMetadata = -2147418113;
    goto LABEL_8;
  }
  if ( a2 >= *((_DWORD *)this + 371) )
  {
    ObjectMetadata = -2147024809;
    goto LABEL_8;
  }
  ObjectMetadata = CSpatialCrossProcessBaseEndpoint::GetObjectMetadata(
                     (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16),
                     *((_DWORD *)this + 370),
                     a2,
                     a3,
                     a4);
  if ( (ObjectMetadata & 0x80000000) != 0 )
    goto LABEL_8;
  return ObjectMetadata;
}
