/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140020A10
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x1400180DC (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140010D3C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140020388 (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082C60 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082CF8 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140082D90 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall privateCreateCrossProcessEndpoint(_QWORD *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebx
  void *v8; // rax
  int v9; // r8d
  CCrossProcessServerInputEndpoint *v10; // rax
  CCrossProcessServerInputEndpoint *v11; // rdi
  __int64 v13; // rax
  void *v14; // rax
  int v15; // r8d
  void *v16; // rax
  __int64 v17; // rax
  void *v18; // rax
  int v19; // r8d
  void *v20; // rax
  __int64 v21; // rax
  void *v22; // rax
  int v23; // r8d
  void *v24; // rax

  v6 = *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 - *a1;
  if ( *(_QWORD *)&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561.Data4 - a1[1];
  v7 = 0;
  if ( v6 )
  {
    v13 = *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 - *a1;
    if ( *(_QWORD *)&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data1 == *a1 )
      v13 = *(_QWORD *)GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6.Data4 - a1[1];
    if ( v13 )
    {
      v17 = *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 - *a1;
      if ( *(_QWORD *)&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data1 == *a1 )
        v17 = *(_QWORD *)GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538.Data4 - a1[1];
      if ( v17 )
      {
        v21 = *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 - *a1;
        if ( *(_QWORD *)&GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data1 == *a1 )
          v21 = *(_QWORD *)GUID_cd773740_b187_4974_a1d5_e0ff91372277.Data4 - a1[1];
        if ( v21 )
          return (unsigned int)-2147024846;
        v22 = (void *)AERTGetDLLRTHeap();
        v24 = AERTAllocate(0x230uLL, v22, v23);
        if ( v24 )
          v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v24);
        else
          v11 = 0LL;
        if ( v11 )
          goto LABEL_7;
        return (unsigned int)-2147024882;
      }
      v18 = (void *)AERTGetDLLRTHeap();
      v20 = AERTAllocate(0x228uLL, v18, v19);
      if ( v20 )
        v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v20);
      else
        v11 = 0LL;
    }
    else
    {
      v14 = (void *)AERTGetDLLRTHeap();
      v16 = AERTAllocate(0x258uLL, v14, v15);
      if ( v16 )
        v11 = (CCrossProcessServerInputEndpoint *)ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v16);
      else
        v11 = 0LL;
    }
  }
  else
  {
    v8 = (void *)AERTGetDLLRTHeap();
    v10 = (CCrossProcessServerInputEndpoint *)AERTAllocate(0x2C8uLL, v8, v9);
    if ( v10 )
      v11 = ATL::CComObject<CCrossProcessServerInputEndpoint>::CComObject<CCrossProcessServerInputEndpoint>(v10);
    else
      v11 = 0LL;
  }
  if ( !v11 )
    return (unsigned int)-2147024882;
LABEL_7:
  (*(void (__fastcall **)(CCrossProcessServerInputEndpoint *))(*(_QWORD *)v11 + 8LL))(v11);
  *((_OWORD *)v11 + 13) = *a2;
  *a4 = (char *)v11 + 8;
  return v7;
}
