/*
 * XREFs of ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005C1B4
 * Callers:
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063540 (-CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStr.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400773B0 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140007204 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000ACA8 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000CE70 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000CEA8 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EB00 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ?Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14005D1AC (-Create@CBridgeToAPOProcessNode@@SAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PE.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo(
        char a1,
        struct IUnknown *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        struct CPipeInstance *a5,
        struct tWAVEFORMATEX *a6,
        struct SYSTEM_AUDIO_STREAM *a7,
        struct CPipeInstance **a8)
{
  BOOL v10; // r14d
  float v11; // xmm6_4
  struct tWAVEFORMATEX *v12; // r13
  int v13; // eax
  int v14; // eax
  int v15; // eax
  CPipeInstance *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  CPipeInstance *v19; // rdi
  const unsigned __int16 *v20; // r8
  unsigned __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // esi
  struct CPipeInstance *v24; // r14
  int v25; // ecx
  int v26; // eax
  __int64 v28; // [rsp+20h] [rbp-A8h]
  CPipeInstance *v29; // [rsp+30h] [rbp-98h] BYREF
  int pExceptionObject; // [rsp+38h] [rbp-90h] BYREF
  int v31; // [rsp+3Ch] [rbp-8Ch] BYREF
  int v32; // [rsp+40h] [rbp-88h] BYREF
  int v33; // [rsp+44h] [rbp-84h] BYREF
  int v34; // [rsp+48h] [rbp-80h] BYREF
  __int128 v35; // [rsp+50h] [rbp-78h] BYREF
  __int64 v36; // [rsp+60h] [rbp-68h]
  __int128 v37; // [rsp+68h] [rbp-60h]
  int v38; // [rsp+78h] [rbp-50h]
  long *v39; // [rsp+80h] [rbp-48h] BYREF
  ATL::CAtlException *v40; // [rsp+88h] [rbp-40h] BYREF
  CPipeInstance *v42; // [rsp+E0h] [rbp+18h] BYREF

  v10 = *(_DWORD *)a3 != 0;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 10;
  if ( *((_DWORD *)a3 + 2) == 1 )
    v11 = FLOAT_1_0;
  else
    v11 = FLOAT_1_1;
  try
  {
    *a8 = 0LL;
    a7 = 0LL;
    v12 = a6;
    v13 = CBridgeToAPOProcessNode::Create(a3, a4, a6, &a7);
    if ( v13 < 0 )
    {
      pExceptionObject = v13;
      throw (long *)&pExceptionObject;
    }
    v42 = a7;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v35, (__int64)&v42);
    a7 = 0LL;
    v42 = 0LL;
    v14 = CProcessNode::CreateDummyProcessNode(v10, v12, &v42);
    if ( v14 < 0 )
    {
      v31 = v14;
      throw (long *)&v31;
    }
    v29 = v42;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v35, (__int64)&v29);
    v42 = 0LL;
    v15 = CProcessNode::CreateDummyProcessNode(v10, v12, &v42);
    if ( v15 < 0 )
    {
      v32 = v15;
      throw (long *)&v32;
    }
    v29 = v42;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v35, (__int64)&v29);
    v42 = 0LL;
    v16 = (CPipeInstance *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
    v29 = v16;
    if ( v16 )
      v19 = CPipeInstance::CPipeInstance(v16, (enum PIPE_TYPE)5);
    else
      v19 = 0LL;
    v29 = v19;
    if ( !v19 )
    {
      v33 = -2147024882;
      throw (long *)&v33;
    }
    v20 = (const unsigned __int16 *)*((_QWORD *)a3 + 6);
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = _AllocStringWorker<CTCoAllocPolicy>(v18, v17, v20, v21, v28, (unsigned __int16 **)v19 + 24);
    v23 = v22;
    if ( v22 < 0 )
    {
      v34 = v22;
      throw (long *)&v34;
    }
    *((_DWORD *)v19 + 30) = *(_DWORD *)a3 == 2;
    *((_DWORD *)v19 + 3) = v10;
    *((_DWORD *)v19 + 33) = 0;
    *((_DWORD *)v19 + 31) = 0;
    if ( *((_QWORD *)v19 + 19) )
      ATL::AtlComPtrAssign((struct IUnknown **)v19 + 19, 0LL);
    if ( *((struct IUnknown **)v19 + 30) != a2 )
      ATL::AtlComPtrAssign((struct IUnknown **)v19 + 30, a2);
    v24 = a5;
    *(_QWORD *)v19 = a5;
    *((_DWORD *)v19 + 2) = v24 == 0LL;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v19 + 16, (__int64)&v35);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v35);
    if ( a1 )
    {
      if ( *((_DWORD *)a3 + 14) )
      {
        v25 = *((_DWORD *)a3 + 14);
LABEL_29:
        *((_DWORD *)v19 + 36) = v25;
        v26 = 1;
        if ( *((_DWORD *)a3 + 1) )
          v26 = 7;
        *((_DWORD *)v19 + 34) = v26;
        *((_QWORD *)v19 + 26) = 1LL;
        v29 = 0LL;
        *a8 = v19;
        ATL::CAutoPtr<CPipeInstance>::Free(&v29);
        goto LABEL_39;
      }
    }
    else if ( v24 )
    {
      v25 = *((_DWORD *)v24 + 35);
      goto LABEL_29;
    }
    v25 = (int)(float)((float)(int)((double)(int)(v12->nAvgBytesPerSec / v12->nBlockAlign)
                                  * (double)(int)*((_QWORD *)a3 + 5)
                                  / 10000000.0
                                  + 0.5)
                     * v11);
    goto LABEL_29;
  }
  catch ( long *v39 )
  {
    LODWORD(a8) = *(_DWORD *)v39;
    goto LABEL_32;
  }
  catch ( ATL::CAtlException *v40 )
  {
    LODWORD(a8) = *(_DWORD *)v40;
LABEL_32:
    v23 = (unsigned int)a8;
    if ( (int)a8 < 0 )
      AudDGTraceLoggingErrorHelper("CPipeInstance::CreateBridgeStreamPipeInstanceToTargetApo", 0x40Cu, (int)a8);
  }
LABEL_39:
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v35);
  return v23;
}
