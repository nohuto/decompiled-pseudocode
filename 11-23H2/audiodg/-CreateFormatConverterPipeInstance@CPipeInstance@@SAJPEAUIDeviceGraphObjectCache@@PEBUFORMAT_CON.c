/*
 * XREFs of ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14005C650
 * Callers:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14006829C (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x140006EE0 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140007204 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000ACA8 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000CE70 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x14000CEA8 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EB00 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140012F94 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x140052860 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14005288C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CPipeInstance::CreateFormatConverterPipeInstance(
        struct IUnknown *a1,
        const WAVEFORMATEX **a2,
        struct CPipeInstance **a3)
{
  BOOL v6; // r12d
  int v7; // eax
  const WAVEFORMATEX *v8; // rax
  HRESULT v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  IAudioMediaType *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  CPipeInstance *v16; // rbx
  const unsigned __int16 *v17; // r8
  unsigned __int64 v18; // r9
  int v19; // eax
  int v20; // esi
  _UNKNOWN **v21; // rcx
  __int64 v23; // [rsp+20h] [rbp-C8h]
  int pExceptionObject; // [rsp+40h] [rbp-A8h] BYREF
  HRESULT v25; // [rsp+44h] [rbp-A4h] BYREF
  int v26; // [rsp+48h] [rbp-A0h] BYREF
  int v27; // [rsp+4Ch] [rbp-9Ch] BYREF
  int v28; // [rsp+50h] [rbp-98h] BYREF
  int v29; // [rsp+54h] [rbp-94h] BYREF
  __int64 v30; // [rsp+58h] [rbp-90h] BYREF
  GUID v31; // [rsp+60h] [rbp-88h] BYREF
  __int128 v32; // [rsp+70h] [rbp-78h] BYREF
  __int64 v33; // [rsp+80h] [rbp-68h]
  __int128 v34; // [rsp+88h] [rbp-60h]
  int v35; // [rsp+98h] [rbp-50h]
  IAudioMediaType *ppIAudioMediaType; // [rsp+F8h] [rbp+10h] BYREF
  struct CPipeInstance **v37; // [rsp+100h] [rbp+18h]
  IAudioMediaType *v38; // [rsp+108h] [rbp+20h] BYREF

  v37 = a3;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 10;
  v6 = *(_DWORD *)a2 != 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, (__int64)&WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids);
  }
  *a3 = 0LL;
  v38 = 0LL;
  v7 = CProcessNode::CreateDummyProcessNode(v6, a2[1], &v38);
  if ( v7 < 0 )
  {
    pExceptionObject = v7;
    throw (long *)&pExceptionObject;
  }
  ppIAudioMediaType = v38;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(
    (__int64 *)&v32,
    (__int64)&ppIAudioMediaType);
  v38 = 0LL;
  v8 = a2[2];
  ppIAudioMediaType = 0LL;
  if ( *(_DWORD *)a2 )
  {
    v12 = CProcessNode::CreateDummyProcessNode(v6, v8, &ppIAudioMediaType);
    if ( v12 < 0 )
    {
      v27 = v12;
      throw (long *)&v27;
    }
    *(_QWORD *)&v31.Data1 = ppIAudioMediaType;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v32, (__int64)&v31);
  }
  else
  {
    v9 = CreateAudioMediaType(v8, v8->cbSize + 18, &ppIAudioMediaType);
    if ( v9 < 0 )
    {
      v25 = v9;
      throw (long *)&v25;
    }
    v30 = 0LL;
    v31 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v10 = CAPOProcessNode::CreateAPOProcessNode(&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a, 0LL, v6, 1, 0, &v31, &v30);
    if ( v10 < 0 )
    {
      v26 = v10;
      throw (long *)&v26;
    }
    v11 = v30;
    (*(void (__fastcall **)(__int64, IAudioMediaType *))(*(_QWORD *)v30 + 24LL))(v30, ppIAudioMediaType);
    (*(void (__fastcall **)(__int64, IAudioMediaType *))(*(_QWORD *)v11 + 32LL))(v11, ppIAudioMediaType);
    *(_QWORD *)&v31.Data1 = v11;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64 *)&v32, (__int64)&v31);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
  }
  v13 = (IAudioMediaType *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  ppIAudioMediaType = v13;
  if ( v13 )
    v16 = CPipeInstance::CPipeInstance((CPipeInstance *)v13, (enum PIPE_TYPE)4);
  else
    v16 = 0LL;
  ppIAudioMediaType = (IAudioMediaType *)v16;
  if ( !v16 )
  {
    v28 = -2147024882;
    throw (long *)&v28;
  }
  v17 = (const unsigned __int16 *)a2[4];
  v18 = -1LL;
  do
    ++v18;
  while ( v17[v18] );
  v19 = _AllocStringWorker<CTCoAllocPolicy>(v15, v14, v17, v18, v23, (unsigned __int16 **)v16 + 24);
  v20 = v19;
  if ( v19 < 0 )
  {
    v29 = v19;
    throw (long *)&v29;
  }
  *((_DWORD *)v16 + 30) = *(_DWORD *)a2 == 2;
  *((_DWORD *)v16 + 3) = v6;
  *((_DWORD *)v16 + 33) = 0;
  if ( *((_QWORD *)v16 + 19) )
    ATL::AtlComPtrAssign((struct IUnknown **)v16 + 19, 0LL);
  if ( *((struct IUnknown **)v16 + 30) != a1 )
    ATL::AtlComPtrAssign((struct IUnknown **)v16 + 30, a1);
  *(_QWORD *)v16 = 0LL;
  *((_DWORD *)v16 + 2) = 1;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v16 + 16, (__int64)&v32);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v32);
  *((_DWORD *)v16 + 36) = (int)((float)((float)(int)a2[2]->nAvgBytesPerSec / (float)a2[2]->nBlockAlign)
                              * (double)(int)a2[3]
                              / 10000000.0
                              + 0.5);
  *((_DWORD *)v16 + 34) = 6;
  *((_DWORD *)v16 + 53) = 0;
  *(GUID *)((char *)v16 + 216) = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  *((_DWORD *)v16 + 80) = 2;
  ppIAudioMediaType = 0LL;
  *v37 = v16;
  ATL::CAutoPtr<CPipeInstance>::Free((CPipeInstance **)&ppIAudioMediaType);
  v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, v20);
    v21 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( v20 < 0 )
  {
    if ( v21 != &WPP_GLOBAL_Control && (*((_DWORD *)v21 + 7) & 0x20000) != 0 && *((_BYTE *)v21 + 25) >= 2u )
      WPP_SF_d((__int64)v21[2], 0x12u, (__int64)&WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, v20);
    AudDGTraceLoggingErrorHelper("CPipeInstance::CreateFormatConverterPipeInstance", 0x26Eu, v20);
  }
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v32);
  return (unsigned int)v20;
}
