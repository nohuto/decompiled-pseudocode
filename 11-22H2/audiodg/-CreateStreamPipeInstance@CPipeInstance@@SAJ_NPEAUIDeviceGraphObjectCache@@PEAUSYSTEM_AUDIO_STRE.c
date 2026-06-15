/*
 * XREFs of ?CreateStreamPipeInstance@CPipeInstance@@SAJ_NPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000C590
 * Callers:
 *     ?CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400054C0 (-CreateStream@CStreamInstance@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400674B0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
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
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140022F2C (-CreateStreamProcessNode@CStreamProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1400284DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x140052984 (WPP_SF_d.c)
 *     ?CreateBridgeSinkProcessNode@CBridgeSinkProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14005D558 (-CreateBridgeSinkProcessNode@CBridgeSinkProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAP.c)
 *     ?CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVCStreamProcessNode@@@Z @ 0x14005D688 (-CreateBridgeSourceProcessNode@CBridgeSourceProcessNode@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DF4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CPipeInstance::CreateStreamPipeInstance(
        char a1,
        struct IUnknown *a2,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a3,
        struct CPipeInstance *a4,
        struct tWAVEFORMATEX *pAudioFormat,
        struct SYSTEM_AUDIO_STREAM *a6,
        struct CPipeInstance **a7)
{
  int v8; // r14d
  BOOL v9; // r13d
  float v10; // xmm7_4
  int FxPropertyStore; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int16 *v14; // r8
  __int16 v15; // r10
  int v16; // r11d
  int v17; // r15d
  GUID v18; // xmm6
  unsigned __int16 v19; // r9
  __int16 v20; // r10
  int v21; // r11d
  int v22; // eax
  unsigned int i; // edi
  int v24; // eax
  GUID v25; // xmm6
  int v26; // r8d
  unsigned int v27; // r10d
  CPipeInstance *v28; // rdx
  int v29; // r15d
  HRESULT v30; // eax
  int APOProcessNode; // eax
  CPipeInstance *v32; // rdi
  __int64 v33; // rax
  int v34; // eax
  CPipeInstance *v35; // rax
  CPipeInstance *v36; // rdi
  __int64 v37; // r9
  int v38; // eax
  unsigned int v39; // r14d
  struct CPipeInstance *v40; // r15
  int v41; // ecx
  int v42; // eax
  unsigned __int16 v44; // cx
  unsigned __int16 v45; // dx
  WORD nChannels; // cx
  WORD wBitsPerSample; // dx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rax
  int v54; // eax
  CPipeInstance *v55; // [rsp+40h] [rbp-1A8h] BYREF
  char v56; // [rsp+48h] [rbp-1A0h]
  int v57[2]; // [rsp+50h] [rbp-198h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+58h] [rbp-190h] BYREF
  GUID v59; // [rsp+60h] [rbp-188h] BYREF
  struct CStreamProcessNode *v60; // [rsp+70h] [rbp-178h] BYREF
  CPipeInstance *v61; // [rsp+78h] [rbp-170h] BYREF
  int v62; // [rsp+80h] [rbp-168h] BYREF
  int v63; // [rsp+84h] [rbp-164h] BYREF
  HRESULT v64; // [rsp+88h] [rbp-160h] BYREF
  int v65; // [rsp+8Ch] [rbp-15Ch] BYREF
  int v66; // [rsp+90h] [rbp-158h] BYREF
  int v67; // [rsp+94h] [rbp-154h] BYREF
  int v68; // [rsp+98h] [rbp-150h] BYREF
  int v69; // [rsp+9Ch] [rbp-14Ch] BYREF
  int v70; // [rsp+A0h] [rbp-148h] BYREF
  int v71; // [rsp+A4h] [rbp-144h] BYREF
  int v72; // [rsp+A8h] [rbp-140h] BYREF
  int pExceptionObject; // [rsp+ACh] [rbp-13Ch] BYREF
  int v74; // [rsp+B0h] [rbp-138h] BYREF
  struct IPropertyStore *v75; // [rsp+B8h] [rbp-130h] BYREF
  int v76; // [rsp+C0h] [rbp-128h] BYREF
  int v77; // [rsp+C4h] [rbp-124h] BYREF
  int v78; // [rsp+C8h] [rbp-120h] BYREF
  struct CPipeInstance *v79; // [rsp+D0h] [rbp-118h]
  __int128 v80; // [rsp+D8h] [rbp-110h] BYREF
  __int64 v81; // [rsp+E8h] [rbp-100h]
  __int128 v82; // [rsp+F0h] [rbp-F8h]
  int v83; // [rsp+100h] [rbp-E8h]
  struct IUnknown *v84; // [rsp+108h] [rbp-E0h]
  struct CPipeInstance **v85; // [rsp+110h] [rbp-D8h]
  _OWORD v86[2]; // [rsp+120h] [rbp-C8h] BYREF
  __int128 v87; // [rsp+140h] [rbp-A8h] BYREF
  _BYTE v88[24]; // [rsp+150h] [rbp-98h]
  __int128 v89; // [rsp+168h] [rbp-80h]
  _BYTE v90[24]; // [rsp+178h] [rbp-70h] BYREF

  v79 = a4;
  v84 = a2;
  v56 = a1;
  v85 = a7;
  v8 = 0;
  v57[0] = 0;
  v9 = *(_DWORD *)a3 != 0;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 10;
  if ( *((_DWORD *)a3 + 2) == 1 )
    v10 = FLOAT_1_0;
  else
    v10 = FLOAT_1_1;
  *a7 = 0LL;
  v75 = 0LL;
  FxPropertyStore = TryGetFxPropertyStore(*((const unsigned __int16 **)a3 + 19), &v75);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v60 = 0LL;
  v12 = *((_DWORD *)a3 + 76);
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v49 = CBridgeSourceProcessNode::CreateBridgeSourceProcessNode(a3, &v60);
      if ( v49 < 0 )
      {
        v76 = v49;
        throw (long *)&v76;
      }
    }
    else if ( v12 == 2 )
    {
      v50 = CBridgeSinkProcessNode::CreateBridgeSinkProcessNode(a3, &v60);
      if ( v50 < 0 )
      {
        v77 = v50;
        throw (long *)&v77;
      }
    }
  }
  else
  {
    v13 = CStreamProcessNode::CreateStreamProcessNode(a3, &v60);
    if ( v13 < 0 )
    {
      v74 = v13;
      throw (long *)&v74;
    }
  }
  v55 = v60;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v80, &v55);
  v60 = 0LL;
  v14 = (unsigned __int16 *)*((_QWORD *)a3 + 16);
  if ( !v14 )
    goto LABEL_85;
  if ( *v14 != 0xFFFE )
  {
    if ( !v14[8] || ((*v14 - 1) & 0xFFFD) == 0 )
    {
      v44 = v14[1];
      if ( (unsigned __int16)(v44 - 1) <= 1u )
      {
        v45 = v14[7];
        if ( ((v45 - 8) & 0xFFE7) == 0 )
        {
          v89 = *(_OWORD *)v14;
          LOWORD(v89) = -2;
          *(_WORD *)v90 = 22;
          *(_WORD *)&v90[2] = v45;
          v18 = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(GUID *)&v90[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v90[8] = *v14;
          v17 = 4 - (v44 != 1);
          *(_DWORD *)&v90[4] = v17;
          goto LABEL_12;
        }
      }
    }
LABEL_85:
    v72 = -2005139404;
    throw (long *)&v72;
  }
  v15 = 22;
  if ( v14[8] == 22
    || (unsigned int)IsEqualGUID((const struct _GUID *)(v14 + 12), &GUID_00000003_0000_0010_8000_00aa00389b71)
    || (unsigned int)IsEqualGUID((const struct _GUID *)(v14 + 12), &GUID_00000001_0000_0010_8000_00aa00389b71) )
  {
    v89 = *(_OWORD *)v14;
    *(_OWORD *)v90 = *((_OWORD *)v14 + 1);
    *(_QWORD *)&v90[16] = *((_QWORD *)v14 + 4);
    *(_WORD *)v90 = v15;
    v16 = 1;
  }
  if ( !v16 )
    goto LABEL_85;
  v17 = *(_DWORD *)&v90[4];
  v18 = GUID_00000000_0000_0010_8000_00aa00389b71;
LABEL_12:
  if ( !(unsigned int)IsEqualGUID(&GUID_00000003_0000_0010_8000_00aa00389b71, (const struct _GUID *)&v90[8])
    && !(unsigned int)IsEqualGUID(&GUID_00000001_0000_0010_8000_00aa00389b71, (const struct _GUID *)&v90[8]) )
  {
    goto LABEL_24;
  }
  if ( !pAudioFormat )
    goto LABEL_90;
  if ( pAudioFormat->wFormatTag == 0xFFFE )
  {
    if ( pAudioFormat->cbSize == v20
      || (unsigned int)IsEqualGUID(
                         (const struct _GUID *)((char *)&pAudioFormat[1].nSamplesPerSec + 2),
                         &GUID_00000003_0000_0010_8000_00aa00389b71)
      || (unsigned int)IsEqualGUID(
                         (const struct _GUID *)((char *)&pAudioFormat[1].nSamplesPerSec + 2),
                         &GUID_00000001_0000_0010_8000_00aa00389b71) )
    {
      v87 = *(_OWORD *)&pAudioFormat->wFormatTag;
      *(_OWORD *)v88 = *(_OWORD *)&pAudioFormat->cbSize;
      *(_QWORD *)&v88[16] = *(_QWORD *)&pAudioFormat[1].wBitsPerSample;
      *(_WORD *)v88 = v20;
      v21 = 1;
    }
    if ( v21 )
      goto LABEL_19;
LABEL_90:
    v71 = -2005139404;
    throw (long *)&v71;
  }
  if ( pAudioFormat->cbSize && ((unsigned __int16)(pAudioFormat->wFormatTag - 1) & v19) != 0 )
    goto LABEL_90;
  nChannels = pAudioFormat->nChannels;
  if ( (unsigned __int16)(nChannels - 1) > 1u )
    goto LABEL_90;
  wBitsPerSample = pAudioFormat->wBitsPerSample;
  if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
    goto LABEL_90;
  v87 = *(_OWORD *)&pAudioFormat->wFormatTag;
  LOWORD(v87) = -2;
  *(_WORD *)v88 = v20;
  *(_WORD *)&v88[2] = wBitsPerSample;
  *(GUID *)&v88[8] = v18;
  *(_DWORD *)&v88[8] = pAudioFormat->wFormatTag;
  *(_DWORD *)&v88[4] = 4 - (nChannels != 1);
LABEL_19:
  if ( *((_DWORD *)a3 + 40) && WORD1(v87) != WORD1(v89) )
  {
    WORD1(v87) = WORD1(v89);
    *(_DWORD *)&v88[4] = v17;
    WORD6(v87) = WORD1(v89) * (HIWORD(v87) >> 3);
    DWORD2(v87) = DWORD1(v87) * WORD6(v87);
  }
  *(_QWORD *)v57 = 0LL;
  v22 = CProcessNode::CreateDummyProcessNode(v9, &v87, v57);
  if ( v22 < 0 )
  {
    v78 = v22;
    throw (long *)&v78;
  }
  v55 = *(CPipeInstance **)v57;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v80, &v55);
  *(_QWORD *)v57 = 0LL;
  if ( (unsigned int)IsEqualGUID(&GUID_00000003_0000_0010_8000_00aa00389b71, (const struct _GUID *)&v90[8])
    && (*((_DWORD *)a3 + 34) & 0x800000) == 0 )
  {
    v61 = 0LL;
    v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v48 = CAPOProcessNode::CreateAPOProcessNode(&GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec, 0LL, v9, 1LL, 0, &v59, &v61);
    if ( v48 < 0 )
    {
      v62 = v48;
      throw (long *)&v62;
    }
    v55 = v61;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v80, &v55);
  }
LABEL_24:
  for ( i = 0; i < *((_DWORD *)a3 + 82); ++i )
  {
    v55 = 0LL;
    v24 = *((_DWORD *)a3 + 40);
    if ( _bittest(&v24, i) )
    {
      v25 = *(GUID *)((char *)a3 + 164);
      ATL::CComPtrBase<IPropertyStore>::CComPtrBase<IPropertyStore>(&v61, (__int64)v75);
      v8 |= 1u;
      v28 = v61;
      v26 = 1;
      v27 = v9;
    }
    else
    {
      v25 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v26 = 0;
      v27 = v9;
      *(_QWORD *)&v59.Data1 = 0LL;
      v8 |= 2u;
      v28 = 0LL;
    }
    v57[0] = v8;
    v86[0] = v25;
    v29 = CAPOProcessNode::CreateAPOProcessNode((char *)a3 + 16 * i + 332, v28, v27, 0LL, v26, v86, &v55);
    if ( (v8 & 2) != 0 )
    {
      v8 &= ~2u;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v59);
    }
    if ( (v8 & 1) != 0 )
    {
      v8 &= ~1u;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v61);
    }
    if ( v29 < 0 )
    {
      v63 = v29;
      throw (long *)&v63;
    }
    *(_QWORD *)v57 = v55;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v80, v57);
  }
  ppIAudioMediaType = 0LL;
  v30 = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, &ppIAudioMediaType);
  if ( v30 < 0 )
  {
    v64 = v30;
    throw (long *)&v64;
  }
  if ( *(_DWORD *)a3 )
  {
    if ( *(_DWORD *)a3 == 1 )
    {
      v55 = 0LL;
      v51 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
      v52 = CProcessNode::CreateDummyProcessNode(v9, v51, &v55);
      if ( v52 < 0 )
      {
        v67 = v52;
        throw (long *)&v67;
      }
      goto LABEL_39;
    }
    if ( *(_DWORD *)a3 == 2 )
    {
      v55 = 0LL;
      v53 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
      v54 = CProcessNode::CreateDummyProcessNode(v9, v53, &v55);
      if ( v54 < 0 )
      {
        v68 = v54;
        throw (long *)&v68;
      }
      goto LABEL_39;
    }
  }
  else
  {
    *(_QWORD *)v57 = 0LL;
    v86[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                       &GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a,
                       0LL,
                       v9,
                       1LL,
                       0,
                       v86,
                       v57);
    if ( APOProcessNode < 0 )
    {
      v65 = APOProcessNode;
      throw (long *)&v65;
    }
    v32 = *(CPipeInstance **)v57;
    (*(void (__fastcall **)(_QWORD, IAudioMediaType *))(**(_QWORD **)v57 + 24LL))(*(_QWORD *)v57, ppIAudioMediaType);
    (*(void (__fastcall **)(CPipeInstance *, IAudioMediaType *))(*(_QWORD *)v32 + 32LL))(v32, ppIAudioMediaType);
    *(_QWORD *)&v59.Data1 = v32;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v80, &v59);
    *(_QWORD *)v57 = 0LL;
    if ( !v79 )
    {
      v55 = 0LL;
      v33 = ((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
      v34 = CProcessNode::CreateDummyProcessNode(v9, v33, &v55);
      if ( v34 < 0 )
      {
        v66 = v34;
        throw (long *)&v66;
      }
LABEL_39:
      *(_QWORD *)&v59.Data1 = v55;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v80, &v59);
    }
  }
  v35 = (CPipeInstance *)operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  *(_QWORD *)&v59.Data1 = v35;
  if ( v35 )
    v36 = CPipeInstance::CPipeInstance(v35, WRITE_DATA_PIPE);
  else
    v36 = 0LL;
  v55 = v36;
  if ( !v36 )
  {
    v69 = -2147024882;
    throw (long *)&v69;
  }
  v37 = -1LL;
  do
    ++v37;
  while ( *(_WORD *)(*((_QWORD *)a3 + 19) + 2 * v37) );
  v38 = _AllocStringWorker<CTCoAllocPolicy>();
  v39 = v38;
  if ( v38 < 0 )
  {
    v70 = v38;
    throw (long *)&v70;
  }
  *((_DWORD *)v36 + 30) = *(_DWORD *)a3 == 2;
  *((_DWORD *)v36 + 3) = v9;
  *((_DWORD *)v36 + 33) = *((_DWORD *)a3 + 40) != 0;
  *((_DWORD *)v36 + 31) = *((_DWORD *)a3 + 2) == 1;
  if ( *((_QWORD *)v36 + 19) )
    ATL::AtlComPtrAssign((struct IUnknown **)v36 + 19, 0LL);
  if ( *((struct IUnknown **)v36 + 30) != v84 )
    ATL::AtlComPtrAssign((struct IUnknown **)v36 + 30, v84);
  v40 = v79;
  *(_QWORD *)v36 = v79;
  *((_DWORD *)v36 + 2) = v40 == 0LL;
  *((_BYTE *)v36 + 316) = *((_DWORD *)a3 + 49) != 0;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddHeadList((char *)v36 + 16, &v80);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v80);
  if ( v56 )
  {
    if ( *((_DWORD *)a3 + 71) )
    {
      v41 = *((_DWORD *)a3 + 71);
      goto LABEL_53;
    }
  }
  else if ( v40 )
  {
    v41 = *((_DWORD *)v40 + 35);
    goto LABEL_53;
  }
  v41 = (int)(float)((float)(int)((double)(int)(pAudioFormat->nAvgBytesPerSec / pAudioFormat->nBlockAlign)
                                * (double)(int)*((_QWORD *)a3 + 4)
                                / 10000000.0
                                + 0.5)
                   * v10);
LABEL_53:
  *((_DWORD *)v36 + 36) = v41;
  v42 = 1;
  if ( *((_DWORD *)a3 + 1) )
    v42 = 7;
  *((_DWORD *)v36 + 34) = v42;
  *((_DWORD *)v36 + 53) = 0;
  if ( (*((_DWORD *)a3 + 34) & 0x100000) != 0 )
  {
    *((_DWORD *)v36 + 34) = v42 | 0xA;
    *((_DWORD *)v36 + 50) = 1056964608;
    *((_DWORD *)v36 + 51) = 1065353216;
  }
  if ( (*((_DWORD *)a3 + 34) & 0x8000000) != 0 )
    *((_DWORD *)v36 + 52) = 3;
  v55 = 0LL;
  *v85 = v36;
  ATL::CAutoPtr<CPipeInstance>::Free(&v55);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&ppIAudioMediaType);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v75);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)&v80);
  return v39;
}
