/*
 * XREFs of ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000A320
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x1400074C0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140007204 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000ACA8 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z @ 0x14000C4F0 (--0-$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000CE70 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000CEA8 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EB00 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140012F94 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140016758 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CPipeInstance::CreateSubmixPipeInstance(
        struct IUnknown *a1,
        struct SUBMIX_DESCRIPTOR *a2,
        struct CPipeInstance **a3)
{
  int v6; // edi
  BOOL v7; // r15d
  int FxPropertyStore; // eax
  int v9; // eax
  unsigned int i; // r14d
  HRESULT v11; // eax
  int v12; // eax
  CPipeInstance *v13; // rdi
  CPipeInstance *v14; // rax
  CPipeInstance *v15; // rdi
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // r14d
  int v20; // eax
  GUID v21; // xmm6
  __int64 v22; // rdx
  int v23; // r8d
  unsigned int v24; // r10d
  int v25; // r12d
  __int64 v26; // rax
  int v27; // eax
  CPipeInstance *v28; // [rsp+40h] [rbp-E8h] BYREF
  int pExceptionObject; // [rsp+48h] [rbp-E0h] BYREF
  int v30; // [rsp+4Ch] [rbp-DCh] BYREF
  int v31; // [rsp+50h] [rbp-D8h] BYREF
  HRESULT v32; // [rsp+54h] [rbp-D4h] BYREF
  int v33; // [rsp+58h] [rbp-D0h] BYREF
  int v34; // [rsp+5Ch] [rbp-CCh] BYREF
  int v35; // [rsp+60h] [rbp-C8h] BYREF
  int v36; // [rsp+64h] [rbp-C4h] BYREF
  CPipeInstance *v37; // [rsp+68h] [rbp-C0h] BYREF
  struct IPropertyStore *v38; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-B0h] BYREF
  CPipeInstance *v40; // [rsp+80h] [rbp-A8h] BYREF
  GUID v41; // [rsp+90h] [rbp-98h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-78h]
  __int128 v44; // [rsp+B8h] [rbp-70h]
  int v45; // [rsp+C8h] [rbp-60h]
  CPipeInstance *v46; // [rsp+138h] [rbp+10h] BYREF
  struct CPipeInstance **v47; // [rsp+140h] [rbp+18h]
  IAudioMediaType *ppIAudioMediaType; // [rsp+148h] [rbp+20h] BYREF

  v47 = a3;
  v6 = 0;
  LODWORD(v46) = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 10;
  v7 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids);
  }
  *a3 = 0LL;
  v38 = 0LL;
  FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 4), &v38);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v37 = 0LL;
  v9 = CProcessNode::CreateDummyProcessNode(v7, *((_QWORD *)a2 + 3), &v37);
  if ( v9 < 0 )
  {
    v30 = v9;
    throw (long *)&v30;
  }
  v46 = v37;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v42, &v46);
  v37 = 0LL;
  for ( i = 0; i < *((_DWORD *)a2 + 22); ++i )
  {
    v40 = 0LL;
    v20 = *((_DWORD *)a2 + 16);
    if ( _bittest(&v20, i) )
    {
      v21 = *(GUID *)((char *)a2 + 68);
      ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v39, v38);
      v6 |= 1u;
      v22 = v39;
      v23 = 2;
      v24 = v7;
    }
    else
    {
      v21 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v23 = 0;
      v24 = v7;
      v28 = 0LL;
      v6 |= 2u;
      v22 = 0LL;
    }
    LODWORD(v46) = v6;
    v41 = v21;
    v25 = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * i + 92, v22, v24, 0LL, v23, &v41, &v40);
    if ( (v6 & 2) != 0 )
    {
      v6 &= ~2u;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v28);
    }
    if ( (v6 & 1) != 0 )
    {
      v6 &= ~1u;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
    }
    if ( v25 < 0 )
    {
      v31 = v25;
      throw (long *)&v31;
    }
    v46 = v40;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v42, &v46);
  }
  ppIAudioMediaType = 0LL;
  v11 = CreateAudioMediaType(*((const WAVEFORMATEX **)a2 + 6), *((_DWORD *)a2 + 10), &ppIAudioMediaType);
  if ( v11 < 0 )
  {
    v32 = v11;
    throw (long *)&v32;
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v46 = 0LL;
      v26 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
      v27 = CProcessNode::CreateDummyProcessNode(v7, v26, &v46);
      if ( v27 < 0 )
      {
        v34 = v27;
        throw (long *)&v34;
      }
      v28 = v46;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v42, &v28);
    }
  }
  else
  {
    v46 = 0LL;
    v41 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v12 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, 0LL, v7, 1LL, 0, &v41, &v46);
    if ( v12 < 0 )
    {
      v33 = v12;
      throw (long *)&v33;
    }
    v13 = v46;
    (*(void (__fastcall **)(CPipeInstance *, IAudioMediaType *))(*(_QWORD *)v46 + 24LL))(v46, ppIAudioMediaType);
    (*(void (__fastcall **)(CPipeInstance *, IAudioMediaType *))(*(_QWORD *)v13 + 32LL))(v13, ppIAudioMediaType);
    v28 = v13;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v42, &v28);
  }
  v14 = (CPipeInstance *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  v46 = v14;
  if ( v14 )
    v15 = CPipeInstance::CPipeInstance(v14, (enum PIPE_TYPE)*((_DWORD *)a2 + 2));
  else
    v15 = 0LL;
  v46 = v15;
  if ( !v15 )
  {
    v35 = -2147024882;
    throw (long *)&v35;
  }
  v16 = -1LL;
  do
    ++v16;
  while ( *(_WORD *)(*((_QWORD *)a2 + 4) + 2 * v16) );
  v17 = _AllocStringWorker<CTCoAllocPolicy>();
  v18 = v17;
  if ( v17 < 0 )
  {
    v36 = v17;
    throw (long *)&v36;
  }
  *((_DWORD *)v15 + 30) = *(_DWORD *)a2 == 2;
  *((_DWORD *)v15 + 3) = v7;
  *((_DWORD *)v15 + 33) = *((_DWORD *)a2 + 16) != 0;
  if ( *((_QWORD *)v15 + 19) )
    ATL::AtlComPtrAssign((struct IUnknown **)v15 + 19, 0LL);
  if ( *((struct IUnknown **)v15 + 30) != a1 )
    ATL::AtlComPtrAssign((struct IUnknown **)v15 + 30, a1);
  *(_QWORD *)v15 = 0LL;
  *((_DWORD *)v15 + 2) = 1;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((char *)v15 + 16, &v42);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v42);
  *((_DWORD *)v15 + 80) = *((_BYTE *)a2 + 86) != 0;
  *((_DWORD *)v15 + 78) = *((unsigned __int8 *)a2 + 86);
  *((_DWORD *)v15 + 36) = (int)(float)((float)(int)((float)((float)*(int *)(*((_QWORD *)a2 + 6) + 8LL)
                                                          / (float)*(unsigned __int16 *)(*((_QWORD *)a2 + 6) + 12LL))
                                                  * (double)(int)*((_QWORD *)a2 + 7)
                                                  / 10000000.0
                                                  + 0.5)
                                     * 1.1);
  *((_DWORD *)v15 + 34) = 0;
  *((_DWORD *)v15 + 53) = 0;
  *(_OWORD *)((char *)v15 + 216) = *(_OWORD *)((char *)a2 + 68);
  *((_BYTE *)v15 + 317) = *((_BYTE *)a2 + 85);
  v46 = 0LL;
  *v47 = v15;
  ATL::CAutoPtr<CPipeInstance>::Free(&v46);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&ppIAudioMediaType);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v38);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v42);
  return v18;
}
