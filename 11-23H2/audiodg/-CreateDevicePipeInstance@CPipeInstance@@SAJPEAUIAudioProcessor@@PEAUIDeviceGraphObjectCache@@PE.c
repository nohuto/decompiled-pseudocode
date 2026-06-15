/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14001CF18
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140019BC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140006804 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140007204 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000ACA8 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z @ 0x14000C4F0 (--0-$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000CE70 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000CEA8 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EB00 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140012F94 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140016758 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001D8B0 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x14001E6E8 (-IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@@@details@wil@@QEAA_NXZ @ 0x14002AC3C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005288C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14005C120 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        __int64 a3,
        CPipeInstance **a4)
{
  unsigned int v5; // edi
  int v6; // r12d
  int v7; // r14d
  int v8; // r13d
  int FxPropertyStore; // eax
  unsigned __int8 v10; // cl
  const WAVEFORMATEX *v11; // rdx
  int v12; // eax
  unsigned int i; // ecx
  int v14; // edx
  int v15; // r14d
  int v16; // eax
  int v17; // eax
  GUID v18; // xmm6
  int v19; // r14d
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  CPipeInstance *v26; // rax
  CPipeInstance *v27; // rax
  CPipeInstance *v28; // rdi
  unsigned __int64 v29; // r14
  int EndpointGuidFromEndpointId; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  const unsigned __int16 *v33; // r8
  int v34; // eax
  int v35; // r14d
  unsigned int v36; // eax
  CPipeInstance *v37; // rcx
  _QWORD *v38; // rcx
  __int64 v40; // [rsp+20h] [rbp-148h]
  struct CDeviceProcessNode *v41; // [rsp+40h] [rbp-128h] BYREF
  struct CDeviceProcessNode *v42; // [rsp+48h] [rbp-120h] BYREF
  int v43; // [rsp+50h] [rbp-118h]
  GUID v44; // [rsp+60h] [rbp-108h] BYREF
  void (__fastcall ***v45)(_QWORD, __int64); // [rsp+70h] [rbp-F8h] BYREF
  struct CDeviceProcessNode *v46; // [rsp+78h] [rbp-F0h] BYREF
  CPipeInstance *v47; // [rsp+80h] [rbp-E8h]
  int pExceptionObject; // [rsp+88h] [rbp-E0h] BYREF
  int v49; // [rsp+8Ch] [rbp-DCh] BYREF
  int v50; // [rsp+90h] [rbp-D8h] BYREF
  int v51; // [rsp+94h] [rbp-D4h] BYREF
  int v52; // [rsp+98h] [rbp-D0h] BYREF
  int v53; // [rsp+9Ch] [rbp-CCh] BYREF
  int v54; // [rsp+A0h] [rbp-C8h] BYREF
  int v55; // [rsp+A4h] [rbp-C4h] BYREF
  int v56; // [rsp+A8h] [rbp-C0h] BYREF
  int v57; // [rsp+ACh] [rbp-BCh] BYREF
  int v58; // [rsp+B0h] [rbp-B8h] BYREF
  int v59; // [rsp+B4h] [rbp-B4h] BYREF
  struct IPropertyStore *v60; // [rsp+B8h] [rbp-B0h] BYREF
  GUID v61; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-98h] BYREF
  __int128 v63; // [rsp+D8h] [rbp-90h] BYREF
  __int64 v64; // [rsp+E8h] [rbp-80h]
  __int128 v65; // [rsp+F0h] [rbp-78h]
  int v66; // [rsp+100h] [rbp-68h]
  __int64 v67; // [rsp+108h] [rbp-60h] BYREF
  long *v68; // [rsp+110h] [rbp-58h] BYREF
  ATL::CAtlException *v69; // [rsp+118h] [rbp-50h] BYREF
  struct CDeviceProcessNode *v72; // [rsp+180h] [rbp+18h] BYREF
  CPipeInstance **v73; // [rsp+188h] [rbp+20h]

  v73 = a4;
  v5 = 0;
  v44.Data1 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v41 = 0LL;
  v45 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 10;
  v6 = 0;
  v7 = 0;
  v43 = 0;
  v8 = 0;
  v60 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids);
  }
  try
  {
    FxPropertyStore = TryGetFxPropertyStore(*(const unsigned __int16 **)(a3 + 56), &v60);
    if ( FxPropertyStore < 0 )
    {
      pExceptionObject = FxPropertyStore;
      throw (long *)&pExceptionObject;
    }
    v11 = *(const WAVEFORMATEX **)(a3 + 24);
    if ( v11 )
    {
      v12 = CProcessNode::CreateDummyProcessNode(*(_DWORD *)(a3 + 72), v11, &v45);
      if ( v12 < 0 )
      {
        v49 = v12;
        throw (long *)&v49;
      }
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v63, (__int64)&v45);
      v45 = 0LL;
    }
    if ( *(_DWORD *)(a3 + 72) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SpeakForMeAudioStreams>::GetImpl'::`2'::impl) )
        v7 = 1;
      v43 = v7;
    }
    else
    {
      v6 = 1;
      if ( AudioDgTelemetryProvider::IsEnabled(v10, (unsigned __int64)v11) )
        v8 = 1;
    }
    for ( i = 0; ; i = (_DWORD)v72 + 1 )
    {
      LODWORD(v72) = i;
      if ( i >= *(_DWORD *)(a3 + 96) )
      {
        if ( v6 )
        {
          v61 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v22 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                  0LL,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  &v61,
                  &v41);
          if ( v22 < 0 )
          {
            v53 = v22;
            throw (long *)&v53;
          }
          v72 = v41;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v63, (__int64)&v72);
          v41 = 0LL;
        }
        if ( v8 )
        {
          v61 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v23 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                  0LL,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  &v61,
                  &v41);
          if ( v23 < 0 )
          {
            v54 = v23;
            throw (long *)&v54;
          }
          v72 = v41;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v63, (__int64)&v72);
          v41 = 0LL;
        }
        if ( v43 )
        {
          v61 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v24 = CAPOProcessNode::CreateAPOProcessNode(
                  &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
                  0LL,
                  *(_DWORD *)(a3 + 72),
                  1,
                  0,
                  &v61,
                  &v41);
          if ( v24 < 0 )
          {
            v55 = v24;
            throw (long *)&v55;
          }
          v72 = v41;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v63, (__int64)&v72);
          v41 = 0LL;
        }
        v25 = CDeviceProcessNode::CreateDeviceProcessNode((struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)a3, &v46);
        if ( v25 < 0 )
        {
          v56 = v25;
          throw (long *)&v56;
        }
        v72 = v46;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v63, (__int64)&v72);
        v46 = 0LL;
        v26 = (CPipeInstance *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
        v72 = v26;
        if ( v26 )
        {
          v27 = CPipeInstance::CPipeInstance(v26, READ_DATA_PIPE);
          v28 = v27;
          v47 = v27;
          if ( v27 )
          {
            *(_OWORD *)((char *)v27 + 296) = *(_OWORD *)(a3 + 148);
            *((_DWORD *)v27 + 3) = *(_DWORD *)(a3 + 72);
            *((_DWORD *)v27 + 33) = *(_DWORD *)(a3 + 80) != 0;
            *((_DWORD *)v27 + 31) = *(_DWORD *)(a3 + 100) == 1;
            *((_DWORD *)v27 + 32) = *(_DWORD *)(a3 + 100);
            if ( *((struct IUnknown **)v27 + 19) != a1 )
              ATL::AtlComPtrAssign((struct IUnknown **)v27 + 19, a1);
            if ( *((struct IUnknown **)v28 + 30) != a2 )
              ATL::AtlComPtrAssign((struct IUnknown **)v28 + 30, a2);
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList(
              (__int64)v28 + 16,
              (__int64)&v63);
            v29 = -1LL;
            *((_DWORD *)v28 + 53) = *(_DWORD *)(a3 + 88) != -1;
            *((_DWORD *)v28 + 78) = *(_DWORD *)(a3 + 144);
            EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*(_QWORD *)(a3 + 56), (char *)v28 + 160);
            if ( EndpointGuidFromEndpointId < 0 )
            {
              v57 = EndpointGuidFromEndpointId;
              throw (long *)&v57;
            }
            v33 = *(const unsigned __int16 **)(a3 + 56);
            do
              ++v29;
            while ( v33[v29] );
            v34 = _AllocStringWorker<CTCoAllocPolicy>(v32, v31, v33, v29, v40, (unsigned __int16 **)v28 + 24);
            v35 = v34;
            if ( v34 < 0 )
            {
              v58 = v34;
              throw (long *)&v58;
            }
            v36 = (int)((float)((float)*(int *)(*(_QWORD *)(a3 + 8) + 8LL)
                              / (float)*(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 12LL))
                      * (double)(int)*(_QWORD *)(a3 + 32)
                      / 10000000.0
                      + 0.5);
            *((_DWORD *)v28 + 36) = v36;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, v36);
            }
            goto LABEL_100;
          }
        }
        else
        {
          v47 = 0LL;
        }
        v59 = -2147024882;
        throw (long *)&v59;
      }
      v14 = *(_DWORD *)(a3 + 80) & (1 << i);
      LODWORD(v42) = v14;
      v15 = (1 << i) & *(_DWORD *)(a3 + 92);
      if ( v14 )
      {
        if ( *(_DWORD *)(a3 + 88) == i )
        {
          if ( v6 )
          {
            v44 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            v16 = CAPOProcessNode::CreateAPOProcessNode(
                    &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                    0LL,
                    *(_DWORD *)(a3 + 72),
                    1,
                    0,
                    &v44,
                    &v41);
            if ( v16 < 0 )
            {
              v50 = v16;
              throw (long *)&v50;
            }
            *(_QWORD *)&v44.Data1 = v41;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v63, (__int64)&v44);
            v41 = 0LL;
            v6 = 0;
          }
          if ( v8 )
          {
            v44 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            v17 = CAPOProcessNode::CreateAPOProcessNode(
                    &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                    0LL,
                    *(_DWORD *)(a3 + 72),
                    1,
                    0,
                    &v44,
                    &v41);
            if ( v17 < 0 )
            {
              v51 = v17;
              throw (long *)&v51;
            }
            *(_QWORD *)&v44.Data1 = v41;
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v63, (__int64)&v44);
            v41 = 0LL;
            v8 = 0;
          }
        }
        if ( !v15 )
        {
          v18 = *(GUID *)(a3 + 120);
LABEL_29:
          v19 = (v15 != 0) + 2;
          LODWORD(v42) = *(_DWORD *)(a3 + 72);
          ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v62, (__int64)v60);
          v5 |= 1u;
          v20 = v62;
          goto LABEL_31;
        }
        v14 = (int)v42;
      }
      v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( v14 )
        goto LABEL_29;
      v19 = 0;
      LODWORD(v42) = *(_DWORD *)(a3 + 72);
      v67 = 0LL;
      v5 |= 2u;
      v20 = 0LL;
