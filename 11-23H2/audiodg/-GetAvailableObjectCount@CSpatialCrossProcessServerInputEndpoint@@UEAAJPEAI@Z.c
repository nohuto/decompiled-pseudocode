/*
 * XREFs of ?GetAvailableObjectCount@CSpatialCrossProcessServerInputEndpoint@@UEAAJPEAI@Z @ 0x14003BA80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ @ 0x14003BA4E (-IsRunning@CSpatialCrossProcessBaseEndpoint@@IEBA_NXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessServerInputEndpoint::GetAvailableObjectCount(
        CSpatialCrossProcessServerInputEndpoint *this,
        unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  _DWORD *v4; // r10
  char v5; // r11

  v2 = *((_DWORD *)this + 373);
  *a2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    v2 = -2005139437;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerInputEndpoint::GetAvailableObjectCount", 0x28u, v2);
    return v2;
  }
  if ( CSpatialCrossProcessBaseEndpoint::IsRunning((CSpatialCrossProcessServerInputEndpoint *)((char *)this - 16))
    || *(_DWORD *)(v3 + 1496) == 1 )
  {
    if ( *(_BYTE *)(v3 + 1488) != v5 )
      *v4 = *(_DWORD *)(v3 + 1484);
    if ( v2 != -2005139433 && v2 != -2005139358 && v2 >= 2 )
      goto LABEL_11;
  }
  else
  {
    return (unsigned int)-2005139433;
  }
  return v2;
}
