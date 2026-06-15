/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000B1F4
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14001BB60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z @ 0x1400033CC (-IsEnabled@AudioDgTelemetryProvider@@SA_NE_K@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004978 (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ??0?$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z @ 0x140008828 (--0-$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140009F28 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009F88 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001313C (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140015140 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14001873C (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ??4?$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z @ 0x14001B610 (--4-$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140050C6C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x1400592C4 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(__int64 a1, __int64 a2, __int64 a3, CPipeInstance **a4)
{
  int v5; // edi
  int v6; // r12d
  int FxPropertyStore; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned int i; // r13d
  int v12; // r15d
  GUID *v13; // rax
  GUID v14; // xmm6
  unsigned int v15; // r15d
  __int64 v16; // rdx
  bool v17; // cf
  int v18; // r8d
  int v19; // r15d
  int APOProcessNode; // eax
  int v21; // eax
  CPipeInstance *v22; // rax
  CPipeInstance *v23; // rax
  CPipeInstance *v24; // rdi
  unsigned __int64 v25; // r14
  int EndpointGuidFromEndpointId; // eax
  const unsigned __int16 *v27; // r12
  unsigned __int64 v28; // r15
  unsigned __int16 *v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // eax
  CPipeInstance *v32; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int16 **v38; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v39; // [rsp+28h] [rbp-130h]
  unsigned int v40; // [rsp+30h] [rbp-128h]
  unsigned int v41[2]; // [rsp+40h] [rbp-118h] BYREF
  int v42; // [rsp+48h] [rbp-110h]
  int v43; // [rsp+4Ch] [rbp-10Ch]
  __int64 v44; // [rsp+50h] [rbp-108h] BYREF
  struct CDeviceProcessNode *v45; // [rsp+58h] [rbp-100h] BYREF
  CPipeInstance *v46; // [rsp+60h] [rbp-F8h]
  GUID v47; // [rsp+70h] [rbp-E8h] BYREF
  int pExceptionObject; // [rsp+80h] [rbp-D8h] BYREF
  int v49; // [rsp+84h] [rbp-D4h] BYREF
  int v50; // [rsp+88h] [rbp-D0h] BYREF
  int v51; // [rsp+8Ch] [rbp-CCh] BYREF
  int v52; // [rsp+90h] [rbp-C8h] BYREF
  int v53; // [rsp+94h] [rbp-C4h] BYREF
  int v54; // [rsp+98h] [rbp-C0h] BYREF
  int v55; // [rsp+9Ch] [rbp-BCh] BYREF
  int v56; // [rsp+A0h] [rbp-B8h] BYREF
  int v57; // [rsp+A4h] [rbp-B4h] BYREF
  int v58; // [rsp+A8h] [rbp-B0h] BYREF
  struct IPropertyStore *v59; // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-A0h] BYREF
  unsigned __int64 v61[2]; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v62; // [rsp+D0h] [rbp-88h] BYREF
  __int64 v63; // [rsp+E0h] [rbp-78h]
  __int128 v64; // [rsp+E8h] [rbp-70h]
  int v65; // [rsp+F8h] [rbp-60h]
  struct CDeviceProcessNode *v68; // [rsp+170h] [rbp+18h] BYREF
  CPipeInstance **v69; // [rsp+178h] [rbp+20h]

  v69 = a4;
  v5 = 0;
  v42 = 0;
  v45 = 0LL;
  v46 = 0LL;
  *(_QWORD *)v41 = 0LL;
  v44 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 10;
  LODWORD(v68) = 0;
  v6 = 0;
  v59 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids);
  }
  FxPropertyStore = TryGetFxPropertyStore(*(const unsigned __int16 **)(a3 + 56), &v59);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v9 = *(_QWORD *)(a3 + 24);
  if ( v9 )
  {
    v10 = CProcessNode::CreateDummyProcessNode(*(unsigned int *)(a3 + 72), v9, &v44);
    if ( v10 < 0 )
    {
      v49 = v10;
      throw (long *)&v49;
    }
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v44);
    v44 = 0LL;
  }
  if ( !*(_DWORD *)(a3 + 72) )
  {
    LODWORD(v68) = 1;
    if ( AudioDgTelemetryProvider::IsEnabled(v8) )
      v6 = 1;
  }
  for ( i = 0; i < *(_DWORD *)(a3 + 96); ++i )
  {
    v42 = (1 << i) & *(_DWORD *)(a3 + 80);
    v12 = (1 << i) & *(_DWORD *)(a3 + 92);
    v43 = v12;
    if ( !v42 )
      goto LABEL_15;
    if ( *(_DWORD *)(a3 + 88) == i )
    {
      if ( (_DWORD)v68 )
      {
        v47 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v34 = CAPOProcessNode::CreateAPOProcessNode(
                &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                0LL,
                *(unsigned int *)(a3 + 72),
                1LL,
                0,
                &v47,
                v41);
        if ( v34 < 0 )
        {
          v50 = v34;
          throw (long *)&v50;
        }
        v68 = *(struct CDeviceProcessNode **)v41;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v68);
        *(_QWORD *)v41 = 0LL;
        LODWORD(v68) = 0;
      }
      if ( v6 )
      {
        v47 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v35 = CAPOProcessNode::CreateAPOProcessNode(
                &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                0LL,
                *(unsigned int *)(a3 + 72),
                1LL,
                0,
                &v47,
                v41);
        if ( v35 < 0 )
        {
          v51 = v35;
          throw (long *)&v51;
        }
        *(_QWORD *)&v47.Data1 = *(_QWORD *)v41;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v47);
        *(_QWORD *)v41 = 0LL;
        v6 = 0;
      }
    }
    v13 = (GUID *)(a3 + 120);
    if ( v12 )
LABEL_15:
      v13 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v14 = *v13;
    v15 = *(_DWORD *)(a3 + 72);
    if ( v42 )
    {
      ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v60, (__int64)v59);
      v5 |= 1u;
      v16 = v60;
      v17 = v43 != 0;
      v43 = -v43;
      v18 = v17 + 2;
    }
    else
    {
      v18 = 0;
      v61[0] = 0LL;
      v5 |= 2u;
      v16 = 0LL;
    }
    v42 = v5;
    v47 = v14;
    v19 = CAPOProcessNode::CreateAPOProcessNode(16LL * i + a3 + 200, v16, v15, 0LL, v18, &v47, v41);
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)v61);
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v60);
    }
    if ( v19 < 0 )
    {
      v52 = v19;
      throw (long *)&v52;
    }
    *(_QWORD *)&v47.Data1 = *(_QWORD *)v41;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v47);
    *(_QWORD *)v41 = 0LL;
  }
  if ( (_DWORD)v68 )
  {
    *(GUID *)v61 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                       &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                       0LL,
                       *(unsigned int *)(a3 + 72),
                       1LL,
                       0,
                       v61,
                       v41);
    if ( APOProcessNode < 0 )
    {
      v53 = APOProcessNode;
      throw (long *)&v53;
    }
    v68 = *(struct CDeviceProcessNode **)v41;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v68);
    *(_QWORD *)v41 = 0LL;
  }
  if ( v6 )
  {
    *(GUID *)v61 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v36 = CAPOProcessNode::CreateAPOProcessNode(
            &GUID_693badea_1eb1_4013_b799_285f624a55bd,
            0LL,
            *(unsigned int *)(a3 + 72),
            1LL,
            0,
            v61,
            v41);
    if ( v36 < 0 )
    {
      v54 = v36;
      throw (long *)&v54;
    }
    v68 = *(struct CDeviceProcessNode **)v41;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v68);
    *(_QWORD *)v41 = 0LL;
  }
  v21 = CDeviceProcessNode::CreateDeviceProcessNode((struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)a3, &v45);
  if ( v21 < 0 )
  {
    v55 = v21;
    throw (long *)&v55;
  }
  v68 = v45;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v62, &v68);
  v45 = 0LL;
  v22 = (CPipeInstance *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  v68 = v22;
  if ( !v22 )
  {
    v46 = 0LL;
LABEL_71:
    v58 = -2147024882;
    throw (long *)&v58;
  }
  v23 = CPipeInstance::CPipeInstance(v22, READ_DATA_PIPE);
  v24 = v23;
  v46 = v23;
  if ( !v23 )
    goto LABEL_71;
  *(_OWORD *)((char *)v23 + 296) = *(_OWORD *)(a3 + 152);
  *((_DWORD *)v23 + 3) = *(_DWORD *)(a3 + 72);
  *((_DWORD *)v23 + 33) = *(_DWORD *)(a3 + 80) != 0;
  *((_DWORD *)v23 + 31) = *(_DWORD *)(a3 + 100) == 1;
  *((_DWORD *)v23 + 32) = *(_DWORD *)(a3 + 100);
  ATL::CComPtr<IAudioProcessor>::operator=((char *)v23 + 152, a1);
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((__int64 *)v24 + 30, a2);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v24 + 16, (__int64)&v62);
  v25 = -1LL;
  *((_DWORD *)v24 + 53) = *(_DWORD *)(a3 + 88) != -1;
  *((_DWORD *)v24 + 78) = *(_DWORD *)(a3 + 148);
  EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*(_QWORD *)(a3 + 56), (char *)v24 + 160);
  if ( EndpointGuidFromEndpointId < 0 )
  {
    v56 = EndpointGuidFromEndpointId;
    throw (long *)&v56;
  }
  v27 = *(const unsigned __int16 **)(a3 + 56);
  do
    ++v25;
  while ( v27[v25] );
  *((_QWORD *)v24 + 24) = 0LL;
  v28 = v25 + 1;
  if ( v25 + 1 < v25 || !is_mul_ok(v28, 2uLL) )
  {
    v37 = -2147024362;
LABEL_69:
    v57 = v37;
    throw (long *)&v57;
  }
  v29 = (unsigned __int16 *)CoTaskMemAlloc(2 * v28);
  *((_QWORD *)v24 + 24) = v29;
  if ( !v29 )
  {
    v37 = -2147024882;
    goto LABEL_69;
  }
  StringCchCopyNExW(v29, v25 + 1, v27, v25, v38, v39, v40);
  v31 = (int)((float)((float)*(int *)(*(_QWORD *)(a3 + 8) + 8LL)
                    / (float)*(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 12LL))
            * (double)(int)*(_QWORD *)(a3 + 32)
            / 10000000.0
            + 0.5);
  *((_DWORD *)v24 + 36) = v31;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, v31);
  }
  v32 = *v69;
  *v69 = v24;
  if ( v32 )
    CPipeInstance::`scalar deleting destructor'(v32, v30);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, 0LL);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v59);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v62);
  return 0LL;
}
