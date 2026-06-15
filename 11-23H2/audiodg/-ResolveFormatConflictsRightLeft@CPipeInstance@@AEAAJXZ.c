/*
 * XREFs of ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004F18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000AC60 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z @ 0x14000CFD8 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@J_NAEBU_GUID@@M@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14000D878 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000EB00 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140012F94 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400144A0 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetPrev@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400148CC (-GetPrev@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140018394 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x140018938 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001990C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140024720 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140025E98 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140025EEC (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
 *     ?GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionInstance@@PEAPEAUIAudioProcessingObject@@2@Z @ 0x14002B440 (-GetAPONodeAndConnection@CPipeInstance@@AEBAXAEBU_GUID@@PEAPEBVCProcessNode@@PEAPEBVCConnectionI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14005288C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140052944 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x14005A17C (WPP_SF_q.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x14005CCAC (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     WPP_SF__guid_ @ 0x14005CFC0 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14005CFFC (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140064DA4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CPipeInstance::ResolveFormatConflictsRightLeft(CPipeInstance *this)
{
  _QWORD *Next; // rax
  signed int v3; // r8d
  int Converter; // r14d
  const struct tWAVEFORMATEX *v5; // rax
  WAVEFORMATEX *v6; // rbx
  __int64 v7; // rcx
  WAVEFORMATEX **Head; // rax
  WAVEFORMATEX *v9; // r15
  void *v10; // rcx
  __int64 *v11; // r13
  char v12; // di
  __int64 v13; // rbx
  unsigned int *v14; // rdi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rbx
  int v19; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v20; // eax
  int v21; // eax
  _QWORD *v22; // rcx
  __int128 *v24; // rbx
  unsigned int v25; // eax
  __int128 *v26; // rbx
  const WAVEFORMATEX *v27; // rax
  const WAVEFORMATEX *v28; // rax
  _QWORD *v29; // rax
  const WAVEFORMATEX *v30; // rax
  struct IUnknown *v31; // rdi
  __int64 v32; // rbx
  struct IUnknown *v33; // rdi
  __int64 v34; // rbx
  __int64 v35; // rax
  const struct tWAVEFORMATEX *v36; // rbx
  const struct tWAVEFORMATEX *v37; // rax
  const char *v38; // rax
  int ppv; // [rsp+20h] [rbp-178h]
  struct IAudioSystemEffects2 **v40; // [rsp+30h] [rbp-168h]
  char v41; // [rsp+40h] [rbp-158h]
  char v42; // [rsp+41h] [rbp-157h]
  struct IUnknown *v43; // [rsp+48h] [rbp-150h] BYREF
  struct IUnknown *v44; // [rsp+50h] [rbp-148h] BYREF
  struct IMMDevice *v45; // [rsp+58h] [rbp-140h] BYREF
  struct IUnknown *v46; // [rsp+60h] [rbp-138h] BYREF
  _QWORD *v47; // [rsp+68h] [rbp-130h]
  char v48; // [rsp+70h] [rbp-128h]
  __int128 *v49; // [rsp+78h] [rbp-120h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+80h] [rbp-118h] BYREF
  _QWORD *v51; // [rsp+88h] [rbp-110h] BYREF
  WAVEFORMATEX *v52; // [rsp+90h] [rbp-108h]
  struct IUnknown *v53; // [rsp+98h] [rbp-100h] BYREF
  signed int v54; // [rsp+A0h] [rbp-F8h]
  unsigned int v55; // [rsp+A4h] [rbp-F4h]
  _QWORD *v56; // [rsp+A8h] [rbp-F0h]
  CPipeInstance *v57; // [rsp+B0h] [rbp-E8h]
  struct IAudioProcessingObject **v58; // [rsp+B8h] [rbp-E0h]
  struct _GUID v59; // [rsp+C0h] [rbp-D8h] BYREF
  _QWORD v60[2]; // [rsp+D0h] [rbp-C8h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+E0h] [rbp-B8h] BYREF
  LPVOID v62; // [rsp+E8h] [rbp-B0h] BYREF
  int v63; // [rsp+F0h] [rbp-A8h] BYREF
  int *v64; // [rsp+F8h] [rbp-A0h]
  _QWORD *v65; // [rsp+100h] [rbp-98h]
  __int64 *v66; // [rsp+108h] [rbp-90h]
  _QWORD *v67; // [rsp+110h] [rbp-88h]
  _QWORD v68[6]; // [rsp+118h] [rbp-80h] BYREF
  __int128 v69; // [rsp+148h] [rbp-50h] BYREF
  struct _GUID v70; // [rsp+158h] [rbp-40h] BYREF

  v57 = this;
  v60[0] = 0LL;
  v42 = 0;
  v54 = 0;
  v55 = 1;
  v44 = 0LL;
  v62 = 0LL;
  v53 = 0LL;
  ppIAudioMediaType = 0LL;
  v47 = (_QWORD *)((char *)this + 16);
  v67 = (_QWORD *)((char *)this + 16);
  v60[1] = (char *)this + 16;
  v51 = (_QWORD *)*((_QWORD *)this + 2);
  Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v51);
  Converter = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown **))(*(_QWORD *)*Next + 16LL))(*Next, &v53);
  if ( Converter < 0 )
    goto LABEL_56;
  pAudioFormat = 0LL;
  v5 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v53->lpVtbl[1].Release)(v53);
  Converter = CloneWaveFormat(v5, &pAudioFormat);
  if ( Converter < 0 )
    goto LABEL_56;
  v6 = pAudioFormat;
  ConvertPCMWfxToIEEEFloat(pAudioFormat);
  Converter = CreateAudioMediaType(v6, v6->cbSize + 18, &ppIAudioMediaType);
  CoTaskMemFree(v6);
  if ( Converter < 0 )
    goto LABEL_56;
  v51 = (_QWORD *)*((_QWORD *)this + 3);
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 30) && !*(_DWORD *)(v7 + 212) )
    {
      pAudioFormat = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        (CPipeInstance *)v7,
        &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
        (const struct CProcessNode **)&pAudioFormat,
        0LL,
        0LL,
        0LL);
      v9 = pAudioFormat;
      v52 = pAudioFormat;
      if ( pAudioFormat )
        goto LABEL_7;
      pAudioFormat = 0LL;
      CPipeInstance::GetAPONodeAndConnection(
        *(CPipeInstance **)this,
        &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
        (const struct CProcessNode **)&pAudioFormat,
        0LL,
        0LL,
        0LL);
      v9 = pAudioFormat;
      v52 = pAudioFormat;
      if ( pAudioFormat )
        goto LABEL_7;
      v7 = *(_QWORD *)this;
    }
    Head = (WAVEFORMATEX **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v7 + 16));
  }
  else
  {
    Head = (WAVEFORMATEX **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(
                              0LL,
                              (__int64 *)&v51);
  }
  v9 = *Head;
  v52 = *Head;
LABEL_7:
  Converter = (*(__int64 (__fastcall **)(WAVEFORMATEX *, struct IUnknown **))(*(_QWORD *)&v9->wFormatTag + 8LL))(
                v9,
                &v44);
  if ( Converter < 0 )
    goto LABEL_56;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, this);
  }
  while ( 1 )
  {
    v56 = v51;
    if ( !v51 )
    {
      (*(void (__fastcall **)(WAVEFORMATEX *, struct IUnknown *))(*(_QWORD *)&v9->wFormatTag + 24LL))(v9, v44);
      goto LABEL_55;
    }
    v43 = 0LL;
    v46 = 0LL;
    v65 = v51;
    v11 = *(__int64 **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetPrev(
                         (__int64)v10,
                         (__int64 *)&v51);
    v68[1] = v11;
    v12 = 0;
    v41 = 0;
    if ( *((_DWORD *)v11 + 10) != 2 )
    {
      Converter = (*(__int64 (__fastcall **)(__int64 *, struct IUnknown *, struct IUnknown **, _QWORD))(*v11 + 48))(
                    v11,
                    v44,
                    &v43,
                    0LL);
      if ( Converter < 0 )
        goto LABEL_87;
      v18 = v11 + 4;
      goto LABEL_18;
    }
    v66 = v11 + 4;
    v13 = v11[4];
    pAudioFormat = (WAVEFORMATEX *)v13;
    v58 = (struct IAudioProcessingObject **)(v13 + 40);
    v14 = (unsigned int *)(v13 + 4);
    if ( !*(_QWORD *)(v13 + 40) )
    {
      v15 = (__int64 *)*((_QWORD *)this + 30);
      v16 = *v15;
      v17 = *(_QWORD *)(v13 + 56);
      v49 = (__int128 *)(v13 + 8);
      Converter = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, __int64, __int64))(v16 + 24))(
                    v15,
                    v13 + 8,
                    *v14,
                    *((_QWORD *)this + 24),
                    v17,
                    v13 + 40);
      if ( Converter < 0 )
      {
        if ( Converter == -2147024882 )
          goto LABEL_87;
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
        {
          v24 = v49;
        }
        else
        {
          v24 = v49;
          if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              22LL,
              &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
              v49);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(v67, v56);
        v25 = *v14;
        if ( *v14 )
        {
          v54 = Converter;
          v55 = v25;
          v69 = *v24;
        }
        goto LABEL_24;
      }
      if ( *v14 )
        break;
    }
LABEL_15:
    *(_QWORD *)&v59.Data1 = v13 + 4;
    if ( *v14 && *(_DWORD *)(v13 + 52) )
    {
      v41 = 1;
      v48 = 1;
      v21 = (*(__int64 (__fastcall **)(__int64 *, struct IUnknown *, struct IUnknown **, struct IUnknown *))(*v11 + 48))(
              v11,
              v44,
              &v43,
              v53);
      Converter = v21;
      if ( v21 == -2005073917 )
      {
        v64 = (int *)((char *)&v9[1].nSamplesPerSec + 2);
        if ( *(DWORD *)((char *)&v9[1].nSamplesPerSec + 2) != 1 || !*((_DWORD *)this + 78) )
          goto LABEL_105;
        v49 = 0LL;
        Converter = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, __int128 **))(*v58)->lpVtbl->IsOutputFormatSupported)(
                      *v58,
                      0LL,
                      v44,
                      &v49);
        if ( !Converter )
        {
          v45 = 0LL;
          v27 = (const WAVEFORMATEX *)(*(__int64 (__fastcall **)(__int128 *))(*(_QWORD *)v49 + 40LL))(v49);
          Converter = CProcessNode::CreateDummyProcessNode(*v64, v27, &v45);
          if ( Converter >= 0 )
          {
            v68[0] = v45;
            v51 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                              v47,
                              v56,
                              v68);
            v45 = 0LL;
            v28 = (const WAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v53->lpVtbl[1].Release)(v53);
            Converter = CProcessNode::CreateDummyProcessNode(*v64, v28, &v45);
            if ( Converter >= 0 )
            {
              Converter = 0;
              *(_QWORD *)&v59.Data1 = v45;
              ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(v47, v51, &v59);
              v29 = v56;
              *((_DWORD *)this + 34) |= 6u;
              *(_DWORD *)(v13 + 52) = 0;
              v51 = v29;
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v49);
              goto LABEL_24;
            }
          }
          if ( v45 )
            ((void (__fastcall *)(struct IMMDevice *, __int64))v45->lpVtbl->QueryInterface)(v45, 1LL);
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v49);
      }
      else if ( v21 == 1 )
      {
        if ( *(DWORD *)((char *)&v9[1].nSamplesPerSec + 2) == 1 && *((_DWORD *)this + 78) )
        {
          if ( IsFixedFormatApo(*v58) )
          {
            v45 = 0LL;
            v30 = (const WAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v43->lpVtbl[1].Release)(v43);
            Converter = CProcessNode::CreateDummyProcessNode(*((_DWORD *)v11 + 6), v30, &v45);
            if ( Converter >= 0 )
            {
              Converter = 0;
              *(_QWORD *)&v59.Data1 = v45;
              v51 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                v47,
                                v56,
                                &v59);
              *((_DWORD *)this + 34) |= 6u;
              goto LABEL_24;
            }
            if ( v45 )
              ((void (__fastcall *)(struct IMMDevice *, __int64))v45->lpVtbl->QueryInterface)(v45, 1LL);
LABEL_104:
            if ( Converter == -2147024882 )
              goto LABEL_87;
LABEL_105:
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF__guid_(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                24LL,
                &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
                v13 + 8);
            }
            if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)this + 30) + 32LL))(
                   *((_QWORD *)this + 30),
                   *v58) < 0 )
              goto LABEL_87;
            if ( Converter != -2005073917 )
            {
              v54 = Converter;
              v55 = *v14;
              v69 = *(_OWORD *)(v13 + 8);
            }
            ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(v47, v56);
            goto LABEL_24;
          }
          v31 = v53;
          v32 = ((__int64 (__fastcall *)(struct IUnknown *))v44->lpVtbl[1].Release)(v44);
          if ( *(_WORD *)(v32 + 2) != *(_WORD *)(((__int64 (__fastcall *)(struct IUnknown *))v31->lpVtbl[1].Release)(v31)
                                               + 2)
            || (v33 = v44,
                v34 = ((__int64 (__fastcall *)(struct IUnknown *))v53->lpVtbl[1].Release)(v53),
                *(_DWORD *)(((__int64 (__fastcall *)(struct IUnknown *))v33->lpVtbl[1].Release)(v33) + 4) != *(_DWORD *)(v34 + 4)) )
          {
            if ( (*((_BYTE *)this + 136) & 6) == 0 )
            {
              *(_DWORD *)&pAudioFormat[2].cbSize = 0;
              v51 = v56;
              goto LABEL_24;
            }
          }
        }
        goto LABEL_25;
      }
      if ( Converter < 0 )
        goto LABEL_104;
    }
    else
    {
      Converter = (*(__int64 (__fastcall **)(__int64 *, struct IUnknown *, struct IUnknown **, _QWORD))(*v11 + 48))(
                    v11,
                    v44,
                    &v43,
                    0LL);
      if ( Converter < 0 )
        goto LABEL_87;
    }
    v18 = v66;
    v12 = v41;
LABEL_18:
    if ( Converter != 1 )
    {
      if ( !Converter )
      {
        (*(void (__fastcall **)(WAVEFORMATEX *, struct IUnknown *))(*(_QWORD *)&v9->wFormatTag + 24LL))(v9, v44);
        (*(void (__fastcall **)(__int64 *, struct IUnknown *))(*v11 + 32))(v11, v44);
        if ( v12 )
        {
          v35 = *v18;
          goto LABEL_47;
        }
      }
      goto LABEL_21;
    }
LABEL_25:
    v19 = (*(__int64 (__fastcall **)(WAVEFORMATEX *, struct IUnknown *, struct IUnknown **, _QWORD))(*(_QWORD *)&v9->wFormatTag + 40LL))(
            v9,
            v43,
            &v46,
            0LL);
    Converter = v19;
    if ( v19 < 0 )
      goto LABEL_87;
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v44);
        if ( v44 != v46 )
          ATL::AtlComPtrAssign(&v44, v46);
        v42 = 1;
      }
      goto LABEL_21;
    }
    ATL::CComPtrBase<IAudioProcessingObject>::Release(&v44);
    if ( v44 != v43 )
      ATL::AtlComPtrAssign(&v44, v43);
    (*(void (__fastcall **)(WAVEFORMATEX *))(*(_QWORD *)&v9->wFormatTag + 24LL))(v9);
    (*(void (__fastcall **)(__int64 *, struct IUnknown *))(*v11 + 32))(v11, v44);
    if ( v41 )
    {
      v35 = v11[4];
LABEL_47:
      if ( *(_DWORD *)(v35 + 4) )
      {
        if ( *(_DWORD *)(v35 + 52) )
        {
          ATL::CComPtrBase<IAudioProcessingObject>::Release(&v44);
          if ( v44 != v53 )
            ATL::AtlComPtrAssign(&v44, v53);
        }
      }
    }
LABEL_21:
    if ( !v42 )
    {
      if ( (*((_BYTE *)this + 136) & 8) == 0
        || (v36 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType),
            v37 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v44->lpVtbl[1].Release)(v44),
            !(unsigned int)CompareWaveFormat(v37, v36)) )
      {
        v9 = (WAVEFORMATEX *)v11;
        v52 = (WAVEFORMATEX *)v11;
        goto LABEL_24;
      }
      if ( !v43 && v53 )
        ATL::AtlComPtrAssign(&v43, v53);
    }
    Converter = CPipeInstance::FindConverter(
                  this,
                  (struct IAudioMediaType *)v44,
                  (struct IAudioMediaType *)v43,
                  &v63,
                  &v70);
    if ( Converter < 0 )
      goto LABEL_87;
    v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v70, 0LL, *((_DWORD *)v11 + 6), v63, 0, &v59, v60);
    if ( Converter < 0 )
      goto LABEL_87;
    Converter = 0;
    *(_QWORD *)&v59.Data1 = v60[0];
    v51 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(v47, v56, &v59);
    v60[0] = 0LL;
    v42 = 0;
LABEL_24:
    ATL::CComPtrBase<IAudioProcessingObject>::Release(&v46);
    ATL::CComPtrBase<IAudioProcessingObject>::Release(&v43);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v46);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
  }
  v45 = 0LL;
  Converter = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                &v62);
  if ( Converter < 0
    || (Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v62 + 40LL))(
                      v62,
                      *((_QWORD *)this + 24),
                      &v45),
        Converter < 0) )
  {
LABEL_74:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v45);
    goto LABEL_87;
  }
  v20 = *((_DWORD *)this + 32);
  v59 = *(struct _GUID *)(v13 + 24);
  Converter = InitializeSystemEffectsInterface(v45, *v58, (struct _GUID *)(v13 + 8), &v59, ppv, v20, v40);
  if ( Converter >= 0 )
  {
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v45);
    goto LABEL_15;
  }
  if ( Converter == -2147024882 )
    goto LABEL_74;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
  {
    v26 = v49;
  }
  else
  {
    v26 = v49;
    if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, v49);
  }
  if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)this + 30) + 32LL))(
         *((_QWORD *)this + 30),
         *v58) >= 0 )
  {
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(v47, v56);
    v54 = Converter;
    v55 = *v14;
    v69 = *v26;
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v45);
    goto LABEL_24;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v45);
LABEL_87:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v46);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
LABEL_55:
  v3 = v54;
  if ( v54 >= 0
    || (int)TrackSystemEffectBehavior(*((_QWORD *)this + 24), v55, v54, 0, (__int64)&v69, SLODWORD(FLOAT_1_0)) >= 0 )
  {
LABEL_56:
    v22 = WPP_GLOBAL_Control;
    goto LABEL_57;
  }
  v22 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids);
      goto LABEL_56;
    }
LABEL_57:
    if ( v22 != &WPP_GLOBAL_Control && (*((_DWORD *)v22 + 7) & 0x20000) != 0 && *((_BYTE *)v22 + 25) >= 4u )
    {
      v38 = "SUCCEEDED";
      if ( Converter < 0 )
        v38 = "FAILED";
      WPP_SF_qs(v22[2], 26, v3, (_DWORD)this, (__int64)v38);
      v22 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v22 != &WPP_GLOBAL_Control && (*((_DWORD *)v22 + 7) & 0x20000) != 0 && *((_BYTE *)v22 + 25) >= 2u )
      WPP_SF_d(v22[2], 27LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsRightLeft", 0x6B5u, Converter);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v53);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v62);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v44);
  return (unsigned int)Converter;
}
