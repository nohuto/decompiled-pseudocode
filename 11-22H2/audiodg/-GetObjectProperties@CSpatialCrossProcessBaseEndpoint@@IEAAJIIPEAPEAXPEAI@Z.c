/*
 * XREFs of ?GetObjectProperties@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14003B52E
 * Callers:
 *     ?GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14003BC20 (-GetObjectProperties@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14009FBF0 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C964 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectProperties(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx

  v5 = 0;
  v6 = a2;
  if ( !a4 )
  {
    v5 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectProperties", 0x35Cu, v5);
    return v5;
  }
  v7 = *((_QWORD *)this + 163);
  if ( a3 >= *(_DWORD *)(v7 + 8) || (unsigned int)v6 >= 2 )
  {
    v5 = -2147024809;
    goto LABEL_8;
  }
  *a4 = (void *)(*(_QWORD *)(v7 + 24 * v6 + 40) + *(_DWORD *)(v7 + 12) * a3);
  if ( a5 )
    *a5 = *(_DWORD *)(v7 + 12);
  return v5;
}
