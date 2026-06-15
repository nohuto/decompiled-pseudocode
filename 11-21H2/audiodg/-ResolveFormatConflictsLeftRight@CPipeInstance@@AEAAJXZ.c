/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140012210
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009D48 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140007750 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140007828 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140009EC8 (-RemoveAt@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14001313C (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140013204 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140014BD0 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140018458 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x140018A6C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001C5D8 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140025F08 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140029AC0 (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140029B14 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140029D0C (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002A2F8 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14002B3A4 (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x140031A14 (CreateAudioMediaType.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14005187C (WPP_SF_D.c)
 *     WPP_SF_d @ 0x140051934 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x140057448 (WPP_SF_q.c)
 *     ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x14005A07C (-IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z.c)
 *     WPP_SF__guid_ @ 0x14005A2D0 (WPP_SF__guid_.c)
 *     WPP_SF_qs @ 0x14005A30C (WPP_SF_qs.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140060EC4 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  CPipeInstance *v1; // r14
  __int64 v2; // rcx
  _QWORD *Tail; // rax
  int v4; // eax
  int v5; // r8d
  HRESULT Converter; // edi
  const struct tWAVEFORMATEX *v7; // rax
  WAVEFORMATEX *v8; // rbx
  __int64 v9; // rcx
  unsigned int *v10; // rbx
  WAVEFORMATEX *v11; // rsi
  WAVEFORMATEX *v12; // r13
  _QWORD *v13; // r14
  int v14; // r12d
  __int64 v15; // r13
  __int64 v16; // r8
  int v17; // eax
  struct IAudioMediaType *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // eax
  int v24; // eax
  __int64 v25; // rax
  _QWORD *Head; // rax
  struct IAudioMediaType *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  const struct tWAVEFORMATEX *v31; // rbx
  const struct tWAVEFORMATEX *v32; // rax
  __int64 v33; // rax
  int v34; // eax
  int v35; // eax
  const char *v36; // rax
  int ppv; // [rsp+20h] [rbp-168h]
  struct IAudioSystemEffects2 **v38; // [rsp+30h] [rbp-158h]
  char v39; // [rsp+40h] [rbp-148h]
  struct IAudioMediaType *v40; // [rsp+48h] [rbp-140h] BYREF
  CPipeInstance *v41; // [rsp+50h] [rbp-138h]
  __int64 v42; // [rsp+58h] [rbp-130h] BYREF
  struct IMMDevice *v43; // [rsp+60h] [rbp-128h] BYREF
  struct IAudioMediaType *v44; // [rsp+68h] [rbp-120h] BYREF
  struct IAudioMediaType *v45; // [rsp+70h] [rbp-118h] BYREF
  WAVEFORMATEX *v46; // [rsp+78h] [rbp-110h] BYREF
  unsigned int *v47; // [rsp+80h] [rbp-108h]
  __int64 v48; // [rsp+88h] [rbp-100h] BYREF
  unsigned int v49; // [rsp+90h] [rbp-F8h]
  WAVEFORMATEX *pAudioFormat; // [rsp+98h] [rbp-F0h] BYREF
  _QWORD v51[2]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v52[2]; // [rsp+B0h] [rbp-D8h] BYREF
  struct _GUID v53; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-B8h] BYREF
  int v55; // [rsp+D8h] [rbp-B0h]
  int v56; // [rsp+DCh] [rbp-ACh] BYREF
  int v57; // [rsp+E0h] [rbp-A8h] BYREF
  int pExceptionObject; // [rsp+E4h] [rbp-A4h] BYREF
  LPVOID v59; // [rsp+E8h] [rbp-A0h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+F0h] [rbp-98h] BYREF
  _QWORD v61[7]; // [rsp+F8h] [rbp-90h] BYREF
  struct _GUID v62; // [rsp+130h] [rbp-58h] BYREF
  __int128 v63; // [rsp+140h] [rbp-48h] BYREF

  v1 = this;
  v41 = this;
  v51[1] = this;
  v51[0] = 0LL;
  v54 = 0LL;
  v39 = 0;
  v49 = 1;
  v44 = 0LL;
  v48 = 0LL;
  ppIAudioMediaType = 0LL;
  v59 = 0LL;
  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Head = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead(v2 + 16);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*Head + 8LL))(*Head, &v48);
  }
  else
  {
    Tail = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((char *)v1 + 16);
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*Tail + 16LL))(*Tail, &v48);
  }
  Converter = v4;
  if ( v4 < 0 )
    goto LABEL_40;
  pAudioFormat = 0LL;
  v7 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 40LL))(v48);
  Converter = CloneWaveFormat(v7, &pAudioFormat);
  if ( Converter < 0 )
    goto LABEL_40;
  v8 = pAudioFormat;
  ConvertPCMWfxToIEEEFloat(pAudioFormat);
  Converter = CreateAudioMediaType(v8, v8->cbSize + 18, &ppIAudioMediaType);
  CoTaskMemFree(v8);
  if ( Converter < 0 )
    goto LABEL_40;
  v46 = (WAVEFORMATEX *)*((_QWORD *)v1 + 2);
  v10 = (unsigned int *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v9, (_QWORD **)&v46);
  v47 = v10;
  Converter = (*(__int64 (__fastcall **)(unsigned int *, struct IAudioMediaType **))(*(_QWORD *)v10 + 16LL))(v10, &v44);
  if ( Converter < 0 )
    goto LABEL_40;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, v1);
  }
  v11 = v46;
  while ( 1 )
  {
    if ( !v11 )
    {
      (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v10 + 32LL))(v10, v44);
      goto LABEL_39;
    }
    v42 = 0LL;
    v40 = 0LL;
    v12 = v11;
    pAudioFormat = v11;
    v11 = *(WAVEFORMATEX **)&v11->wFormatTag;
    v46 = v11;
    v13 = *(_QWORD **)&v12->cbSize;
    v61[0] = v13;
    v14 = 0;
    if ( *((_DWORD *)v13 + 10) == 2 )
      break;
    Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*v13 + 40LL))(
                  v13,
                  v44,
                  &v40,
                  0LL);
    if ( Converter < 0 )
      goto LABEL_73;
