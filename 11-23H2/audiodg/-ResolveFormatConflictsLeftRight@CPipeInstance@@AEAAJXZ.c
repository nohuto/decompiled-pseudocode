/*
 * XREFs of ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0
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
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140018394 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x140018938 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001990C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x14001B69C (-GetTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z @ 0x140024720 (-FindConverter@CPipeInstance@@AEAAJPEAUIAudioMediaType@@0PEAHPEAU_GUID@@@Z.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140025E98 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?InsertAfter@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x140025EEC (-InsertAfter@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPE.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     CreateAudioMediaType @ 0x14002A2A4 (CreateAudioMediaType.c)
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
__int64 __fastcall CPipeInstance::ResolveFormatConflictsLeftRight(CPipeInstance *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // r13
  _QWORD *Tail; // rax
  int Converter; // esi
  signed int v6; // r8d
  const struct tWAVEFORMATEX *v7; // rax
  WAVEFORMATEX *v8; // rbx
  __int64 v9; // rcx
  int *v10; // r12
  void *v11; // rcx
  _QWORD *v12; // r15
  int v13; // ebx
  __int64 v14; // r8
  unsigned int *v15; // rax
  unsigned int v16; // r11d
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v22; // eax
  __int64 v23; // rax
  int v24; // eax
  _QWORD *Head; // rax
  struct IAudioMediaType *v26; // r15
  const WAVEFORMATEX *v27; // rax
  int v28; // eax
  struct IAudioMediaType *v29; // r15
  struct IMMDevice *v30; // rbx
  const WAVEFORMATEX *v31; // rax
  const WAVEFORMATEX *v32; // rax
  __int64 v33; // r15
  const struct tWAVEFORMATEX *v34; // rbx
  const struct tWAVEFORMATEX *v35; // rax
  const char *v36; // rax
  int ppv; // [rsp+20h] [rbp-1A8h]
  struct IAudioSystemEffects2 **v38; // [rsp+30h] [rbp-198h]
  char v39; // [rsp+40h] [rbp-188h]
  int v40; // [rsp+44h] [rbp-184h]
  int v41; // [rsp+44h] [rbp-184h]
  struct IUnknown *v42; // [rsp+48h] [rbp-180h] BYREF
  struct IUnknown *v43; // [rsp+50h] [rbp-178h] BYREF
  struct IMMDevice *v44; // [rsp+58h] [rbp-170h] BYREF
  struct IUnknown *v45; // [rsp+60h] [rbp-168h] BYREF
  struct IAudioMediaType *v46; // [rsp+68h] [rbp-160h] BYREF
  _QWORD *v47; // [rsp+70h] [rbp-158h] BYREF
  struct IUnknown *v48; // [rsp+78h] [rbp-150h] BYREF
  signed int v49; // [rsp+80h] [rbp-148h]
  unsigned int v50; // [rsp+84h] [rbp-144h]
  __int64 v51; // [rsp+88h] [rbp-140h]
  _QWORD *v52; // [rsp+90h] [rbp-138h]
  CPipeInstance *v53; // [rsp+98h] [rbp-130h]
  __int64 v54; // [rsp+A0h] [rbp-128h] BYREF
  int *v55; // [rsp+A8h] [rbp-120h]
  WAVEFORMATEX *pAudioFormat; // [rsp+B0h] [rbp-118h] BYREF
  struct IAudioProcessingObject **v57; // [rsp+B8h] [rbp-110h]
  _QWORD *v58; // [rsp+C0h] [rbp-108h]
  GUID v59; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-E8h] BYREF
  unsigned int *v61; // [rsp+E8h] [rbp-E0h]
  int v62; // [rsp+F0h] [rbp-D8h]
  int v63; // [rsp+F4h] [rbp-D4h] BYREF
  int pExceptionObject; // [rsp+F8h] [rbp-D0h] BYREF
  int v65; // [rsp+FCh] [rbp-CCh] BYREF
  LPVOID v66; // [rsp+100h] [rbp-C8h] BYREF
  IAudioMediaType *ppIAudioMediaType; // [rsp+108h] [rbp-C0h] BYREF
  int *v68; // [rsp+110h] [rbp-B8h]
  _QWORD *v69; // [rsp+118h] [rbp-B0h]
  _QWORD *v70; // [rsp+120h] [rbp-A8h]
  struct _GUID v71; // [rsp+130h] [rbp-98h] BYREF
  _QWORD *v72; // [rsp+140h] [rbp-88h]
  struct _GUID v73; // [rsp+170h] [rbp-58h] BYREF
  __int128 v74; // [rsp+180h] [rbp-48h] BYREF

  v53 = this;
  v54 = 0LL;
  v60 = 0LL;
  v39 = 0;
  v49 = 0;
  v50 = 1;
  v43 = 0LL;
  v48 = 0LL;
  ppIAudioMediaType = 0LL;
  v66 = 0LL;
  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Head = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v2 + 16));
    Converter = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown **))(*(_QWORD *)*Head + 8LL))(*Head, &v48);
    if ( Converter >= 0 )
    {
      v3 = (_QWORD *)((char *)this + 16);
      goto LABEL_3;
    }
LABEL_27:
    v20 = WPP_GLOBAL_Control;
    goto LABEL_28;
  }
  v3 = (_QWORD *)((char *)this + 16);
  Tail = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetTail((char *)this + 16);
  Converter = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown **))(*(_QWORD *)*Tail + 16LL))(*Tail, &v48);
  if ( Converter < 0 )
    goto LABEL_27;
LABEL_3:
  pAudioFormat = 0LL;
  v7 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v48->lpVtbl[1].Release)(v48);
  Converter = CloneWaveFormat(v7, &pAudioFormat);
  if ( Converter < 0 )
    goto LABEL_27;
  v8 = pAudioFormat;
  ConvertPCMWfxToIEEEFloat(pAudioFormat);
  Converter = CreateAudioMediaType(v8, v8->cbSize + 18, &ppIAudioMediaType);
  CoTaskMemFree(v8);
  if ( Converter < 0 )
    goto LABEL_27;
  v70 = v3;
  v58 = v3;
  v47 = (_QWORD *)*v3;
  v10 = *(int **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v9, &v47);
  v55 = v10;
  Converter = (*(__int64 (__fastcall **)(int *, struct IUnknown **))(*(_QWORD *)v10 + 16LL))(v10, &v43);
  if ( Converter < 0 )
    goto LABEL_27;
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, this);
  }
  while ( 1 )
  {
    v52 = v47;
    if ( !v47 )
    {
      (*(void (__fastcall **)(int *, struct IUnknown *))(*(_QWORD *)v10 + 32LL))(v10, v43);
      goto LABEL_26;
    }
    v45 = 0LL;
    v42 = 0LL;
    v69 = v47;
    v12 = *(_QWORD **)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v11, &v47);
    v72 = v12;
    v13 = 0;
    v40 = 0;
    LODWORD(v44) = 0;
    if ( *((_DWORD *)v12 + 10) == 2 )
    {
      pAudioFormat = (WAVEFORMATEX *)(v12 + 4);
      *(_QWORD *)&v59.Data1 = v12 + 4;
      v14 = v12[4];
      v51 = v14;
      v15 = (unsigned int *)(v14 + 4);
      v61 = (unsigned int *)(v14 + 4);
      v16 = *(_DWORD *)(v14 + 4);
      LODWORD(v44) = v16;
      LOBYTE(v13) = v16 != 0;
      v41 = v13;
      v62 = v13;
      v57 = (struct IAudioProcessingObject **)(v14 + 40);
      if ( *(_QWORD *)(v14 + 40) )
      {
        if ( !v16 )
          goto LABEL_13;
      }
      else
      {
        v17 = (__int64 *)*((_QWORD *)this + 30);
        v18 = *v17;
        v19 = *(_QWORD *)(v14 + 56);
        v46 = (struct IAudioMediaType *)(v14 + 8);
        Converter = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD, __int64, __int64))(v18 + 24))(
                      v17,
                      v14 + 8,
                      v16,
                      *((_QWORD *)this + 24),
                      v19,
                      v14 + 40);
        if ( Converter < 0 )
        {
          if ( Converter == -2147024882 )
            goto LABEL_71;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
          {
            v26 = v46;
          }
          else
          {
            v26 = v46;
            if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              WPP_SF__guid_(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                29LL,
                &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
                v46);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(v70, v52);
          if ( (_DWORD)v44 )
          {
            v49 = Converter;
            v50 = *v61;
            v74 = *(_OWORD *)&v26->lpVtbl;
          }
          goto LABEL_75;
        }
        if ( !(_DWORD)v44 )
          goto LABEL_13;
        v44 = 0LL;
        Converter = CoCreateInstance(
                      &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                      0LL,
                      0x17u,
                      &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                      &v66);
        if ( Converter < 0 )
          goto LABEL_78;
        Converter = (*(__int64 (__fastcall **)(LPVOID, _QWORD, struct IMMDevice **))(*(_QWORD *)v66 + 40LL))(
                      v66,
                      *((_QWORD *)this + 24),
                      &v44);
        if ( Converter < 0 )
          goto LABEL_78;
        v22 = *((_DWORD *)this + 32);
        v71 = *(struct _GUID *)(v51 + 24);
        Converter = InitializeSystemEffectsInterface(v44, *v57, (struct _GUID *)(v51 + 8), &v71, ppv, v22, v38);
        if ( Converter < 0 )
        {
          if ( Converter == -2147024882 )
            goto LABEL_78;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0 )
          {
            v29 = v46;
          }
          else
          {
            v29 = v46;
            if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              WPP_SF__guid_(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                30LL,
                &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
                v46);
          }
          if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)this + 30) + 32LL))(
                 *((_QWORD *)this + 30),
                 *v57) < 0 )
          {
LABEL_78:
            wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v44);
            goto LABEL_71;
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(v3, v52);
          v49 = Converter;
          v50 = *v61;
          v74 = *(_OWORD *)&v29->lpVtbl;
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v44);
          goto LABEL_75;
        }
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v44);
        v14 = v51;
        v15 = v61;
      }
      if ( *v15 && *(_DWORD *)(v14 + 48) )
      {
        Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown **, struct IUnknown *))(*v12 + 40LL))(
                      v12,
                      v43,
                      &v42,
                      v48);
        if ( Converter == -2005073917 )
        {
          v68 = (int *)(v12 + 3);
          if ( *((_DWORD *)v12 + 6) != 1 || !IsFixedFormatApo(*v57) )
            goto LABEL_98;
          v30 = 0LL;
          v44 = 0LL;
          v46 = 0LL;
          Converter = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, _QWORD, struct IUnknown *, struct IAudioMediaType **))(*v57)->lpVtbl->IsInputFormatSupported)(
                        *v57,
                        0LL,
                        v43,
                        &v46);
          if ( Converter >= 0 )
          {
            v31 = (const WAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v46->lpVtbl->GetAudioFormat)(v46);
            Converter = CProcessNode::CreateDummyProcessNode(*v68, v31, &v44);
            if ( Converter >= 0 )
            {
              *(_QWORD *)&v71.Data1 = v44;
              v47 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(
                                v3,
                                v52,
                                &v71);
              v44 = 0LL;
              v32 = (const WAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v48->lpVtbl[1].Release)(v48);
              Converter = CProcessNode::CreateDummyProcessNode(*v68, v32, &v44);
              if ( Converter >= 0 )
              {
                *(_QWORD *)&v59.Data1 = v44;
                ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertAfter(v3, v47, &v59);
                JUMPOUT(0x1400428BDLL);
              }
            }
            v30 = v44;
          }
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v46);
          if ( v30 )
            ((void (__fastcall *)(struct IMMDevice *, __int64))v30->lpVtbl->QueryInterface)(v30, 1LL);
          v13 = v41;
        }
        if ( Converter < 0 )
        {
          if ( Converter == -2147024882 )
            goto LABEL_71;
LABEL_98:
          v33 = v51;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF__guid_(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              31LL,
              &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids,
              v51 + 8);
          }
          if ( (*(int (__fastcall **)(_QWORD, struct IAudioProcessingObject *))(**((_QWORD **)this + 30) + 32LL))(
                 *((_QWORD *)this + 30),
                 *v57) < 0 )
            goto LABEL_71;
          if ( Converter != -2005073917 )
          {
            v49 = Converter;
            v50 = *v61;
            v74 = *(_OWORD *)(v33 + 8);
          }
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(v3, v52);
LABEL_21:
          if ( Converter >= 0 )
            goto LABEL_22;
LABEL_75:
          if ( v13 )
          {
            v27 = (const WAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v48->lpVtbl[1].Release)(v48);
            v28 = CProcessNode::CreateDummyProcessNode(v10[6], v27, &v60);
            if ( v28 < 0 )
            {
              pExceptionObject = v28;
              throw (long *)&pExceptionObject;
            }
            (*(void (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v60 + 24LL))(v60, v48);
            v47 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(
                              v3,
                              v47,
                              &v60);
            JUMPOUT(0x140042BFELL);
          }
          goto LABEL_22;
        }
        goto LABEL_14;
      }
LABEL_13:
      Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown **, _QWORD))(*v12 + 40LL))(
                    v12,
                    v43,
                    &v42,
                    0LL);
      if ( Converter < 0 )
        goto LABEL_71;
LABEL_14:
      v40 = v13;
      LODWORD(v44) = v13;
      goto LABEL_15;
    }
    Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IUnknown *, struct IUnknown **, _QWORD))(*v12 + 40LL))(
                  v12,
                  v43,
                  &v42,
                  0LL);
    if ( Converter < 0 )
      goto LABEL_71;
    pAudioFormat = (WAVEFORMATEX *)(v12 + 4);
LABEL_15:
    if ( Converter != 1 )
    {
      if ( Converter )
        goto LABEL_18;
      (*(void (__fastcall **)(_QWORD *, struct IUnknown *))(*v12 + 24LL))(v12, v43);
      (*(void (__fastcall **)(int *, struct IUnknown *))(*(_QWORD *)v10 + 32LL))(v10, v43);
      if ( !v13 )
        goto LABEL_18;
      v23 = *(_QWORD *)&pAudioFormat->wFormatTag;
      goto LABEL_42;
    }
    v24 = (*(__int64 (__fastcall **)(int *, struct IUnknown *, struct IUnknown **, _QWORD))(*(_QWORD *)v10 + 48LL))(
            v10,
            v42,
            &v45,
            0LL);
    Converter = v24;
    if ( v24 < 0 )
      goto LABEL_71;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        ATL::CComPtrBase<IAudioProcessingObject>::Release(&v43);
        if ( v43 != v45 )
          ATL::AtlComPtrAssign(&v43, v45);
        v39 = 1;
      }
    }
    else
    {
      ATL::CComPtrBase<IAudioProcessingObject>::Release(&v43);
      if ( v43 != v42 )
        ATL::AtlComPtrAssign(&v43, v42);
      (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
      (*(void (__fastcall **)(int *, struct IUnknown *))(*(_QWORD *)v10 + 32LL))(v10, v43);
      if ( v13 )
      {
        v23 = v12[4];
LABEL_42:
        if ( *(_DWORD *)(v23 + 4) )
        {
          if ( *(_DWORD *)(v23 + 48) )
          {
            ATL::CComPtrBase<IAudioProcessingObject>::Release(&v43);
            if ( v43 != v48 )
              ATL::AtlComPtrAssign(&v43, v48);
          }
        }
      }
    }
LABEL_18:
    if ( !v39 )
      break;
    Converter = CPipeInstance::FindConverter(
                  this,
                  (struct IAudioMediaType *)v43,
                  (struct IAudioMediaType *)v42,
                  &v65,
                  &v73);
    if ( Converter < 0 )
      goto LABEL_71;
    v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    Converter = CAPOProcessNode::CreateAPOProcessNode(&v73, 0LL, v10[6], v65, 0, &v59, &v54);
    if ( Converter < 0 )
      goto LABEL_71;
    Converter = 0;
    *(_QWORD *)&v59.Data1 = v54;
    v47 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(v3, v52, &v59);
    v54 = 0LL;
    v39 = 0;
LABEL_22:
    ATL::CComPtrBase<IAudioProcessingObject>::Release(&v42);
    ATL::CComPtrBase<IAudioProcessingObject>::Release(&v45);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v42);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v45);
  }
  if ( (*((_BYTE *)this + 136) & 8) == 0
    || (v34 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(IAudioMediaType *))ppIAudioMediaType->lpVtbl->GetAudioFormat)(ppIAudioMediaType),
        v35 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IUnknown *))v43->lpVtbl[1].Release)(v43),
        !(unsigned int)CompareWaveFormat(v35, v34)) )
  {
    v10 = (int *)v12;
    v55 = (int *)v12;
    v13 = v40;
    goto LABEL_21;
  }
  v46 = 0LL;
  Converter = (*(__int64 (__fastcall **)(_QWORD *, struct IAudioMediaType **))(*v12 + 8LL))(v12, &v46);
  if ( Converter >= 0 )
  {
    Converter = CPipeInstance::FindConverter(this, v46, v46, &v63, &v73);
    if ( Converter >= 0 )
    {
      v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      Converter = CAPOProcessNode::CreateAPOProcessNode(&v73, 0LL, v10[6], v63, 0, &v59, &v54);
      if ( Converter >= 0 )
      {
        *(_QWORD *)&v59.Data1 = v54;
        v47 = (_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore(v3, v52, &v59);
        JUMPOUT(0x140042B62LL);
      }
    }
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v46);
LABEL_71:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v42);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v45);
LABEL_26:
  v6 = v49;
  if ( v49 >= 0
    || (int)TrackSystemEffectBehavior(*((_QWORD *)this + 24), v50, v49, 0, (__int64)&v74, SLODWORD(FLOAT_1_0)) >= 0 )
  {
    goto LABEL_27;
  }
  v20 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids);
      goto LABEL_27;
    }
LABEL_28:
    if ( v20 != &WPP_GLOBAL_Control && (*((_DWORD *)v20 + 7) & 0x20000) != 0 && *((_BYTE *)v20 + 25) >= 4u )
    {
      v36 = "SUCCEEDED";
      if ( Converter < 0 )
        v36 = "FAILED";
      WPP_SF_qs(v20[2], 33, v6, (_DWORD)this, (__int64)v36);
      v20 = WPP_GLOBAL_Control;
    }
  }
  if ( Converter < 0 )
  {
    if ( v20 != &WPP_GLOBAL_Control && (*((_DWORD *)v20 + 7) & 0x20000) != 0 && *((_BYTE *)v20 + 25) >= 2u )
      WPP_SF_d(v20[2], 34LL, &WPP_605b3f8256e536826e03e3a93e9cec6e_Traceguids, (unsigned int)Converter);
    AudDGTraceLoggingErrorHelper("CPipeInstance::ResolveFormatConflictsLeftRight", 0x8A9u, Converter);
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v66);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v48);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v43);
  return (unsigned int)Converter;
}
