/*
 * XREFs of ?GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14003BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14003B52E (-GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetObjectProperties(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  int ObjectProperties; // ebx

  if ( !*((_BYTE *)this + 80) )
  {
    ObjectProperties = -2005139437;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessServerInputEndpoint::GetObjectProperties",
      0x5Du,
      ObjectProperties);
    return (unsigned int)ObjectProperties;
  }
  if ( !*((_BYTE *)this + 1488) )
  {
    ObjectProperties = -2147418113;
    goto LABEL_8;
  }
  if ( a2 >= *((_DWORD *)this + 371) )
  {
    ObjectProperties = -2147024809;
    goto LABEL_8;
  }
  ObjectProperties = CSpatialCrossProcessBaseEndpoint::GetObjectProperties(
                       (CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16),
                       *((_DWORD *)this + 370),
                       a2,
                       a3,
                       a4);
  if ( ObjectProperties < 0 )
    goto LABEL_8;
  return (unsigned int)ObjectProperties;
}