LABEL_17:
    if ( Converter != 1 )
    {
      if ( Converter )
        goto LABEL_20;
      (*(void (__fastcall **)(_QWORD *, struct IAudioMediaType *))(*v13 + 24LL))(v13, v44);
      (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v10 + 32LL))(v10, v44);
      if ( !v14 )
        goto LABEL_20;
      v25 = v13[4];
      if ( !*(_DWORD *)(v25 + 4) || !*(_DWORD *)(v25 + 48) )
        goto LABEL_20;
      goto LABEL_57;
    }
    v20 = (*(__int64 (__fastcall **)(unsigned int *, struct IAudioMediaType *, __int64 *, _QWORD))(*(_QWORD *)v10 + 48LL))(
            v10,
            v40,
            &v42,
            0LL);
    Converter = v20;
    if ( v20 < 0 )
      goto LABEL_73;
    if ( !v20 )
    {
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v44);
      ATL::CComPtr<IAudioMediaType>::operator=(&v44, &v40);
      (*(void (__fastcall **)(_QWORD *, struct IAudioMediaType *))(*v13 + 24LL))(v13, v44);
      (*(void (__fastcall **)(unsigned int *, struct IAudioMediaType *))(*(_QWORD *)v10 + 32LL))(v10, v44);
      if ( !v14 )
        goto LABEL_20;
      v30 = v13[4];
      if ( !*(_DWORD *)(v30 + 4) || !*(_DWORD *)(v30 + 48) )
        goto LABEL_20;
LABEL_57:
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v44);
      ATL::CComPtr<IAudioMediaType>::operator=(&v44, &v48);
LABEL_20:
      if ( (*((_BYTE *)v41 + 136) & 8) != 0 )
      {
        v31 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType);
        v32 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44);
        if ( (unsigned int)CompareWaveFormat(v32, v31) )
        {
          v45 = 0LL;
          Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType **))(*v13 + 8LL))(v13, &v45);
          if ( Converter >= 0 )
          {
            v1 = v41;
            Converter = CPipeInstance::FindConverter(v41, v45, v45, &v57, &v62);
            if ( Converter >= 0 )
            {
              v53 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
              Converter = CAPOProcessNode::CreateAPOProcessNode(&v62, 0LL, v47[6], (unsigned int)v57, 0, &v53, v51);
              if ( Converter >= 0 )
              {
                *(_QWORD *)&v53.Data1 = v51[0];
                v46 = (WAVEFORMATEX *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                                        (char *)v1 + 16,
                                        v12,
                                        &v53);
                JUMPOUT(0x1400426F5LL);
              }
            }
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v45);
            goto LABEL_75;
          }
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v45);
LABEL_73:
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v40);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v42);
          v1 = v41;
          goto LABEL_39;
        }
      }
      v10 = (unsigned int *)v13;
      v47 = (unsigned int *)v13;
      goto LABEL_22;
    }
    if ( v20 != 1 )
      goto LABEL_20;
    ATL::CComPtrBase<IAudioProcessingObject>::Release(&v44);
    ATL::CComPtr<IAudioMediaType>::operator=(&v44, &v42);
    v1 = v41;
    Converter = CPipeInstance::FindConverter(v41, v44, v40, &v56, &v62);
    if ( Converter < 0 )
      goto LABEL_75;
    v53 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v62, 0LL, v10[6], (unsigned int)v56, 0, &v53, v51);
    if ( Converter < 0 )
      goto LABEL_75;
    Converter = 0;
    *(_QWORD *)&v53.Data1 = v51[0];
    v11 = (WAVEFORMATEX *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                            (char *)v1 + 16,
                            v12,
                            &v53);
    v46 = v11;
    v51[0] = 0LL;
