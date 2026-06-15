/*
 * XREFs of ?GetObjectMetadata@CSpatialCrossProcessBaseEndpoint@@IEAAJIIPEAPEAXPEAI@Z @ 0x14009D9D0
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x14009FAD0 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x1400A0C40 (-GetObjectMetadata@CSpatialCrossProcessServerInputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetObjectMetadata(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // edx
  void *v9; // rax

  v5 = *((_QWORD *)this + 163);
  v6 = 0;
  v7 = a2;
  if ( !a4 )
  {
    v6 = -2147467261;
LABEL_11:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetObjectMetadata", 885, v6, (__int64)a4);
    return v6;
  }
  if ( a3 >= *(_DWORD *)(v5 + 8) || a2 >= 2 )
  {
    v6 = -2147024809;
    goto LABEL_11;
  }
  v8 = *(_DWORD *)(v5 + 16);
  if ( v8 )
    v9 = (void *)(*(_QWORD *)(v5 + 24 * (v7 + 2)) + a3 * v8);
  else
    v9 = 0LL;
  *a4 = v9;
  if ( a5 )
    *a5 = *(_DWORD *)(v5 + 16);
  return v6;
}
