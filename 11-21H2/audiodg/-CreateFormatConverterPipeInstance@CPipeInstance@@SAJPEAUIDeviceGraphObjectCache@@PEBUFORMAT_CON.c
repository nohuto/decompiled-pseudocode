/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140059894
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140062844 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140009F28 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009F88 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001313C (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14001873C (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ??4?$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z @ 0x14001B610 (--4-$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x140031A14 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140051850 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        const WAVEFORMATEX **a2,
        struct CPipeInstance **a3)
{
  BOOL v5; // r13d
  int v6; // eax
  const WAVEFORMATEX *v7; // rax
  HRESULT v8; // eax
  int v9; // eax
  unsigned __int16 *v10; // rbx
  int v11; // eax
  IAudioMediaType *v12; // rax
  CPipeInstance *v13; // rbx
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r12
  char *v17; // rax
  int v18; // eax
  int v19; // ebx
  _UNKNOWN **v20; // rcx
  int pExceptionObject; // [rsp+40h] [rbp-B8h] BYREF
  HRESULT v23; // [rsp+44h] [rbp-B4h] BYREF
  int v24; // [rsp+48h] [rbp-B0h] BYREF
  int v25; // [rsp+4Ch] [rbp-ACh] BYREF
  int v26; // [rsp+50h] [rbp-A8h] BYREF
  int v27; // [rsp+54h] [rbp-A4h] BYREF
  unsigned __int16 *v28[2]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int16 *v29; // [rsp+70h] [rbp-88h] BYREF
  __int128 v30; // [rsp+78h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-70h]
  __int128 v32; // [rsp+90h] [rbp-68h]
  int v33; // [rsp+A0h] [rbp-58h]
  long *v34; // [rsp+A8h] [rbp-50h] BYREF
  ATL::CAtlException *v35; // [rsp+B0h] [rbp-48h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+108h] [rbp+10h] BYREF
  struct CPipeInstance **v38; // [rsp+110h] [rbp+18h]
  IAudioMediaType *v39; // [rsp+118h] [rbp+20h] BYREF

  v38 = a3;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 10;
  v5 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids);
  }
  *a3 = 0LL;
  v39 = 0LL;
  v6 = CProcessNode::CreateDummyProcessNode(v5, a2[1], &v39);
  try
  {
    if ( v6 < 0 )
    {
      pExceptionObject = v6;
      throw (long *)&pExceptionObject;
    }
    ppIAudioMediaType = v39;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v30, &ppIAudioMediaType);
    v39 = 0LL;
    v7 = a2[2];
    ppIAudioMediaType = 0LL;
    if ( *(_DWORD *)a2 )
    {
      v11 = CProcessNode::CreateDummyProcessNode(v5, v7, &ppIAudioMediaType);
      if ( v11 < 0 )
      {
        v25 = v11;
        throw (long *)&v25;
      }
      v28[0] = (unsigned __int16 *)ppIAudioMediaType;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v30, v28);
    }
    else
    {
      v8 = CreateAudioMediaType(v7, v7->cbSize + 18, &ppIAudioMediaType);
      if ( v8 < 0 )
      {
        v23 = v8;
        throw (long *)&v23;
      }
      v29 = 0LL;
      *(GUID *)v28 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v9 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, 0LL, v5, 1, 0, v28, &v29);
      if ( v9 < 0 )
      {
        v24 = v9;
        throw (long *)&v24;
      }
      v10 = v29;
      (*(void (__fastcall **)(unsigned __int16 *, IAudioMediaType *))(*(_QWORD *)v29 + 24LL))(v29, ppIAudioMediaType);
      (*(void (__fastcall **)(unsigned __int16 *, IAudioMediaType *))(*(_QWORD *)v10 + 32LL))(v10, ppIAudioMediaType);
      v28[0] = v10;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v30, v28);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
    }
    v12 = (IAudioMediaType *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
    ppIAudioMediaType = v12;
    if ( v12 )
      v13 = CPipeInstance::CPipeInstance((CPipeInstance *)v12, (enum PIPE_TYPE)4);
    else
      v13 = 0LL;
    ppIAudioMediaType = (IAudioMediaType *)v13;
    if ( !v13 )
    {
      v26 = -2147024882;
      throw (long *)&v26;
    }
    v14 = (unsigned __int16 *)a2[4];
    v28[0] = v14;
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    *((_QWORD *)v13 + 24) = 0LL;
    v16 = v15 + 1;
    if ( v15 + 1 < v15 || !is_mul_ok(v16, 2uLL) )
    {
      v18 = -2147024362;
LABEL_30:
      v27 = v18;
      throw (long *)&v27;
    }
    v17 = (char *)CoTaskMemAlloc(2 * v16);
    *((_QWORD *)v13 + 24) = v17;
    if ( !v17 )
    {
      v18 = -2147024882;
      goto LABEL_30;
    }
    StringCchCopyNExW(v17, v15 + 1, v28[0], v15);
    *((_DWORD *)v13 + 30) = *(_DWORD *)a2 == 2;
    *((_DWORD *)v13 + 3) = v5;
    *((_DWORD *)v13 + 33) = 0;
    ATL::CComPtr<IAudioProcessor>::operator=((__int64 *)v13 + 19, 0LL);
    ATL::CComPtr<IDeviceGraphObjectCache>::operator=((__int64 *)v13 + 30, (__int64)a1);
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = 1;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v13 + 16, (__int64)&v30);
    ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v30);
    *((_DWORD *)v13 + 36) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                                * (double)(int)a2[3]
                                / 10000000.0
                                + 0.5);
    *((_DWORD *)v13 + 34) = 14;
    *((_DWORD *)v13 + 53) = 0;
    *(GUID *)((char *)v13 + 216) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    ppIAudioMediaType = 0LL;
    *v38 = v13;
    ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)&ppIAudioMediaType);
    v19 = 0;
  }
  catch ( long *v34 )
  {
    LODWORD(v38) = *(_DWORD *)v34;
    v19 = (int)v38;
  }
  catch ( ATL::CAtlException *v35 )
  {
    LODWORD(v38) = *(_DWORD *)v35;
    v19 = (int)v38;
  }
  v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, v19);
    v20 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v19 < 0 )
  {
    if ( v20 != &WPP_GLOBAL_Control && (*((_DWORD *)v20 + 7) & 0x20000) != 0 && *((_BYTE *)v20 + 25) >= 2u )
      WPP_SF_d((__int64)v20[2], 0x12u, (__int64)&WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, v19);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateFormatConverterPipeInstance", 0x24Eu, v19);
  }
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v30);
  return (unsigned int)v19;
}
