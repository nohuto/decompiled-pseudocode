/*
 * XREFs of privateCreateSpatialCrossProcessEndpoint @ 0x14009A9E4
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x14009AB34 (CreateSpatialCrossProcessEndpointRT.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140098E68 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140098F08 (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14009C914 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall privateCreateSpatialCrossProcessEndpoint(struct _GUID *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  CSpatialCrossProcessClientOutputEndpoint *v7; // rdi
  const struct _GUID *v8; // r8
  void *v9; // rax
  int v10; // r8d
  CSpatialCrossProcessServerInputEndpoint *v11; // rax
  CSpatialCrossProcessServerInputEndpoint *v12; // rcx
  void *v13; // rax
  int v14; // r8d
  CSpatialCrossProcessClientOutputEndpoint *v15; // rax

  v6 = 0;
  v7 = 0LL;
  if ( IsEqualGUID(&GUID_6b78656b_c0e1_4190_83ee_ef91c2908926, a1) )
  {
    v9 = (void *)AERTGetDLLRTHeap();
    v11 = (CSpatialCrossProcessServerInputEndpoint *)AERTAllocate(0x5F0uLL, v9, v10);
    if ( v11 )
      v12 = ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::CComObject<CSpatialCrossProcessServerInputEndpoint>(v11);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v7 = v12;
      (*(void (__fastcall **)(CSpatialCrossProcessServerInputEndpoint *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    if ( !v7 )
      goto LABEL_8;
  }
  else
  {
    if ( !IsEqualGUID(&GUID_9371e7ff_df2d_4962_9585_40424d054550, v8) )
    {
      v6 = -2147024846;
      goto LABEL_17;
    }
    v13 = (void *)AERTGetDLLRTHeap();
    v15 = (CSpatialCrossProcessClientOutputEndpoint *)AERTAllocate(0x5D0uLL, v13, v14);
    if ( v15 )
      v7 = ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::CComObject<CSpatialCrossProcessClientOutputEndpoint>(v15);
    else
      v7 = 0LL;
    if ( !v7 )
    {
LABEL_8:
      v6 = -2147024882;
LABEL_17:
      SpatialCPTraceLoggingErrorHelper("privateCreateSpatialCrossProcessEndpoint", 0x66u, v6);
      return v6;
    }
    (*(void (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  *(_OWORD *)((char *)v7 + 792) = *a2;
  *a4 = (char *)v7 + 8;
  return v6;
}
