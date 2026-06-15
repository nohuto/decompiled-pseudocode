/*
 * XREFs of ?Clear@?$CSimplePerfCounterAggregateValues@W4SpatialObjectCountTypes@@I$01@@UEAAXXZ @ 0x14008FC80
 * Callers:
 *     ??0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ @ 0x14008EEC0 (--0CSpatialCrossProcessEndpointTraceLogger@@QEAA@XZ.c)
 * Callees:
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 */

__int64 __fastcall CSimplePerfCounterAggregateValues<enum SpatialObjectCountTypes,unsigned int,2>::Clear(_DWORD *a1)
{
  _DWORD *v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  memset_0(a1 + 4, 0, 0x40uLL);
  v2 = a1 + 9;
  v3 = 2LL;
  do
  {
    *(v2 - 1) = a1[2];
    result = (unsigned int)a1[3];
    *v2 = result;
    v2 += 8;
    --v3;
  }
  while ( v3 );
  return result;
}
