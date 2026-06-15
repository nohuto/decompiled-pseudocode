/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001327C
 * Callers:
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14001B690 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004778 (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ??0?$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z @ 0x140008828 (--0-$CComPtrBase@UIPropertyStore@@@ATL@@IEAA@PEAUIPropertyStore@@@Z.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140009F28 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ?AddHeadList@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEBV12@@Z @ 0x140009F88 (-AddHeadList@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXP.c)
 *     ?Free@?$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ @ 0x14000A8E8 (-Free@-$CAutoPtr@VCPipeInstance@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ @ 0x14000B15C (-RemoveAll@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14000BC04 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140011930 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001313C (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140015140 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x14001873C (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ??4?$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z @ 0x14001B610 (--4-$CComPtr@UIAudioProcessor@@@ATL@@QEAAPEAUIAudioProcessor@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002FC5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x140031A14 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140050DC8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        struct IDeviceGraphObjectCache *a1,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct CPipeInstance *a3,
        struct tWAVEFORMATEX *a4,
        struct SYSTEM_AUDIO_STREAM *a5,
        struct CPipeInstance **a6)
{
  unsigned int v8; // r15d
  BOOL v9; // r12d
  float v10; // xmm7_4
  int FxPropertyStore; // eax
  int v12; // eax
  unsigned __int16 *v13; // rcx
  unsigned __int16 v14; // dx
  GUID v15; // xmm1
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  int DummyProcessNode; // eax
  __int64 v23; // rax
  unsigned int v24; // edi
  int v25; // esi
  int v26; // eax
  GUID v27; // xmm6
  CPipeInstance *v28; // rdx
  int v29; // esi
  __int64 v30; // rsi
  struct ATL::CAtlPlex *i; // rdx
  struct ATL::CAtlPlex *v32; // rcx
  HRESULT AudioMediaType; // eax
  int APOProcessNode; // eax
  CPipeInstance *v35; // rdi
  CPipeInstance *v36; // rax
  CPipeInstance *v37; // rdi
  const unsigned __int16 *v38; // r12
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // r15
  char *v41; // rax
  struct CPipeInstance *v42; // rsi
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  WORD nChannels; // cx
  WORD wBitsPerSample; // dx
  struct ATL::CAtlPlex *v54; // r8
  __int64 v55; // rax
  struct ATL::CAtlPlex *v56; // rcx
  const WAVEFORMATEX *v57; // rax
  int v58; // eax
  const WAVEFORMATEX *v59; // rax
  int v60; // eax
  const WAVEFORMATEX *v61; // rax
  int v62; // eax
  int v63; // eax
  CPipeInstance *v64; // [rsp+40h] [rbp-1A8h] BYREF
  unsigned int v65[2]; // [rsp+48h] [rbp-1A0h] BYREF
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+50h] [rbp-198h] BYREF
  GUID v67; // [rsp+60h] [rbp-188h] BYREF
  CPipeInstance *v68; // [rsp+70h] [rbp-178h] BYREF
  __int128 v69; // [rsp+78h] [rbp-170h] BYREF
  __int64 v70; // [rsp+88h] [rbp-160h]
  struct ATL::CAtlPlex *v71[2]; // [rsp+90h] [rbp-158h] BYREF
  unsigned __int64 v72; // [rsp+A0h] [rbp-148h]
  int pExceptionObject; // [rsp+A8h] [rbp-140h] BYREF
  int v74; // [rsp+ACh] [rbp-13Ch] BYREF
  int v75; // [rsp+B0h] [rbp-138h] BYREF
  int v76; // [rsp+B4h] [rbp-134h] BYREF
  int v77; // [rsp+B8h] [rbp-130h] BYREF
  HRESULT v78; // [rsp+BCh] [rbp-12Ch] BYREF
  int v79; // [rsp+C0h] [rbp-128h] BYREF
  int v80; // [rsp+C4h] [rbp-124h] BYREF
  int v81; // [rsp+C8h] [rbp-120h] BYREF
  int v82; // [rsp+CCh] [rbp-11Ch] BYREF
  int v83; // [rsp+D0h] [rbp-118h] BYREF
  BOOL v84; // [rsp+D4h] [rbp-114h]
  int v85; // [rsp+D8h] [rbp-110h] BYREF
  int v86; // [rsp+DCh] [rbp-10Ch] BYREF
  int v87; // [rsp+E0h] [rbp-108h] BYREF
  struct CStreamProcessNode *v88; // [rsp+E8h] [rbp-100h] BYREF
  struct IPropertyStore *v89; // [rsp+F0h] [rbp-F8h] BYREF
  struct CPipeInstance *v90; // [rsp+F8h] [rbp-F0h]
  struct IDeviceGraphObjectCache *v91; // [rsp+100h] [rbp-E8h]
  struct CPipeInstance **v92; // [rsp+108h] [rbp-E0h]
  unsigned __int64 v93[2]; // [rsp+110h] [rbp-D8h] BYREF
  __int128 v94; // [rsp+130h] [rbp-B8h] BYREF
  _BYTE v95[24]; // [rsp+140h] [rbp-A8h]
  __int128 v96; // [rsp+158h] [rbp-90h]
  _BYTE v97[24]; // [rsp+168h] [rbp-80h]

  v90 = a3;
  v91 = a1;
  v92 = a6;
  v8 = 0;
  v65[0] = 0;
  v9 = *(_DWORD *)a2 != 0;
  v84 = v9;
  v69 = 0LL;
  v70 = 0LL;
  *(_OWORD *)v71 = 0LL;
  LODWORD(v72) = 10;
  if ( *((_DWORD *)a2 + 2) == 1 )
    v10 = FLOAT_1_0;
  else
    v10 = FLOAT_1_1;
  *a6 = 0LL;
  v89 = 0LL;
  FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a2 + 19), &v89);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v88 = 0LL;
  v12 = CStreamProcessNode::CreateStreamProcessNode((const WAVEFORMATEX **)a2, &v88);
  if ( v12 < 0 )
  {
    v74 = v12;
    throw (long *)&v74;
  }
  v64 = v88;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v69, &v64);
  v88 = 0LL;
  v13 = (unsigned __int16 *)*((_QWORD *)a2 + 16);
  if ( !v13 )
    goto LABEL_77;
  if ( *v13 != 0xFFFE )
  {
    if ( !v13[8] || ((*v13 - 1) & 0xFFFD) == 0 )
    {
      v14 = v13[1];
      if ( (unsigned __int16)(v14 - 1) <= 1u && ((v13[7] - 8) & 0xFFE7) == 0 )
      {
        v96 = *(_OWORD *)v13;
        v15 = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(GUID *)&v97[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v97[8] = *v13;
        v16 = 4 - (v14 != 1);
        v17 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        goto LABEL_11;
      }
    }
LABEL_77:
    v87 = -2005139404;
    throw (long *)&v87;
  }
  v17 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
  if ( v13[8] != 22 )
  {
    v48 = *((_QWORD *)v13 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v48 )
      v48 = *((_QWORD *)v13 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v48 )
    {
      v49 = *((_QWORD *)v13 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v49 )
        v49 = *((_QWORD *)v13 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v49 )
        goto LABEL_77;
    }
  }
  v96 = *(_OWORD *)v13;
  *(_OWORD *)v97 = *((_OWORD *)v13 + 1);
  *(_QWORD *)&v97[16] = *((_QWORD *)v13 + 4);
  v16 = *(_DWORD *)&v97[4];
  v15 = GUID_00000000_0000_0010_8000_00aa00389b71;
LABEL_11:
  v18 = *(_QWORD *)&v97[8];
  v19 = v17 - *(_QWORD *)&v97[8];
  v20 = *(_QWORD *)&v97[16];
  if ( v17 == *(_QWORD *)&v97[8] )
    v19 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v97[16];
  if ( !v19 )
    goto LABEL_17;
  v21 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)&v97[8];
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&v97[8] )
    v21 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v97[16];
  if ( !v21 )
  {
LABEL_17:
    if ( !a4 )
      goto LABEL_86;
    if ( a4->wFormatTag == 0xFFFE )
    {
      if ( a4->cbSize != 22 )
      {
        v50 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2) - v17;
        if ( !v50 )
          v50 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v50 )
        {
          v51 = *(_QWORD *)((char *)&a4[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v51 )
            v51 = *(_QWORD *)&a4[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v51 )
          {
LABEL_86:
            v86 = -2005139404;
            throw (long *)&v86;
          }
        }
      }
      v94 = *(_OWORD *)&a4->wFormatTag;
      *(_OWORD *)v95 = *(_OWORD *)&a4->cbSize;
      *(_QWORD *)&v95[16] = *(_QWORD *)&a4[1].wBitsPerSample;
    }
    else
    {
      if ( a4->cbSize && ((a4->wFormatTag - 1) & 0xFFFD) != 0 )
        goto LABEL_86;
      nChannels = a4->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u )
        goto LABEL_86;
      wBitsPerSample = a4->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        goto LABEL_86;
      v94 = *(_OWORD *)&a4->wFormatTag;
      LOWORD(v94) = -2;
      *(_WORD *)&v95[2] = wBitsPerSample;
      *(GUID *)&v95[8] = v15;
      *(_DWORD *)&v95[8] = a4->wFormatTag;
      *(_DWORD *)&v95[4] = 4 - (nChannels != 1);
    }
    *(_WORD *)v95 = 22;
    if ( *((_DWORD *)a2 + 40) && WORD1(v94) != WORD1(v96) )
    {
      WORD1(v94) = WORD1(v96);
      *(_DWORD *)&v95[4] = v16;
      WORD6(v94) = WORD1(v96) * (HIWORD(v94) >> 3);
      DWORD2(v94) = DWORD1(v94) * WORD6(v94);
    }
    *(_QWORD *)v65 = 0LL;
    DummyProcessNode = CProcessNode::CreateDummyProcessNode(v9, (const WAVEFORMATEX *)&v94, v65);
    if ( DummyProcessNode < 0 )
    {
      v75 = DummyProcessNode;
      throw (long *)&v75;
    }
    v64 = *(CPipeInstance **)v65;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v69, &v64);
    *(_QWORD *)v65 = 0LL;
    v23 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - v18;
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == v18 )
      v23 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - v20;
    if ( !v23 && (*((_DWORD *)a2 + 34) & 0x800000) == 0 )
    {
      v68 = 0LL;
      v67 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v47 = CAPOProcessNode::CreateAPOProcessNode(
              &GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec,
              0LL,
              v9,
              1LL,
              0,
              &v67,
              &v68);
      if ( v47 < 0 )
      {
        v76 = v47;
        throw (long *)&v76;
      }
      v64 = v68;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v69, &v64);
    }
  }
  v24 = 0;
  v25 = 1;
  while ( v24 < *((_DWORD *)a2 + 50) )
  {
    v64 = 0LL;
    v26 = *((_DWORD *)a2 + 40);
    if ( _bittest(&v26, v24) )
    {
      v27 = *(GUID *)((char *)a2 + 164);
      ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v68, (__int64)v89);
      v8 |= 1u;
      v28 = v68;
    }
    else
    {
      v27 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v25 = 0;
      *(_QWORD *)&v67.Data1 = 0LL;
      v8 |= 2u;
      v28 = 0LL;
    }
    v65[0] = v8;
    *(GUID *)v93 = v27;
    v29 = CAPOProcessNode::CreateAPOProcessNode((char *)a2 + 16 * v24 + 288, v28, v9, 0LL, v25, v93, &v64);
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v67);
    }
    if ( (v8 & 1) != 0 )
    {
      v8 &= ~1u;
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v68);
    }
    if ( v29 < 0 )
    {
      v77 = v29;
      throw (long *)&v77;
    }
    v30 = *((_QWORD *)&v69 + 1);
    i = v71[1];
    if ( !v71[1] )
    {
      v54 = ATL::CAtlPlex::Create(v71, (unsigned int)v72, 0x18uLL);
      if ( !v54 )
        ATL::AtlThrowImpl(-2147024882);
      v55 = (unsigned int)(v72 - 1);
      v56 = (struct ATL::CAtlPlex *)((char *)v54 + 16 * v55 + 8 * v55 + 8);
      for ( i = v71[1]; (int)v55 >= 0; LODWORD(v55) = v55 - 1 )
      {
        *(_QWORD *)v56 = i;
        i = v56;
        v71[1] = v56;
        v56 = (struct ATL::CAtlPlex *)((char *)v56 - 24);
      }
    }
    v32 = *(struct ATL::CAtlPlex **)i;
    *((_QWORD *)i + 2) = v64;
    v71[1] = v32;
    *((_QWORD *)i + 1) = v30;
    *(_QWORD *)i = 0LL;
    v25 = 1;
    ++v70;
    if ( *((_QWORD *)&v69 + 1) )
      **((_QWORD **)&v69 + 1) = i;
    else
      *(_QWORD *)&v69 = i;
    *((_QWORD *)&v69 + 1) = i;
    ++v24;
  }
  ppIAudioMediaType[0] = 0LL;
  AudioMediaType = CreateAudioMediaType(a4, a4->cbSize + 18, ppIAudioMediaType);
  if ( AudioMediaType < 0 )
  {
    v78 = AudioMediaType;
    throw (long *)&v78;
  }
  if ( *(_DWORD *)a2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v64 = 0LL;
      v59 = (const WAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->GetAudioFormat)(ppIAudioMediaType[0]);
      v60 = CProcessNode::CreateDummyProcessNode(v9, v59, &v64);
      if ( v60 < 0 )
      {
        v81 = v60;
        throw (long *)&v81;
      }
    }
    else
    {
      if ( *(_DWORD *)a2 != 2 )
        goto LABEL_45;
      v64 = 0LL;
      v61 = (const WAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->GetAudioFormat)(ppIAudioMediaType[0]);
      v62 = CProcessNode::CreateDummyProcessNode(v9, v61, &v64);
      if ( v62 < 0 )
      {
        v82 = v62;
        throw (long *)&v82;
      }
    }
    goto LABEL_113;
  }
  *(_QWORD *)v65 = 0LL;
  *(GUID *)v93 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                     &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
                     0LL,
                     v9,
                     1LL,
                     0,
                     v93,
                     v65);
  if ( APOProcessNode < 0 )
  {
    v79 = APOProcessNode;
    throw (long *)&v79;
  }
  v35 = *(CPipeInstance **)v65;
  (*(void (__fastcall **)(_QWORD, IAudioMediaType *))(**(_QWORD **)v65 + 24LL))(*(_QWORD *)v65, ppIAudioMediaType[0]);
  (*(void (__fastcall **)(CPipeInstance *, IAudioMediaType *))(*(_QWORD *)v35 + 32LL))(v35, ppIAudioMediaType[0]);
  *(_QWORD *)&v67.Data1 = v35;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v69, &v67);
  *(_QWORD *)v65 = 0LL;
  if ( !v90 )
  {
    v64 = 0LL;
    v57 = (const WAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->GetAudioFormat)(ppIAudioMediaType[0]);
    v58 = CProcessNode::CreateDummyProcessNode(v9, v57, &v64);
    if ( v58 < 0 )
    {
      v80 = v58;
      throw (long *)&v80;
    }
LABEL_113:
    *(_QWORD *)&v67.Data1 = v64;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((__int64)&v69, &v67);
  }
