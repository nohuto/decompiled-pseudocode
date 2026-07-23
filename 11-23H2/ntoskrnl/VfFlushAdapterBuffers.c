/*
 * XREFs of VfFlushAdapterBuffers @ 0x140AC5DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x1405D0270 (VfReportIssueWithOptions.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140AC474C (VF_ASSERT_MAX_IRQL.c)
 *     ViFlushDoubleBuffer @ 0x140AC88F4 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140AC8E64 (ViGetAdapterInformationInternal.c)
 *     ViGetMapRegisterFile @ 0x140AC903C (ViGetMapRegisterFile.c)
 *     ViGetRealDmaAdapter @ 0x140AC9178 (ViGetRealDmaAdapter.c)
 *     ViHalPreprocessOptions @ 0x140AC9314 (ViHalPreprocessOptions.c)
 *     ViSwap @ 0x140ACA124 (ViSwap.c)
 */

char __fastcall VfFlushAdapterBuffers(int a1, ULONG_PTR a2, const void *a3, const void *a4, int a5, char a6)
{
  __int64 AdapterInformationInternal; // rbp
  __int64 RealDmaAdapter; // r13
  char result; // al
  __int64 MapRegisterFile; // r12
  char v14; // r13
  const void *v17; // [rsp+40h] [rbp-48h] BYREF
  const void *v18; // [rsp+48h] [rbp-40h] BYREF
  ULONG_PTR v19[2]; // [rsp+50h] [rbp-38h] BYREF

  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( !AdapterInformationInternal )
    goto LABEL_4;
  VF_ASSERT_MAX_IRQL();
  if ( a3 == (const void *)-559026163LL )
  {
    a3 = 0LL;
    goto LABEL_4;
  }
  MapRegisterFile = ViGetMapRegisterFile(a3);
  if ( !MapRegisterFile )
  {
LABEL_4:
    result = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, const void *, const void *, int, char))(*(_QWORD *)(RealDmaAdapter + 8)
                                                                                                  + 40LL))(
               RealDmaAdapter,
               a2,
               a3,
               a4,
               a5,
               a6);
    if ( AdapterInformationInternal )
    {
      if ( result )
        _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 220), 0);
    }
    return result;
  }
  v19[0] = a2;
  v17 = a4;
  v18 = a3;
  if ( (unsigned int)ViSwap(&v18, v19, &v17) )
  {
    v14 = (*(__int64 (__fastcall **)(__int64, ULONG_PTR, const void *, const void *, int, char))(*(_QWORD *)(RealDmaAdapter + 8)
                                                                                               + 40LL))(
            RealDmaAdapter,
            v19[0],
            v18,
            v17,
            a5,
            a6);
    ViFlushDoubleBuffer(MapRegisterFile, a6);
    if ( v14 )
      _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 220), 0);
    return v14;
  }
  else
  {
    if ( a5 )
    {
      ViHalPreprocessOptions(
        byte_140C0DE24,
        "Cannot flush map register that isn't mapped! (Map register base %p, flushing address %p, MDL %p)",
        (const void *)0x20,
        a3,
        a4);
      VfReportIssueWithOptions(0xE6u, 0x20uLL, (ULONG_PTR)a3, (ULONG_PTR)a4, a2, byte_140C0DE24);
    }
    return 0;
  }
}