LABEL_23:
    v18 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
      v18 = v40;
    }
    v19 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v19 = v42;
      v18 = v40;
    }
    if ( v18 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
      v19 = v42;
    }
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v1 = v41;
  }
  v15 = v13[4];
  v61[1] = v15;
  v16 = *(unsigned int *)(v15 + 4);
  LODWORD(v43) = v16;
  LOBYTE(v14) = (_DWORD)v16 != 0;
  v55 = v14;
  if ( *(_QWORD *)(v15 + 40) )
  {
    if ( !(_DWORD)v16 )
      goto LABEL_15;
    goto LABEL_50;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD, __int64))(**((_QWORD **)v41 + 30) + 24LL))(
          *((_QWORD *)v41 + 30),
          v15 + 8,
          v16,
          *((_QWORD *)v41 + 24),
          *(_QWORD *)(v15 + 56),
          v15 + 40);
  Converter = v17;
  if ( v17 < 0 )
  {
    if ( v17 == -2147024882 )
      goto LABEL_73;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29LL,
        &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
        v15 + 8);
    }
    v1 = v41;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(
      (__int64 **)v41 + 2,
      (__int64 *)pAudioFormat);
    if ( (_DWORD)v43 )
    {
      v39 = 1;
      v49 = *(_DWORD *)(v15 + 4);
      v63 = *(_OWORD *)(v15 + 8);
    }
    goto LABEL_115;
  }
  if ( !(_DWORD)v43 )
    goto LABEL_15;
  v43 = 0LL;
  Converter = CoCreateInstance(
                &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                0LL,
                0x17u,
                &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                &v59);
  if ( Converter < 0
    || (Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v59 + 40LL))(
                      v59,
                      *((_QWORD *)v41 + 24),
                      &v43),
        Converter < 0) )
  {
LABEL_79:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
    goto LABEL_73;
  }
  v23 = *((_DWORD *)v41 + 32);
  v53 = *(struct _GUID *)(v15 + 24);
  v24 = InitializeSystemEffectsInterface(
          v43,
          *(struct IAudioProcessingObject **)(v15 + 40),
          (struct _GUID *)(v15 + 8),
          &v53,
          ppv,
          v23,
          v38);
  Converter = v24;
  if ( v24 >= 0 )
  {
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
LABEL_50:
    if ( *(_DWORD *)(v15 + 4) && *(_DWORD *)(v15 + 48) )
    {
      Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, __int64))(*v13 + 40LL))(
                    v13,
                    v44,
                    &v40,
                    v48);
      if ( Converter == -2005073917 )
      {
        if ( *((_DWORD *)v13 + 6) != 1 || !IsFixedFormatApo(*(struct IAudioProcessingObject **)(v15 + 40)) )
          goto LABEL_97;
        v27 = 0LL;
        v45 = 0LL;
        v52[0] = 0LL;
        Converter = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IAudioMediaType *, __int64 *))(**(_QWORD **)(v15 + 40) + 56LL))(
                      *(_QWORD *)(v15 + 40),
                      0LL,
                      v44,
                      v52);
        if ( Converter >= 0 )
        {
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52[0] + 40LL))(v52[0]);
          Converter = CProcessNode::CreateDummyProcessNode(*((unsigned int *)v13 + 6), v28, &v45);
          if ( Converter >= 0 )
          {
            *(_QWORD *)&v53.Data1 = (char *)v41 + 16;
            v43 = (struct IMMDevice *)v45;
            v11 = (WAVEFORMATEX *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                    (char *)v41 + 16,
                                    pAudioFormat,
                                    &v43);
            v46 = v11;
            v10 = v47;
            v45 = 0LL;
            v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 40LL))(v48);
            Converter = CProcessNode::CreateDummyProcessNode(*((unsigned int *)v13 + 6), v29, &v45);
            if ( Converter >= 0 )
            {
              Converter = 0;
              v61[0] = v45;
              ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                *(_QWORD *)&v53.Data1,
                v11,
                v61);
              *((_DWORD *)v41 + 34) |= 6u;
              *(_DWORD *)(v15 + 48) = 0;
              v11 = pAudioFormat;
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v52);
              goto LABEL_23;
            }
          }
          v27 = v45;
        }
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v52);
        if ( v27 )
          ((void (__fastcall *)(struct IAudioMediaType *, __int64))v27->lpVtbl->QueryInterface)(v27, 1LL);
        v10 = v47;
      }
      if ( Converter < 0 )
      {
        if ( Converter == -2147024882 )
          goto LABEL_73;
LABEL_97:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            31LL,
            &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
            v15 + 8);
        }
        v1 = v41;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v41 + 30) + 32LL))(
               *((_QWORD *)v41 + 30),
               *(_QWORD *)(v15 + 40)) < 0 )
          goto LABEL_75;
        if ( Converter != -2005073917 )
        {
          v39 = 1;
          v49 = *(_DWORD *)(v15 + 4);
          v63 = *(_OWORD *)(v15 + 8);
        }
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(
          (__int64 **)v1 + 2,
          (__int64 *)pAudioFormat);
