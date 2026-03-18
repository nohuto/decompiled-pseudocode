/*
 * XREFs of XilCoreCommonBuffer_AcquireBuffers @ 0x1C000B490
 * Callers:
 *     CommonBuffer_WorkItem @ 0x1C00078A0 (CommonBuffer_WorkItem.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C000B404 (CommonBuffer_AcquireBuffers.c)
 *     XilCoreDeviceSlot_AllocateResources @ 0x1C001C9FC (XilCoreDeviceSlot_AllocateResources.c)
 * Callees:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A24 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C000B5A4 (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 */

__int64 __fastcall XilCoreCommonBuffer_AcquireBuffers(
        __int64 **a1,
        int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        _BYTE *a7)
{
  unsigned int *v8; // rax
  unsigned int i; // r10d
  __int64 v12; // rsi
  int v13; // edi
  int v15; // r8d

  v8 = (unsigned int *)(a1 + 4);
  for ( i = 0; i < 2; ++i )
  {
    v12 = (__int64)v8;
    if ( a3 <= *v8 )
      break;
    v8 += 16;
  }
  v13 = XilCoreCommonBuffer_AcquireBuffersWithSegmenter((_DWORD)a1, v12, a2, a4, a5, a6, (__int64)a7);
  if ( v13 < 0 || *a7 )
  {
    if ( KeGetCurrentIrql() )
    {
      *a7 = 1;
    }
    else
    {
      v15 = 0;
      if ( v13 < 0 )
        v15 = a2;
      if ( *a7 )
        v15 += *(_DWORD *)(v12 + 16);
      XilCoreCommonBuffer_AllocateBuffers(a1, v12, v15);
      *a7 = 0;
      if ( v13 < 0 )
        return (unsigned int)XilCoreCommonBuffer_AcquireBuffersWithSegmenter(
                               (_DWORD)a1,
                               v12,
                               a2,
                               a4,
                               a5,
                               a6,
                               (__int64)a7);
    }
  }
  return (unsigned int)v13;
}
