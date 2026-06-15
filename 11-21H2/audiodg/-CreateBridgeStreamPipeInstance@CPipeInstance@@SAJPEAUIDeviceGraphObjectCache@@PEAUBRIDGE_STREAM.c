/*
 * XREFs of ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005944C
 * Callers:
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14005F450 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 * Callees:
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140009F28 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009F88 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001313C (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14001873C (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ??4?$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z @ 0x14001B610 (--4-$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     ?CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14005A5C4 (-CreateAPOEndpointProcessNode@CAPOEndpointProcessNode@@SAJW4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudio.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateBridgeStreamPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct BRIDGE_STREAM_DESCRIPTOR *a2,
        struct IAudioProcessingObject *a3,
        struct CPipeInstance *a4,
        struct tWAVEFORMATEX *a5,
        struct SYSTEM_AUDIO_STREAM *a6,
        struct CPipeInstance **a7)
{
  BOOL v8; // r13d
  float v9; // xmm6_4
  struct tWAVEFORMATEX *v10; // r15
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int16 *v14; // rax
  CPipeInstance *v15; // rdi
  unsigned __int16 *v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r12
  char *v19; // rax
  int v20; // eax
  struct CPipeInstance *v21; // rsi
  int v22; // eax
  int v23; // eax
  unsigned int v24; // edi
  CPipeInstance *v26; // [rsp+40h] [rbp-B8h] BYREF
  int pExceptionObject; // [rsp+48h] [rbp-B0h] BYREF
  int v28; // [rsp+4Ch] [rbp-ACh] BYREF
  int v29; // [rsp+50h] [rbp-A8h] BYREF
  int v30; // [rsp+54h] [rbp-A4h] BYREF
  int v31; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int16 *v32; // [rsp+60h] [rbp-98h]
  __int128 v33; // [rsp+68h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-80h]
  __int128 v35; // [rsp+80h] [rbp-78h]
  int v36; // [rsp+90h] [rbp-68h]
  long *v37; // [rsp+98h] [rbp-60h] BYREF
  ATL::CAtlException *v38; // [rsp+A0h] [rbp-58h] BYREF
  CPipeInstance *v40; // [rsp+108h] [rbp+10h] BYREF
  struct CPipeInstance *v41; // [rsp+118h] [rbp+20h]

  v41 = a4;
  v8 = *(_DWORD *)a2 != 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v9 = FLOAT_1_0;
  else
    v9 = FLOAT_1_1;
  try
  {
    *a7 = 0LL;
    a6 = 0LL;
    v10 = a5;
    v11 = CAPOEndpointProcessNode::CreateAPOEndpointProcessNode(*(unsigned int *)a2, a3, a5, &a6);
    if ( v11 < 0 )
    {
      pExceptionObject = v11;
      throw (long *)&pExceptionObject;
    }
    v40 = a6;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v33, &v40);
    a6 = 0LL;
    v40 = 0LL;
    v12 = CProcessNode::CreateDummyProcessNode(v8, v10, &v40);
    if ( v12 < 0 )
    {
      v28 = v12;
      throw (long *)&v28;
    }
    v26 = v40;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v33, &v26);
    v40 = 0LL;
    v13 = CProcessNode::CreateDummyProcessNode(v8, v10, &v40);
    if ( v13 < 0 )
    {
      v29 = v13;
      throw (long *)&v29;
    }
    v26 = v40;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v33, &v26);
    v40 = 0LL;
    v14 = (unsigned __int16 *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
    v32 = v14;
    if ( v14 )
      v15 = CPipeInstance::CPipeInstance((CPipeInstance *)v14, (enum PIPE_TYPE)5);
    else
      v15 = 0LL;
    v26 = v15;
    if ( !v15 )
    {
      v30 = -2147024882;
      throw (long *)&v30;
    }
    v16 = (unsigned __int16 *)*((_QWORD *)a2 + 5);
    v32 = v16;
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    *((_QWORD *)v15 + 24) = 0LL;
    v18 = v17 + 1;
    if ( v17 + 1 < v17 || !is_mul_ok(v18, 2uLL) )
    {
      v20 = -2147024362;
LABEL_28:
      v31 = v20;
      throw (long *)&v31;
    }
    v19 = (char *)CoTaskMemAlloc(2 * v18);
    *((_QWORD *)v15 + 24) = v19;
    if ( !v19 )
    {
      v20 = -2147024882;
      goto LABEL_28;
    }
    StringCchCopyNExW(v19, v17 + 1, v32, v17);
    *((_DWORD *)v15 + 30) = *(_DWORD *)a2 == 2;
    *((_DWORD *)v15 + 3) = v8;
    *((_DWORD *)v15 + 33) = 0;
    *((_DWORD *)v15 + 31) = 0;
    ATL::CComPtr<IAudioProcessor>::operator=((__int64 *)v15 + 19, 0LL);
    ATL::CComPtr<IDeviceGraphObjectCache>::operator=((__int64 *)v15 + 30, (__int64)a1);
    v21 = v41;
    *(_QWORD *)v15 = v41;
    *((_DWORD *)v15 + 2) = v21 == 0LL;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v15 + 16, (__int64)&v33);
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v33);
    if ( v21 )
      v22 = *((_DWORD *)v21 + 35);
    else
      v22 = (int)(float)((float)(int)((double)(int)(v10->nAvgBytesPerSec / v10->nBlockAlign)
                                    * (double)(int)*((_QWORD *)a2 + 4)
                                    / 10000000.0
                                    + 0.5)
                       * v9);
    *((_DWORD *)v15 + 36) = v22;
    v23 = 1;
    if ( *((_DWORD *)a2 + 1) )
      v23 = 7;
    *((_DWORD *)v15 + 34) = v23;
    *((_QWORD *)v15 + 26) = 1LL;
    v26 = 0LL;
    *a7 = v15;
    ATL::CAutoPtr<CPipeInstance>::Free(&v26);
    v24 = 0;
  }
  catch ( long *v37 )
  {
    LODWORD(a7) = *(_DWORD *)v37;
    goto LABEL_29;
  }
  catch ( ATL::CAtlException *v38 )
  {
    LODWORD(a7) = *(_DWORD *)v38;
LABEL_29:
    v24 = (unsigned int)a7;
    if ( (int)a7 < 0 )
      AudDGTraceLoggingErrorHelper("CPipeInstance::CreateBridgeStreamPipeInstance", 0x3C6u, (int)a7);
  }
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v33);
  return v24;
}
