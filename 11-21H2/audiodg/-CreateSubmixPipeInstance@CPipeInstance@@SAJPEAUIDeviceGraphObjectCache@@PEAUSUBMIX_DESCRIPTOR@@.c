/*
 * XREFs of ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B748
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400089B0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z @ 0x140008828 (--0-$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140009F28 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009F88 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
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
 *     CreateAudioMediaType @ 0x140031A14 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SUBMIX_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  int v5; // edi
  BOOL v6; // r13d
  int FxPropertyStore; // eax
  int v8; // eax
  unsigned int i; // r14d
  HRESULT v10; // eax
  int v11; // eax
  CPipeInstance *v12; // rdi
  CPipeInstance *v13; // rax
  CPipeInstance *v14; // rdi
  const unsigned __int16 *v15; // r12
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  unsigned __int16 *v18; // rax
  int v20; // eax
  GUID v21; // xmm6
  int v22; // r15d
  __int64 v23; // rdx
  int v24; // r15d
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  unsigned __int16 **v28; // [rsp+20h] [rbp-108h]
  unsigned __int64 *v29; // [rsp+28h] [rbp-100h]
  unsigned int v30; // [rsp+30h] [rbp-F8h]
  CPipeInstance *v31; // [rsp+40h] [rbp-E8h] BYREF
  int pExceptionObject; // [rsp+48h] [rbp-E0h] BYREF
  int v33; // [rsp+4Ch] [rbp-DCh] BYREF
  int v34; // [rsp+50h] [rbp-D8h] BYREF
  HRESULT v35; // [rsp+54h] [rbp-D4h] BYREF
  int v36; // [rsp+58h] [rbp-D0h] BYREF
  int v37; // [rsp+5Ch] [rbp-CCh] BYREF
  int v38; // [rsp+60h] [rbp-C8h] BYREF
  int v39; // [rsp+64h] [rbp-C4h] BYREF
  CPipeInstance *v40; // [rsp+68h] [rbp-C0h] BYREF
  struct IPropertyStore *v41; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+78h] [rbp-B0h] BYREF
  CPipeInstance *v43; // [rsp+80h] [rbp-A8h] BYREF
  unsigned __int64 v44[2]; // [rsp+90h] [rbp-98h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v46; // [rsp+B0h] [rbp-78h]
  __int128 v47; // [rsp+B8h] [rbp-70h]
  int v48; // [rsp+C8h] [rbp-60h]
  CPipeInstance *v50; // [rsp+138h] [rbp+10h] BYREF
  struct CPipeInstance **v51; // [rsp+140h] [rbp+18h]
  IAudioMediaType *ppIAudioMediaType; // [rsp+148h] [rbp+20h] BYREF

  v51 = a3;
  v5 = 0;
  LODWORD(v50) = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 10;
  v6 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids);
  }
  *a3 = 0LL;
  v41 = 0LL;
  FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 4), &v41);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v40 = 0LL;
  v8 = CProcessNode::CreateDummyProcessNode(v6, *((_QWORD *)a2 + 3), &v40);
  if ( v8 < 0 )
  {
    v33 = v8;
    throw (long *)&v33;
  }
  v50 = v40;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v45, &v50);
  v40 = 0LL;
  for ( i = 0; i < *((_DWORD *)a2 + 22); ++i )
  {
    v43 = 0LL;
    v20 = *((_DWORD *)a2 + 16);
    if ( _bittest(&v20, i) )
    {
      v21 = *(GUID *)((char *)a2 + 68);
      v22 = 2;
      ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v42, (__int64)v41);
      v5 |= 1u;
      v23 = v42;
    }
    else
    {
      v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v22 = 0;
      v31 = 0LL;
      v5 |= 2u;
      v23 = 0LL;
    }
    LODWORD(v50) = v5;
    *(GUID *)v44 = v21;
    v24 = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * i + 92, v23, v6, 0LL, v22, v44, &v43);
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v42);
    }
    if ( v24 < 0 )
    {
      v34 = v24;
      throw (long *)&v34;
    }
    v50 = v43;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v45, &v50);
  }
  ppIAudioMediaType = 0LL;
  v10 = CreateAudioMediaType(*((const WAVEFORMATEX **)a2 + 6), *((_DWORD *)a2 + 10), &ppIAudioMediaType);
  if ( v10 < 0 )
  {
    v35 = v10;
    throw (long *)&v35;
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v50 = 0LL;
      v25 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
      v26 = CProcessNode::CreateDummyProcessNode(v6, v25, &v50);
      if ( v26 < 0 )
      {
        v37 = v26;
        throw (long *)&v37;
      }
      v31 = v50;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v45, &v31);
    }
  }
  else
  {
    v50 = 0LL;
    *(GUID *)v44 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v11 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, 0LL, v6, 1LL, 0, v44, &v50);
    if ( v11 < 0 )
    {
      v36 = v11;
      throw (long *)&v36;
    }
    v12 = v50;
    (*(void (__fastcall **)(CPipeInstance *, IAudioMediaType *))(*(_QWORD *)v50 + 24LL))(v50, ppIAudioMediaType);
    (*(void (__fastcall **)(CPipeInstance *, IAudioMediaType *))(*(_QWORD *)v12 + 32LL))(v12, ppIAudioMediaType);
    v31 = v12;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v45, &v31);
  }
  v13 = (CPipeInstance *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  v50 = v13;
  if ( v13 )
    v14 = CPipeInstance::CPipeInstance(v13, (enum PIPE_TYPE)*((_DWORD *)a2 + 2));
  else
    v14 = 0LL;
  v50 = v14;
  if ( !v14 )
  {
    v38 = -2147024882;
    throw (long *)&v38;
  }
  v15 = (const unsigned __int16 *)*((_QWORD *)a2 + 4);
  v16 = -1LL;
  do
    ++v16;
  while ( v15[v16] );
  *((_QWORD *)v14 + 24) = 0LL;
  v17 = v16 + 1;
  if ( v16 + 1 < v16 || !is_mul_ok(v17, 2uLL) )
  {
    v27 = -2147024362;
LABEL_44:
    v39 = v27;
    throw (long *)&v39;
  }
  v18 = (unsigned __int16 *)CoTaskMemAlloc(2 * v17);
  *((_QWORD *)v14 + 24) = v18;
  if ( !v18 )
  {
    v27 = -2147024882;
    goto LABEL_44;
  }
  StringCchCopyNExW(v18, v16 + 1, v15, v16, v28, v29, v30);
  *((_DWORD *)v14 + 30) = *(_DWORD *)a2 == 2;
  *((_DWORD *)v14 + 3) = v6;
  *((_DWORD *)v14 + 33) = *((_DWORD *)a2 + 16) != 0;
  ATL::CComPtr<IAudioProcessor>::operator=((char *)v14 + 152, 0LL);
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((__int64 *)v14 + 30, (__int64)a1);
  *(_QWORD *)v14 = 0LL;
  *((_DWORD *)v14 + 2) = 1;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v14 + 16, (__int64)&v45);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v45);
  *((_DWORD *)v14 + 36) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 6) + 8LL)
                                                          / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 6) + 12LL))
                                                  * (double)(int)*((_QWORD *)a2 + 7)
                                                  / 10000000.0
                                                  + 0.5)
                                     * 1.1);
  *((_DWORD *)v14 + 34) = 0;
  *((_DWORD *)v14 + 53) = 0;
  *(_OWORD *)((char *)v14 + 216) = *(_OWORD *)((char *)a2 + 68);
  *((_BYTE *)v14 + 317) = *((_BYTE *)a2 + 85);
  v50 = 0LL;
  *v51 = v14;
  ATL::CAutoPtr<CPipeInstance>::Free(&v50);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v41);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v45);
  return 0LL;
}