LABEL_31:
      v44.Data1 = v5;
      v61 = v18;
      v21 = CAPOProcessNode::CreateAPOProcessNode(
              (const struct _GUID *)(a3 + 16LL * (unsigned int)v72 + 196),
              v20,
              (int)v42,
              0,
              v19,
              &v61,
              &v41);
      if ( (v5 & 2) != 0 )
      {
        v5 &= ~2u;
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v67);
      }
      if ( (v5 & 1) != 0 )
      {
        v5 &= ~1u;
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v62);
      }
      if ( v21 < 0 )
      {
        v52 = v21;
        throw (long *)&v52;
      }
      v42 = v41;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v63, (__int64)&v42);
      v41 = 0LL;
    }
  }
  catch ( long *v68 )
  {
    LODWORD(v72) = *(_DWORD *)v68;
    goto LABEL_61;
  }
  catch ( ATL::CAtlException *v69 )
  {
    LODWORD(v72) = *(_DWORD *)v69;
LABEL_61:
    v35 = (int)v72;
    if ( (int)v72 < 0 )
    {
      if ( v45 )
        (**v45)(v45, 1LL);
      if ( v41 )
        (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v41)(v41, 1LL);
      if ( v46 )
        (**(void (__fastcall ***)(struct CDeviceProcessNode *, __int64))v46)(v46, 1LL);
      v37 = v47;
      if ( v47 )
        goto LABEL_73;
      CleanupProcessNodeList(&v63);
      goto LABEL_74;
    }
    v28 = v47;
  }
LABEL_100:
  v37 = *v73;
  *v73 = v28;
  if ( v37 )
LABEL_73:
    CPipeInstance::`scalar deleting destructor'(v37);
LABEL_74:
  v38 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids);
    v38 = WPP_GLOBAL_Control;
  }
  if ( v35 < 0 )
  {
    if ( v38 != &WPP_GLOBAL_Control && (*((_DWORD *)v38 + 7) & 0x20000) != 0 && *((_BYTE *)v38 + 25) >= 2u )
      WPP_SF_d(v38[2], 13LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, (unsigned int)v35);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateDevicePipeInstance", 0x15Fu, v35);
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v60);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v63);
  return (unsigned int)v35;
}
