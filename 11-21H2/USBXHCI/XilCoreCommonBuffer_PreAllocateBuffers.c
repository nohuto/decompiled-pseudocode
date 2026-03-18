/*
 * XREFs of XilCoreCommonBuffer_PreAllocateBuffers @ 0x1C0015AD8
 * Callers:
 *     CommonBuffer_WorkItem @ 0x1C0015A10 (CommonBuffer_WorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0015B94 (XilCoreCommonBuffer_AllocateBuffers.c)
 */

void __fastcall XilCoreCommonBuffer_PreAllocateBuffers(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int i; // edi
  unsigned int v4; // ebp
  int v5; // edx

  v1 = (_DWORD *)(a1 + 44);
  for ( i = 0; i < 2; ++i )
  {
    v4 = 0;
    *(_BYTE *)(a1 + 25) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
    if ( v1[4] < *v1 )
      v4 = v1[1];
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 16), *(_BYTE *)(a1 + 25));
    if ( v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v5) = 5;
          WPP_RECORDER_SF_DD(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v5,
            8,
            15,
            (__int64)&WPP_a84c20f32b9f317edc0159cb83ba05a2_Traceguids,
            i,
            v4);
        }
      }
      XilCoreCommonBuffer_AllocateBuffers(a1, v1 - 3, v4);
    }
    v1 += 16;
  }
}
