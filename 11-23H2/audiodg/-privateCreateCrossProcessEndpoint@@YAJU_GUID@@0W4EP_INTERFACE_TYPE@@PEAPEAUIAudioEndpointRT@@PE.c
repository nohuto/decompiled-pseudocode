/*
 * XREFs of ?privateCreateCrossProcessEndpoint@@YAJU_GUID@@0W4EP_INTERFACE_TYPE@@PEAPEAUIAudioEndpointRT@@PEAPEAUIAudioEndpoint@@@Z @ 0x140005BC0
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x140019128 (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 * Callees:
 *     ??0?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140005C7C (--0-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14001267C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140012720 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008F9B8 (--0-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008FA50 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14008FAF8 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall privateCreateCrossProcessEndpoint(const struct _GUID *a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  const struct _GUID *v6; // r8
  unsigned int v7; // ebx
  void *v8; // rax
  void *v9; // rax
  _OWORD *v10; // rdi
  const struct _GUID *v12; // r8
  void *v13; // rax
  void *v14; // rax
  const struct _GUID *v15; // r8
  void *v16; // rax
  void *v17; // rax
  void *v18; // rax
  void *v19; // rax

  v7 = 0;
  if ( (unsigned int)IsEqualGUID(&GUID_9dba709c_b3e1_4013_95b7_5ed33a2e8561, a1) )
  {
    v8 = AERTGetDLLRTHeap();
    v9 = AERTAllocate(0x2C8uLL, v8);
    if ( v9 )
      v10 = (_OWORD *)ATL::CComObject<CCrossProcessServerInputEndpoint>::CComObject<CCrossProcessServerInputEndpoint>(v9);
    else
      v10 = 0LL;
  }
  else if ( (unsigned int)IsEqualGUID(&GUID_5bfd515e_4aba_4483_a1c5_6651b7110ab6, v6) )
  {
    v13 = AERTGetDLLRTHeap();
    v14 = AERTAllocate(0x258uLL, v13);
    if ( v14 )
      v10 = (_OWORD *)ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v14);
    else
      v10 = 0LL;
  }
  else
  {
    if ( !(unsigned int)IsEqualGUID(&GUID_f64a6da6_e8af_4b7b_bca8_847ae765d538, v12) )
    {
      if ( !(unsigned int)IsEqualGUID(&GUID_cd773740_b187_4974_a1d5_e0ff91372277, v15) )
        return (unsigned int)-2147024846;
      v18 = AERTGetDLLRTHeap();
      v19 = AERTAllocate(0x238uLL, v18);
      if ( v19 )
        v10 = (_OWORD *)ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v19);
      else
        v10 = 0LL;
      if ( v10 )
        goto LABEL_5;
      return (unsigned int)-2147024882;
    }
    v16 = AERTGetDLLRTHeap();
    v17 = AERTAllocate(0x228uLL, v16);
    if ( v17 )
      v10 = (_OWORD *)ATL::CComObject<CCrossProcessClientInputEndpoint>::CComObject<CCrossProcessClientInputEndpoint>(v17);
    else
      v10 = 0LL;
  }
  if ( !v10 )
    return (unsigned int)-2147024882;
LABEL_5:
  (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v10 + 8LL))(v10);
  v10[13] = *a2;
  *a4 = (char *)v10 + 8;
  return v7;
}