LABEL_45:
  v36 = (CPipeInstance *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)&v67.Data1 = v36;
  if ( v36 )
    v37 = CPipeInstance::CPipeInstance(v36, WRITE_DATA_PIPE);
  else
    v37 = 0LL;
  v64 = v37;
  if ( !v37 )
  {
    v83 = -2147024882;
    throw (long *)&v83;
  }
  v38 = (const unsigned __int16 *)*((_QWORD *)a2 + 19);
  v39 = -1LL;
  do
    ++v39;
  while ( v38[v39] );
  *((_QWORD *)v37 + 24) = 0LL;
  v40 = v39 + 1;
  if ( v39 + 1 < v39 || !is_mul_ok(v40, 2uLL) )
  {
    v63 = -2147024362;
LABEL_119:
    v85 = v63;
    throw (long *)&v85;
  }
  v41 = (char *)CoTaskMemAlloc(2 * v40);
  *((_QWORD *)v37 + 24) = v41;
  if ( !v41 )
  {
    v63 = -2147024882;
    goto LABEL_119;
  }
  StringCchCopyNExW(v41, v39 + 1, v38, v39);
  *((_DWORD *)v37 + 30) = *(_DWORD *)a2 == 2;
  *((_DWORD *)v37 + 3) = v84;
  *((_DWORD *)v37 + 33) = *((_DWORD *)a2 + 40) != 0;
  *((_DWORD *)v37 + 31) = *((_DWORD *)a2 + 2) == 1;
  ATL::CComPtr<IAudioProcessor>::operator=((char *)v37 + 152, 0LL);
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((__int64 *)v37 + 30, (__int64)v91);
  v42 = v90;
  *(_QWORD *)v37 = v90;
  *((_DWORD *)v37 + 2) = v42 == 0LL;
  *((_BYTE *)v37 + 316) = *((_DWORD *)a2 + 49) != 0;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((__int64)v37 + 16, (__int64)&v69);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v69);
  if ( v42 )
    v43 = *((_DWORD *)v42 + 35);
  else
    v43 = (int)(float)((float)(int)((double)(int)(a4->nAvgBytesPerSec / a4->nBlockAlign)
                                  * (double)(int)*((_QWORD *)a2 + 4)
                                  / 10000000.0
                                  + 0.5)
                     * v10);
  *((_DWORD *)v37 + 36) = v43;
  v44 = 1;
  if ( *((_DWORD *)a2 + 1) )
    v44 = 7;
  *((_DWORD *)v37 + 34) = v44;
  *((_DWORD *)v37 + 53) = 0;
  v45 = *((_DWORD *)a2 + 34);
  if ( (v45 & 0x100000) != 0 )
  {
    *((_DWORD *)v37 + 34) = v44 | 0xA;
    *((_DWORD *)v37 + 50) = 1056964608;
    *((_DWORD *)v37 + 51) = 1065353216;
    v45 = *((_DWORD *)a2 + 34);
  }
  if ( (v45 & 0x8000000) != 0 )
    *((_DWORD *)v37 + 52) = 3;
  v64 = 0LL;
  *v92 = v37;
  ATL::CAutoPtr<CPipeInstance>::Free(&v64);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)ppIAudioMediaType);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v89);
  ATL::CAtlList<CAPONode *,CAPONodeTraits>::RemoveAll((__int64)&v69);
  return 0LL;
}