LABEL_22:
        if ( Converter >= 0 )
          goto LABEL_23;
        v1 = v41;
LABEL_115:
        if ( v14 )
        {
          v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 40LL))(v48);
          v34 = CProcessNode::CreateDummyProcessNode(v10[6], v33, &v54);
          if ( v34 < 0 )
          {
            pExceptionObject = v34;
            throw (long *)&pExceptionObject;
          }
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 24LL))(v54, v48);
          Converter = 0;
          v11 = (WAVEFORMATEX *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                                  (char *)v1 + 16,
                                  v11,
                                  &v54);
          v46 = v11;
          v54 = 0LL;
        }
        goto LABEL_23;
      }
      goto LABEL_16;
    }
LABEL_15:
    Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType *, struct IAudioMediaType **, _QWORD))(*v13 + 40LL))(
                  v13,
                  v44,
                  &v40,
                  0LL);
    if ( Converter < 0 )
      goto LABEL_73;
LABEL_16:
    v12 = pAudioFormat;
    goto LABEL_17;
  }
  if ( v24 == -2147024882 )
    goto LABEL_79;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF__guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, v15 + 8);
  }
  v1 = v41;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v41 + 30) + 32LL))(
         *((_QWORD *)v41 + 30),
         *(_QWORD *)(v15 + 40)) >= 0 )
  {
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(
      (__int64 **)v1 + 2,
      (__int64 *)pAudioFormat);
    v39 = 1;
    v49 = *(_DWORD *)(v15 + 4);
    v63 = *(_OWORD *)(v15 + 8);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
    goto LABEL_115;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
LABEL_75:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v40);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v42);
LABEL_39:
  if ( !v39
    || (v35 = TrackSystemEffectBehavior(*((_QWORD *)v1 + 24), v49, 0LL, 0LL, &v63, LODWORD(FLOAT_1_0)), v35 >= 0) )
  {
LABEL_40:
    v21 = WPP_GLOBAL_Control;
    goto LABEL_41;
  }
  v21 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids,
        (unsigned int)v35);
      goto LABEL_40;
    }
LABEL_41:
    if ( v21 != &WPP_GLOBAL_Control && (*((_DWORD *)v21 + 7) & 0x20000) != 0 && *((_BYTE *)v21 + 25) >= 4u )
    {
      v36 = "SUCCEEDED";
      if ( Converter < 0 )
        v36 = "FAILED";
      WPP_SF_qs(v21[2], 33, v5, (_DWORD)v1, (__int64)v36);
      v21 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v21 != &WPP_GLOBAL_Control && (*((_DWORD *)v21 + 7) & 0x20000) != 0 && *((_BYTE *)v21 + 25) >= 2u )
      WPP_SF_d(v21[2], 34LL, &WPP_172580f3b5c1328999f73b4a59bce9a9_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsLeftRight", 0x866u, Converter);
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v59);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v48);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v44);
  return (unsigned int)Converter;
}
