/*
 * XREFs of ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002D350
 * Callers:
 *     AudioServerGetMixFormat @ 0x180010C40 (AudioServerGetMixFormat.c)
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800E9124 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800111A0 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002E730 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002EC80 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048324 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800483C0 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18005B5FC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005F02C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CreateAudioMediaType @ 0x180061614 (CreateAudioMediaType.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800EAFFC (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801440C0 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180144B04 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180149014 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=26
__int64 __fastcall IsStreamFormatSupportedForMixFormat(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  IAudioMediaType *v7; // r13
  struct _RTL_CRITICAL_SECTION *v8; // r12
  struct IAudioProcessingObject *v9; // rbx
  const struct tWAVEFORMATEX *v10; // r14
  __int64 cbSize; // rdi
  WAVEFORMATEX *v12; // rax
  WAVEFORMATEX *v13; // rsi
  __int64 v14; // rdi
  WAVEFORMATEX *v15; // rax
  WAVEFORMATEX *v16; // r14
  __int64 wBitsPerSample; // rcx
  __int64 *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  struct _RTL_CRITICAL_SECTION *v22; // r13
  struct IAudioProcessingObject **v23; // rdi
  unsigned int v24; // r14d
  int v25; // r12d
  __int64 v26; // r15
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // r14d
  struct IAudioProcessingObject **v31; // r15
  struct _RTL_CRITICAL_SECTION *v32; // rdi
  struct IAudioProcessingObject *v33; // rsi
  __int64 v34; // r14
  unsigned int v35; // r15d
  unsigned int v36; // r15d
  __int64 v37; // rdi
  struct _RTL_CRITICAL_SECTION *v38; // r13
  struct IAudioProcessingObject **v39; // rsi
  unsigned int v40; // r14d
  int v41; // r12d
  __int64 v42; // r15
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  struct IAudioProcessingObject **v46; // r12
  int v47; // r14d
  struct IAudioProcessingObject **v48; // r15
  struct _RTL_CRITICAL_SECTION *v49; // rdi
  __int64 v50; // r14
  struct _RTL_CRITICAL_SECTION *v51; // r13
  struct IAudioProcessingObject **v52; // r15
  __int64 v53; // rdi
  unsigned int v54; // esi
  __int64 v55; // rbx
  __int64 v56; // r13
  __int64 v57; // rax
  __int64 v58; // rax
  struct IAudioProcessingObject **v59; // rsi
  __int64 v60; // rdi
  struct _RTL_CRITICAL_SECTION *v61; // rsi
  struct IAudioProcessingObject **v62; // r14
  __int64 v63; // r15
  unsigned int v64; // r12d
  __int64 v65; // r15
  struct _RTL_CRITICAL_SECTION *v66; // r13
  struct IAudioProcessingObject **v67; // rsi
  __int64 v68; // rdi
  unsigned int v69; // r14d
  int v70; // r12d
  __int64 v71; // rbx
  __int64 v72; // r13
  __int64 v73; // rax
  __int64 v74; // rax
  int v75; // r14d
  struct IAudioProcessingObject **v76; // r12
  __int64 v77; // rsi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  int v79; // r14d
  BOOL v80; // eax
  struct _GUID *v81; // r15
  __int64 v82; // rdi
  __int64 v83; // rcx
  int v84; // edi
  __int64 v85; // r9
  int v86; // r8d
  int v87; // r11d
  __int64 v88; // r10
  unsigned __int64 v89; // rax
  __int64 v90; // rdx
  HRESULT InitializedSystemEffectInterface; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v92; // r12d
  WAVEFORMATEX *v93; // r14
  bool v94; // zf
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v96; // eax
  struct tWAVEFORMATEX **v97; // rdi
  bool v98; // si
  void *v99; // rcx
  const struct tWAVEFORMATEX *v100; // r15
  __int64 v101; // rsi
  struct tWAVEFORMATEX *v102; // rax
  struct tWAVEFORMATEX *v103; // rcx
  __int64 v105; // r9
  __int64 v106; // rdx
  SystemEffectChainDescriptor **v107; // rax
  int v108; // eax
  __int64 v109; // rax
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // rax
  SystemEffectChainDescriptor **v113; // rax
  int v114; // eax
  SystemEffectChainDescriptor **v115; // rax
  int v116; // eax
  SystemEffectChainDescriptor **v117; // rax
  int v118; // eax
  __int64 v119; // rax
  __int64 v120; // r9
  __int64 v121; // rdx
  __int64 v122; // rax
  SystemEffectChainDescriptor **v123; // rax
  int v124; // eax
  struct IAudioProcessingObject **v125; // rdi
  SystemEffectChainDescriptor **v126; // rax
  int v127; // eax
  __int64 **v128; // rax
  __int64 v129; // rax
  __int64 v130; // r8
  __int64 *v131; // rcx
  struct IAudioSystemEffects2 **v132; // [rsp+20h] [rbp-E0h]
  char v133; // [rsp+60h] [rbp-A0h]
  IAudioMediaType *v134; // [rsp+68h] [rbp-98h] BYREF
  std::_Ref_count_base *v135; // [rsp+70h] [rbp-90h]
  HRESULT v136; // [rsp+78h] [rbp-88h]
  struct IAudioProcessingObject *v137; // [rsp+80h] [rbp-80h] BYREF
  WAVEFORMATEX *v138; // [rsp+88h] [rbp-78h]
  IAudioMediaType *ppIAudioMediaType[2]; // [rsp+90h] [rbp-70h] BYREF
  struct IAudioProcessingObject **v140; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v141; // [rsp+A8h] [rbp-58h]
  struct IAudioProcessingObject **v142; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v143; // [rsp+B8h] [rbp-48h]
  struct IAudioProcessingObject **v144; // [rsp+C0h] [rbp-40h] BYREF
  int v145; // [rsp+C8h] [rbp-38h]
  unsigned int v146; // [rsp+CCh] [rbp-34h]
  struct IAudioProcessingObject **v147; // [rsp+D0h] [rbp-30h] BYREF
  int v148; // [rsp+D8h] [rbp-28h]
  unsigned int v149; // [rsp+DCh] [rbp-24h]
  struct _GUID v150; // [rsp+E0h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v151; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v152; // [rsp+F8h] [rbp-8h]
  int v153; // [rsp+FCh] [rbp-4h]
  struct IAudioProcessingObject **v154; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v155; // [rsp+108h] [rbp+8h]
  int v156; // [rsp+10Ch] [rbp+Ch]
  LPVOID pv; // [rsp+110h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v158; // [rsp+118h] [rbp+18h] BYREF
  struct IAudioProcessingObject *v159; // [rsp+120h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v160; // [rsp+128h] [rbp+28h] BYREF
  struct _RTL_CRITICAL_SECTION *v161; // [rsp+130h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v162; // [rsp+138h] [rbp+38h] BYREF
  struct _RTL_CRITICAL_SECTION *v163; // [rsp+140h] [rbp+40h] BYREF
  WAVEFORMATEX *pAudioFormat; // [rsp+148h] [rbp+48h]
  struct _GUID v165; // [rsp+150h] [rbp+50h] BYREF
  PROPVARIANT pvar[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v167; // [rsp+170h] [rbp+70h]
  void **p_Src; // [rsp+178h] [rbp+78h]
  struct tWAVEFORMATEX *v169; // [rsp+180h] [rbp+80h] BYREF
  char v170; // [rsp+188h] [rbp+88h]
  WAVEFORMATEX *v171; // [rsp+190h] [rbp+90h]
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v7 = (IAudioMediaType *)(int)a3;
  v8 = a1;
  LODWORD(ppIAudioMediaType[0]) = 0;
  v9 = 0LL;
  v137 = 0LL;
  v133 = 1;
  pv = 0LL;
  v10 = Src;
  cbSize = Src->cbSize;
  v12 = (WAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
  v13 = v12;
  v138 = v12;
  if ( !v12 )
  {
    InitializedSystemEffectInterface = -2147024882;
    v93 = 0LL;
    goto LABEL_232;
  }
  memcpy_0(v12, v10, cbSize + 18);
  v171 = v13;
  v14 = a4->cbSize;
  v15 = (WAVEFORMATEX *)CoTaskMemAlloc(v14 + 18);
  v16 = v15;
  pAudioFormat = v15;
  if ( !v15 )
    goto LABEL_350;
  memcpy_0(v15, a4, v14 + 18);
  pv = v16;
  wBitsPerSample = v13->wBitsPerSample;
  LOWORD(wBitsPerSample) = wBitsPerSample & 0xFFF8;
  if ( (unsigned __int16)wBitsPerSample > 0x100u )
  {
    InitializedSystemEffectInterface = -2004287480;
    goto LABEL_243;
  }
  LODWORD(v18) = 65534;
  if ( v13->wFormatTag != 0xFFFE )
  {
    if ( v13->wFormatTag != 1 )
      goto LABEL_10;
    v13->wFormatTag = 3;
    goto LABEL_239;
  }
  if ( (v13[1].wFormatTag & 7) != 0 )
  {
    LOBYTE(wBitsPerSample) = 0;
    v133 = 0;
  }
  else
  {
    wBitsPerSample = 1LL;
  }
  v19 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v13[1].nSamplesPerSec + 2);
  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v13[1].nSamplesPerSec + 2) )
    v19 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v13[1].wBitsPerSample;
  if ( !v19 )
  {
    v133 = wBitsPerSample;
    if ( (v13[1].wFormatTag & 7) == 0 )
    {
      *(GUID *)((char *)&v13[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
      v13[1].wFormatTag = 32;
      v133 = wBitsPerSample;
LABEL_239:
      v13->wBitsPerSample = 32;
      wBitsPerSample = (unsigned __int16)(4 * v13->nChannels);
      v13->nBlockAlign = wBitsPerSample;
      v13->nAvgBytesPerSec = wBitsPerSample * v13->nSamplesPerSec;
    }
  }
LABEL_10:
  if ( v16->wFormatTag == 1 )
  {
    v16->wFormatTag = 3;
  }
  else
  {
    if ( v16->wFormatTag != 0xFFFE )
      goto LABEL_15;
    v20 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&v16[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&v16[1].nSamplesPerSec + 2) )
      v20 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&v16[1].wBitsPerSample;
    if ( v20 || (v16[1].wFormatTag & 7) != 0 )
      goto LABEL_15;
    *(GUID *)((char *)&v16[1].nSamplesPerSec + 2) = GUID_00000003_0000_0010_8000_00aa00389b71;
    v16[1].wFormatTag = 32;
  }
  v16->wBitsPerSample = 32;
  wBitsPerSample = (unsigned __int16)(4 * v16->nChannels);
  v16->nBlockAlign = wBitsPerSample;
  v16->nAvgBytesPerSec = wBitsPerSample * v16->nSamplesPerSec;
LABEL_15:
  v134 = v7;
  if ( (unsigned __int64)v7 >= v8[44].SpinCount )
    goto LABEL_349;
  v21 = (__int64)&v8[45].DebugInfo[2 * (_QWORD)v7];
  if ( *(_BYTE *)(v21 + 52) )
  {
    v22 = (struct _RTL_CRITICAL_SECTION *)(v21 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v21 + 56));
    v158 = (struct _RTL_CRITICAL_SECTION *)(v21 + 56);
    LODWORD(v18) = 0;
    v23 = 0LL;
    v140 = 0LL;
    v9 = 0LL;
    v141 = 0LL;
    v24 = 0;
    v25 = 0;
    if ( *(int *)(v21 + 40) > 0 )
    {
      v26 = 0LL;
      while ( 1 )
      {
        if ( v26 < 0 || v25 >= *(_DWORD *)(v21 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, 0);
          __debugbreak();
        }
        v27 = *(_QWORD *)(v21 + 32);
        if ( (_DWORD)v9 == v24 )
        {
          if ( v24 )
          {
            v24 = 2 * (_DWORD)v9;
            if ( ((unsigned int)v9 & 0x40000000) != 0 )
              goto LABEL_250;
          }
          else
          {
            v24 = 1;
          }
          if ( v24 > 0x7FFFFFFuLL
            || (v28 = _o__recalloc(v23, v24, 16LL), (v23 = (struct IAudioProcessingObject **)v28) == 0LL) )
          {
LABEL_250:
            v105 = 2147942414LL;
            v106 = 502LL;
            goto LABEL_252;
          }
          HIDWORD(v141) = v24;
          v140 = (struct IAudioProcessingObject **)v28;
          LODWORD(v18) = 0;
        }
        wBitsPerSample = (__int64)&v23[2 * (int)v9];
        if ( wBitsPerSample )
        {
          *(_QWORD *)wBitsPerSample = 0LL;
          *(_QWORD *)(wBitsPerSample + 8) = 0LL;
          v29 = *(_QWORD *)(v27 + v26 + 8);
          if ( v29 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
            v24 = HIDWORD(v141);
            LODWORD(v9) = v141;
            v23 = v140;
          }
          *(_QWORD *)wBitsPerSample = *(_QWORD *)(v27 + v26);
          *(_QWORD *)(wBitsPerSample + 8) = *(_QWORD *)(v27 + v26 + 8);
        }
        v9 = (struct IAudioProcessingObject *)(unsigned int)((_DWORD)v9 + 1);
        LODWORD(v141) = (_DWORD)v9;
        ++v25;
        v26 += 16LL;
        if ( v25 >= *(_DWORD *)(v21 + 40) )
        {
          v22 = (struct _RTL_CRITICAL_SECTION *)(v21 + 56);
          break;
        }
      }
    }
    v30 = 0;
    if ( (int)v9 <= 0 )
    {
LABEL_39:
      if ( v23 )
      {
        if ( (int)v9 > 0 )
        {
          ++v23;
          v21 = (unsigned int)v9;
          do
          {
            v9 = *v23;
            if ( *v23 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9[1], 0xFFFFFFFF) == 1 )
            {
LABEL_257:
              ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->QueryInterface)(v9);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v9);
            }
            v23 += 2;
            --v21;
          }
          while ( v21 );
          v23 = v140;
        }
        free(v23);
      }
      if ( v22 )
        LeaveCriticalSection(v22);
    }
    else
    {
      v31 = v23;
      while ( 1 )
      {
        if ( v30 < 0 || v30 >= (int)v9 )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v18);
          goto LABEL_257;
        }
        if ( BYTE4((*v31)[2].lpVtbl) )
        {
          v107 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v140,
                                                   (unsigned int)v30);
          v108 = SystemEffectChainDescriptor::Resolve(*v107, (struct SystemEffectDescriptor *)v21);
          if ( v108 < 0 )
            break;
        }
        ++v30;
        v31 += 2;
        if ( v30 >= (int)v9 )
          goto LABEL_39;
      }
      v105 = (unsigned int)v108;
      v106 = 508LL;
LABEL_252:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v106,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v105,
        (int)v132);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v140);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v158);
    }
    v8 = a1;
    v7 = v134;
  }
  if ( (unsigned __int64)v7 >= *(_QWORD *)&v8[45].LockCount )
    goto LABEL_349;
  v9 = (struct IAudioProcessingObject *)((char *)v8[45].OwningThread + 96 * (_QWORD)v7);
  if ( BYTE4(v9[6].lpVtbl) )
  {
    v32 = (struct _RTL_CRITICAL_SECTION *)&v9[7];
    EnterCriticalSection((LPCRITICAL_SECTION)&v9[7]);
    v159 = v9 + 7;
    v33 = 0LL;
    v151 = 0LL;
    v34 = 0LL;
    v152 = 0;
    v153 = 0;
    v35 = 0;
    if ( SLODWORD(v9[5].lpVtbl) > 0 )
    {
      while ( 1 )
      {
        v109 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                 &v9[4],
                 v35);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v151,
                              v109) )
          break;
        if ( (signed int)++v35 >= SLODWORD(v9[5].lpVtbl) )
        {
          v34 = v152;
          v33 = v151;
          goto LABEL_53;
        }
      }
      v110 = 2147942414LL;
      v111 = 502LL;
    }
    else
    {
LABEL_53:
      v36 = 0;
      if ( (int)v34 <= 0 )
      {
LABEL_54:
        if ( v33 )
        {
          if ( (int)v34 > 0 )
          {
            v9 = v33;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v9);
              v9 += 2;
              --v34;
            }
            while ( v34 );
          }
          free(v33);
        }
        if ( v32 )
          LeaveCriticalSection(v32);
        goto LABEL_57;
      }
      while ( 1 )
      {
        v112 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                 &v151,
                 v36);
        wBitsPerSample = *(_QWORD *)v112;
        if ( *(_BYTE *)(*(_QWORD *)v112 + 20LL) )
        {
          v113 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   &v151,
                                                   v36);
          v114 = SystemEffectChainDescriptor::Resolve(*v113, (struct SystemEffectDescriptor *)v9);
          if ( v114 < 0 )
            break;
        }
        if ( (int)++v36 >= (int)v34 )
          goto LABEL_54;
      }
      v110 = (unsigned int)v114;
      v111 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v111,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v110,
      (int)v132);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v151);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v159);
  }
LABEL_57:
  if ( v7 >= v8[45].LockSemaphore )
    goto LABEL_349;
  v37 = v8[45].SpinCount + 96LL * (_QWORD)v7;
  if ( !*(_BYTE *)(v37 + 52) )
    goto LABEL_274;
  v38 = (struct _RTL_CRITICAL_SECTION *)(v37 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v37 + 56));
  v160 = (struct _RTL_CRITICAL_SECTION *)(v37 + 56);
  LODWORD(v18) = 0;
  v39 = 0LL;
  v142 = 0LL;
  v9 = 0LL;
  v143 = 0LL;
  v40 = 0;
  v41 = 0;
  if ( *(int *)(v37 + 40) > 0 )
  {
    v42 = 0LL;
    while ( 1 )
    {
      if ( v42 < 0 || v41 >= *(_DWORD *)(v37 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, 0);
        __debugbreak();
      }
      v43 = *(_QWORD *)(v37 + 32);
      if ( (_DWORD)v9 == v40 )
      {
        if ( v40 )
        {
          v40 = 2 * (_DWORD)v9;
          if ( ((unsigned int)v9 & 0x40000000) != 0 )
            goto LABEL_273;
        }
        else
        {
          v40 = 1;
        }
        if ( v40 > 0x7FFFFFFuLL
          || (v44 = _o__recalloc(v39, v40, 16LL), (v39 = (struct IAudioProcessingObject **)v44) == 0LL) )
        {
LABEL_273:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            (int)v132);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v142);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v160);
          v7 = v134;
LABEL_274:
          v46 = 0LL;
          goto LABEL_91;
        }
        HIDWORD(v143) = v40;
        v142 = (struct IAudioProcessingObject **)v44;
        LODWORD(v18) = 0;
      }
      wBitsPerSample = (__int64)&v39[2 * (int)v9];
      if ( wBitsPerSample )
      {
        *(_QWORD *)wBitsPerSample = 0LL;
        *(_QWORD *)(wBitsPerSample + 8) = 0LL;
        v45 = *(_QWORD *)(v43 + v42 + 8);
        if ( v45 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
          v40 = HIDWORD(v143);
          LODWORD(v9) = v143;
          v39 = v142;
        }
        *(_QWORD *)wBitsPerSample = *(_QWORD *)(v43 + v42);
        *(_QWORD *)(wBitsPerSample + 8) = *(_QWORD *)(v43 + v42 + 8);
      }
      v9 = (struct IAudioProcessingObject *)(unsigned int)((_DWORD)v9 + 1);
      LODWORD(v143) = (_DWORD)v9;
      ++v41;
      v42 += 16LL;
      if ( v41 >= *(_DWORD *)(v37 + 40) )
      {
        v38 = (struct _RTL_CRITICAL_SECTION *)(v37 + 56);
        break;
      }
    }
  }
  v46 = 0LL;
  v47 = 0;
  if ( (int)v9 <= 0 )
  {
LABEL_81:
    if ( v39 )
    {
      if ( (int)v9 > 0 )
      {
        ++v39;
        v37 = (unsigned int)v9;
        do
        {
          v9 = *v39;
          if ( *v39 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9[1], 0xFFFFFFFF) == 1 )
          {
LABEL_280:
            ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->QueryInterface)(v9);
            std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v9);
          }
          v39 += 2;
          --v37;
        }
        while ( v37 );
        v39 = v142;
      }
      free(v39);
    }
    if ( v38 )
    {
      LeaveCriticalSection(v38);
      v7 = v134;
      goto LABEL_91;
    }
  }
  else
  {
    v48 = v39;
    while ( 1 )
    {
      if ( v47 < 0 || v47 >= (int)v9 )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v18);
        goto LABEL_280;
      }
      if ( BYTE4((*v48)[2].lpVtbl) )
      {
        v115 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                 &v142,
                                                 (unsigned int)v47);
        v116 = SystemEffectChainDescriptor::Resolve(*v115, (struct SystemEffectDescriptor *)v37);
        if ( v116 < 0 )
          break;
      }
      ++v47;
      v48 += 2;
      if ( v47 >= (int)v9 )
        goto LABEL_81;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v116,
      (int)v132);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v142);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v160);
  }
  v7 = v134;
LABEL_91:
  v49 = a1;
  if ( v7 >= a1[1].LockSemaphore )
    goto LABEL_349;
  if ( *(_DWORD *)(a1[1].SpinCount + 4LL * (_QWORD)v7) )
  {
    v136 = 0;
    v9 = 0LL;
    v137 = 0LL;
    if ( (unsigned __int64)v7 < a1[44].SpinCount )
    {
      v50 = (__int64)&a1[45].DebugInfo[2 * (_QWORD)v7];
      if ( *(_BYTE *)(v50 + 52) )
      {
        v51 = (struct _RTL_CRITICAL_SECTION *)(v50 + 56);
        EnterCriticalSection((LPCRITICAL_SECTION)(v50 + 56));
        v161 = (struct _RTL_CRITICAL_SECTION *)(v50 + 56);
        v52 = 0LL;
        v144 = 0LL;
        v53 = 0LL;
        v145 = 0;
        v54 = 0;
        v146 = 0;
        if ( *(int *)(v50 + 40) > 0 )
        {
          LODWORD(v18) = 0;
          v55 = 0LL;
          while ( 1 )
          {
            if ( v55 < 0 || (int)v46 >= *(_DWORD *)(v50 + 40) )
            {
              ATL::_AtlRaiseException(0xC000008C, 0);
              __debugbreak();
            }
            v56 = *(_QWORD *)(v50 + 32);
            if ( (_DWORD)v53 == v54 )
            {
              if ( v54 )
              {
                v54 = 2 * v53;
                if ( (v53 & 0x40000000) != 0 )
                  goto LABEL_283;
              }
              else
              {
                v54 = 1;
              }
              if ( v54 > 0x7FFFFFFuLL
                || (v57 = _o__recalloc(v52, v54, 16LL), (v52 = (struct IAudioProcessingObject **)v57) == 0LL) )
              {
LABEL_283:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x1F6,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                  (const char *)0x8007000ELL,
                  (int)v132);
                ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v144);
                wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v161);
                v9 = v137;
                v46 = 0LL;
                goto LABEL_128;
              }
              v146 = v54;
              v144 = (struct IAudioProcessingObject **)v57;
              LODWORD(v18) = 0;
            }
            wBitsPerSample = (__int64)&v52[2 * (int)v53];
            if ( wBitsPerSample )
            {
              *(_QWORD *)wBitsPerSample = 0LL;
              *(_QWORD *)(wBitsPerSample + 8) = 0LL;
              v58 = *(_QWORD *)(v56 + v55 + 8);
              if ( v58 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v58 + 8));
                v54 = v146;
                LODWORD(v53) = v145;
                v52 = v144;
              }
              *(_QWORD *)wBitsPerSample = *(_QWORD *)(v56 + v55);
              *(_QWORD *)(wBitsPerSample + 8) = *(_QWORD *)(v56 + v55 + 8);
            }
            v53 = (unsigned int)(v53 + 1);
            v145 = v53;
            LODWORD(v46) = (_DWORD)v46 + 1;
            v55 += 16LL;
            if ( (int)v46 >= *(_DWORD *)(v50 + 40) )
            {
              v9 = v137;
              v51 = (struct _RTL_CRITICAL_SECTION *)(v50 + 56);
              break;
            }
          }
        }
        v46 = 0LL;
        v59 = 0LL;
        if ( (int)v53 <= 0 )
        {
LABEL_118:
          if ( v52 )
          {
            if ( (int)v53 > 0 )
            {
              v59 = v52 + 1;
              do
              {
                v9 = *v59;
                if ( *v59 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9[1], 0xFFFFFFFF) == 1 )
                {
LABEL_288:
                  ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->QueryInterface)(v9);
                  std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v9);
                }
                v59 += 2;
                --v53;
              }
              while ( v53 );
              v9 = v137;
              v52 = v144;
            }
            free(v52);
          }
          if ( v51 )
            LeaveCriticalSection(v51);
        }
        else
        {
          v46 = v52;
          while ( 1 )
          {
            if ( (int)v59 < 0 || (int)v59 >= (int)v53 )
            {
              ATL::_AtlRaiseException(0xC000008C, (unsigned int)v18);
              goto LABEL_288;
            }
            if ( BYTE4((*v46)[2].lpVtbl) )
            {
              v117 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                       &v144,
                                                       (unsigned int)v59);
              v118 = SystemEffectChainDescriptor::Resolve(*v117, (struct SystemEffectDescriptor *)v50);
              if ( v118 < 0 )
                break;
            }
            v59 = (struct IAudioProcessingObject **)(unsigned int)((_DWORD)v59 + 1);
            v46 += 2;
            if ( (int)v59 >= (int)v53 )
            {
              v46 = 0LL;
              goto LABEL_118;
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FC,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v118,
            (int)v132);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v144);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v161);
          v46 = 0LL;
        }
LABEL_128:
        v49 = a1;
        v7 = v134;
      }
      if ( (unsigned __int64)v7 < *(_QWORD *)&v49[45].LockCount )
      {
        wBitsPerSample = (__int64)a1;
        v60 = (__int64)a1[45].OwningThread + 96 * (_QWORD)v7;
        if ( !*(_BYTE *)(v60 + 52) )
          goto LABEL_136;
        v61 = (struct _RTL_CRITICAL_SECTION *)(v60 + 56);
        EnterCriticalSection((LPCRITICAL_SECTION)(v60 + 56));
        v162 = (struct _RTL_CRITICAL_SECTION *)(v60 + 56);
        v62 = v46;
        v154 = v46;
        v63 = (unsigned int)v46;
        v155 = (unsigned int)v46;
        v156 = (int)v46;
        if ( *(int *)(v60 + 40) > 0 )
        {
          while ( 1 )
          {
            v119 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                     v60 + 32,
                     (unsigned int)v46);
            if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                                  &v154,
                                  v119) )
              break;
            LODWORD(v46) = (_DWORD)v46 + 1;
            if ( (int)v46 >= *(_DWORD *)(v60 + 40) )
            {
              v63 = v155;
              v62 = v154;
              goto LABEL_132;
            }
          }
          v120 = 2147942414LL;
          v121 = 502LL;
        }
        else
        {
LABEL_132:
          v64 = 0;
          if ( (int)v63 <= 0 )
          {
LABEL_133:
            if ( v62 )
            {
              if ( (int)v63 > 0 )
              {
                v125 = v62;
                do
                {
                  std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v125);
                  v125 += 2;
                  --v63;
                }
                while ( v63 );
              }
              free(v62);
            }
            if ( v61 )
              LeaveCriticalSection(v61);
LABEL_136:
            v49 = a1;
            if ( v7 < a1[45].LockSemaphore )
            {
              v65 = a1[45].SpinCount + 96LL * (_QWORD)v7;
              if ( *(_BYTE *)(v65 + 52) )
              {
                v66 = (struct _RTL_CRITICAL_SECTION *)(v65 + 56);
                EnterCriticalSection((LPCRITICAL_SECTION)(v65 + 56));
                v163 = (struct _RTL_CRITICAL_SECTION *)(v65 + 56);
                LODWORD(v18) = 0;
                v67 = 0LL;
                v147 = 0LL;
                v68 = 0LL;
                v148 = 0;
                v69 = 0;
                v149 = 0;
                v70 = 0;
                if ( *(int *)(v65 + 40) > 0 )
                {
                  v71 = 0LL;
                  while ( 1 )
                  {
                    if ( v71 < 0 || v70 >= *(_DWORD *)(v65 + 40) )
                    {
                      ATL::_AtlRaiseException(0xC000008C, 0);
                      __debugbreak();
                    }
                    v72 = *(_QWORD *)(v65 + 32);
                    if ( (_DWORD)v68 == v69 )
                    {
                      if ( v69 )
                      {
                        v69 = 2 * v68;
                        if ( (v68 & 0x40000000) != 0 )
                          goto LABEL_304;
                      }
                      else
                      {
                        v69 = 1;
                      }
                      if ( v69 > 0x7FFFFFFuLL
                        || (v73 = _o__recalloc(v67, v69, 16LL), (v67 = (struct IAudioProcessingObject **)v73) == 0LL) )
                      {
LABEL_304:
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x1F6,
                          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                          (const char *)0x8007000ELL,
                          (int)v132);
                        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v147);
                        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v163);
                        v9 = v137;
                        goto LABEL_170;
                      }
                      v149 = v69;
                      v147 = (struct IAudioProcessingObject **)v73;
                      LODWORD(v18) = 0;
                    }
                    wBitsPerSample = (__int64)&v67[2 * (int)v68];
                    if ( wBitsPerSample )
                    {
                      *(_QWORD *)wBitsPerSample = 0LL;
                      *(_QWORD *)(wBitsPerSample + 8) = 0LL;
                      v74 = *(_QWORD *)(v72 + v71 + 8);
                      if ( v74 )
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v74 + 8));
                        v69 = v149;
                        LODWORD(v68) = v148;
                        v67 = v147;
                      }
                      *(_QWORD *)wBitsPerSample = *(_QWORD *)(v72 + v71);
                      *(_QWORD *)(wBitsPerSample + 8) = *(_QWORD *)(v72 + v71 + 8);
                    }
                    v68 = (unsigned int)(v68 + 1);
                    v148 = v68;
                    ++v70;
                    v71 += 16LL;
                    if ( v70 >= *(_DWORD *)(v65 + 40) )
                    {
                      v9 = v137;
                      v66 = (struct _RTL_CRITICAL_SECTION *)(v65 + 56);
                      break;
                    }
                  }
                }
                v75 = 0;
                if ( (int)v68 <= 0 )
                {
LABEL_160:
                  if ( v67 )
                  {
                    if ( (int)v68 > 0 )
                    {
                      ++v67;
                      do
                      {
                        v9 = *v67;
                        if ( *v67 && _InterlockedExchangeAdd((volatile signed __int32 *)&v9[1], 0xFFFFFFFF) == 1 )
                        {
LABEL_309:
                          ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->QueryInterface)(v9);
                          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v9);
                        }
                        v67 += 2;
                        --v68;
                      }
                      while ( v68 );
                      v9 = v137;
                      v67 = v147;
                    }
                    free(v67);
                  }
                  if ( v66 )
                    LeaveCriticalSection(v66);
                }
                else
                {
                  v76 = v67;
                  while ( 1 )
                  {
                    if ( v75 < 0 || v75 >= (int)v68 )
                    {
                      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v18);
                      goto LABEL_309;
                    }
                    if ( BYTE4((*v76)[2].lpVtbl) )
                    {
                      v126 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                               &v147,
                                                               (unsigned int)v75);
                      v127 = SystemEffectChainDescriptor::Resolve(*v126, (struct SystemEffectDescriptor *)v65);
                      if ( v127 < 0 )
                        break;
                    }
                    ++v75;
                    v76 += 2;
                    if ( v75 >= (int)v68 )
                      goto LABEL_160;
                  }
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x1FC,
                    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
                    (const char *)(unsigned int)v127,
                    (int)v132);
                  ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v147);
                  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v163);
                }
LABEL_170:
                v49 = a1;
                v7 = v134;
              }
              if ( v7 < v49[1].LockSemaphore )
              {
                if ( !*(_DWORD *)(v49[1].SpinCount + 4LL * (_QWORD)v7) )
                {
                  v81 = a2;
                  goto LABEL_334;
                }
                if ( (unsigned __int64)v7 < v49[44].SpinCount )
                {
                  v77 = (__int64)&v49[45].DebugInfo[2 * (_QWORD)v7];
                  DebugInfo = v49[2].DebugInfo;
                  if ( DebugInfo )
                  {
                    *(_OWORD *)pvar = 0LL;
                    v167 = 0LL;
                    if ( (*(int (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)&DebugInfo->Type + 40LL))(
                           DebugInfo,
                           &PKEY_AudioEndpoint_Disable_SysFx,
                           pvar) >= 0
                      && LOWORD(pvar[0]) == 19
                      && LODWORD(pvar[1]) )
                    {
                      PropVariantClear(pvar);
                      if ( a3 != eKeywordDetectorConnector )
                      {
                        v81 = a2;
                        v150 = *a2;
                        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                             (__int64 *)v77,
                                             &v150) != -1 )
                          goto LABEL_200;
                        goto LABEL_334;
                      }
                    }
                    else
                    {
                      PropVariantClear(pvar);
                    }
                  }
                  v79 = 0;
                  v80 = *(_BYTE *)(v77 + 52) == 0;
                  v81 = a2;
                  v165 = *a2;
                  *(struct _GUID *)ppIAudioMediaType = v165;
                  if ( v80 || *(int *)(v77 + 40) <= 0 )
                  {
LABEL_186:
                    v83 = 0LL;
                    v84 = *(_DWORD *)(v77 + 40);
                    if ( v84 > 0 )
                    {
                      v85 = 0LL;
                      while ( 1 )
                      {
                        if ( v85 < 0 || (int)v83 >= v84 )
                        {
                          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v18);
                          __debugbreak();
                        }
                        v18 = *(__int64 **)(v85 + *(_QWORD *)(v77 + 32));
                        v86 = 0;
                        v87 = *((_DWORD *)v18 + 2);
                        if ( v87 > 0 )
                        {
                          v88 = *v18;
                          while ( 1 )
                          {
                            LODWORD(v18) = 2 * v86;
                            v89 = *(_QWORD *)(v88 + 16LL * v86) - (unsigned __int64)ppIAudioMediaType[0];
                            if ( !v89 )
                              v89 = *(_QWORD *)(v88 + 16LL * v86 + 8) - (unsigned __int64)ppIAudioMediaType[1];
                            if ( !v89 )
                              break;
                            if ( ++v86 >= v87 )
                              goto LABEL_327;
                          }
                          if ( v86 != -1 )
                            break;
                        }
LABEL_327:
                        v83 = (unsigned int)(v83 + 1);
                        v85 += 16LL;
                        if ( (int)v83 >= v84 )
                          goto LABEL_319;
                      }
                      if ( (_DWORD)v83 != -1 )
                      {
                        if ( (int)v83 < 0 || (int)v83 >= v84 )
                        {
                          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v18);
                          __debugbreak();
                        }
                        v49 = a1;
                        if ( !*(_QWORD *)(*(_QWORD *)(v77 + 32) + 16LL * (int)v83) )
                          goto LABEL_334;
                        goto LABEL_200;
                      }
                    }
                  }
                  else
                  {
                    v82 = 0LL;
                    while ( 1 )
                    {
                      if ( v79 < 0 || v79 >= *(_DWORD *)(v77 + 40) )
                      {
                        ATL::_AtlRaiseException(0xC000008C, (unsigned int)v18);
                        __debugbreak();
                      }
                      if ( *(_BYTE *)(*(_QWORD *)(v82 + *(_QWORD *)(v77 + 32)) + 20LL) )
                      {
                        v128 = (__int64 **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                             v77 + 32,
                                             (unsigned int)v79);
                        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                             *v128,
                                             ppIAudioMediaType) != -1 )
                          break;
                      }
                      ++v79;
                      v82 += 16LL;
                      if ( v79 >= *(_DWORD *)(v77 + 40) )
                        goto LABEL_185;
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)(v77 + 56));
                    *(_QWORD *)&v150.Data1 = v77 + 56;
                    v129 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                             v77 + 32,
                             (unsigned int)v79);
                    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(&v134, v129, v130);
                    if ( (int)SystemEffectChainDescriptor::Resolve(
                                (SystemEffectChainDescriptor *)v134,
                                (struct SystemEffectDescriptor *)v77) >= 0 )
                    {
                      if ( v135 )
                        std::_Ref_count_base::_Decref(v135);
                      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v150);
LABEL_185:
                      v81 = a2;
                      goto LABEL_186;
                    }
                    if ( v135 )
                      std::_Ref_count_base::_Decref(v135);
                    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>((struct _RTL_CRITICAL_SECTION **)&v150);
                    v81 = a2;
                  }
LABEL_319:
                  v131 = *(__int64 **)(v77 + 16);
                  if ( !v131 )
                  {
LABEL_332:
                    v49 = a1;
                    goto LABEL_334;
                  }
                  v49 = a1;
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v131, &v165) != -1 )
                  {
LABEL_200:
                    if ( (unsigned __int64)v7 < v49[44].SpinCount )
                    {
                      v90 = (__int64)&v49[45].DebugInfo[2 * (_QWORD)v7];
                      v165 = *v81;
                      InitializedSystemEffectInterface = CEndpointCharacteristics::GetInitializedSystemEffectInterface(
                                                           v49,
                                                           v90,
                                                           1LL);
                      v9 = v137;
LABEL_202:
                      v92 = a3;
                      goto LABEL_203;
                    }
                    _o_terminate(v83);
                    __debugbreak();
                    goto LABEL_332;
                  }
LABEL_334:
                  InitializedSystemEffectInterface = v136;
                  goto LABEL_202;
                }
              }
            }
            goto LABEL_349;
          }
          while ( 1 )
          {
            v122 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                     &v154,
                     v64);
            wBitsPerSample = *(_QWORD *)v122;
            if ( *(_BYTE *)(*(_QWORD *)v122 + 20LL) )
            {
              v123 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                       &v154,
                                                       v64);
              v124 = SystemEffectChainDescriptor::Resolve(*v123, (struct SystemEffectDescriptor *)v60);
              if ( v124 < 0 )
                break;
            }
            if ( (int)++v64 >= (int)v63 )
              goto LABEL_133;
          }
          v120 = (unsigned int)v124;
          v121 = 508LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v121,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)v120,
          (int)v132);
        ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v154);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v162);
        goto LABEL_136;
      }
    }
LABEL_349:
    v15 = (WAVEFORMATEX *)_o_terminate(wBitsPerSample);
    __debugbreak();
LABEL_350:
    pv = v15;
    InitializedSystemEffectInterface = -2147024882;
    goto LABEL_243;
  }
  v92 = a3;
  InitializedSystemEffectInterface = CEndpointCharacteristics::GetLfx(
                                       (CEndpointCharacteristics *)a1,
                                       a3,
                                       0LL,
                                       &v137,
                                       v132);
  v9 = v137;
  v81 = a2;
LABEL_203:
  if ( InitializedSystemEffectInterface < 0 )
    goto LABEL_243;
  if ( v9 )
  {
    ppIAudioMediaType[0] = 0LL;
    v134 = 0LL;
    *(_QWORD *)&v150.Data1 = 0LL;
    InitializedSystemEffectInterface = CreateAudioMediaType(pAudioFormat, pAudioFormat->cbSize + 18, ppIAudioMediaType);
    if ( InitializedSystemEffectInterface >= 0 )
    {
      v93 = v138;
      InitializedSystemEffectInterface = CreateAudioMediaType(v138, v138->cbSize + 18, &v134);
      if ( InitializedSystemEffectInterface < 0
        || ((v94 = ((unsigned int (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v49->DebugInfo[1].CriticalSection)(v49) == 0,
             lpVtbl = v9->lpVtbl,
             !v94)
          ? (v96 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, struct _GUID *))lpVtbl->IsOutputFormatSupported)(
                     v9,
                     ppIAudioMediaType[0],
                     v134,
                     &v150))
          : (v96 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, struct _GUID *))lpVtbl->IsInputFormatSupported)(
                     v9,
                     ppIAudioMediaType[0],
                     v134,
                     &v150)),
            InitializedSystemEffectInterface = v96,
            v96 < 0) )
      {
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v150);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v134);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
        goto LABEL_232;
      }
      if ( v96 == 1 || (unsigned int)ValidateWaveFormatEx(Src) )
        InitializedSystemEffectInterface = 1;
      if ( *(_QWORD *)&v150.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v150.Data1 + 16LL))(*(_QWORD *)&v150.Data1);
      if ( v134 )
        ((void (__fastcall *)(IAudioMediaType *))v134->lpVtbl->Release)(v134);
      if ( ppIAudioMediaType[0] )
        ((void (__fastcall *)(IAudioMediaType *))ppIAudioMediaType[0]->lpVtbl->Release)(ppIAudioMediaType[0]);
      goto LABEL_218;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v150);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v134);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)ppIAudioMediaType);
LABEL_243:
    v93 = v138;
    goto LABEL_232;
  }
  v93 = v138;
  if ( (unsigned int)ValidateUncompressedWaveFormatEx(v138) )
  {
    InitializedSystemEffectInterface = -2004287480;
    goto LABEL_232;
  }
  if ( v93->nSamplesPerSec == pAudioFormat->nSamplesPerSec
    && v93->nChannels == pAudioFormat->nChannels
    && v133
    && !(unsigned int)ValidateWaveFormatEx(Src) )
  {
    InitializedSystemEffectInterface = 0;
    goto LABEL_232;
  }
  InitializedSystemEffectInterface = 1;
LABEL_218:
  v97 = a6;
  if ( a6 && InitializedSystemEffectInterface )
  {
    Src = 0LL;
    p_Src = (void **)&Src;
    v169 = 0LL;
    v170 = 1;
    LODWORD(ppIAudioMediaType[0]) = 1;
    v165 = *v81;
    v98 = (int)CEndpointCharacteristics::TryGetOverridingMixFormat(a1, v92, &v165, &v169) >= 0 && Src;
    if ( v170 )
    {
      v99 = *p_Src;
      *p_Src = v169;
      if ( v99 )
        CoTaskMemFree(v99);
    }
    if ( v98 )
      v100 = Src;
    else
      v100 = a4;
    v101 = v100->cbSize;
    v102 = (struct tWAVEFORMATEX *)operator new[](v101 + 18, (const struct std::nothrow_t *)&std::nothrow);
    *v97 = v102;
    if ( v102 )
    {
      memcpy_0(v102, v100, v101 + 18);
      InitializedSystemEffectInterface = 1;
    }
    else
    {
      InitializedSystemEffectInterface = -2147024882;
    }
    v103 = Src;
    Src = 0LL;
    if ( v103 )
      CoTaskMemFree(v103);
  }
LABEL_232:
  CoTaskMemFree(pv);
  CoTaskMemFree(v93);
  if ( v9 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->Release)(v9);
  return (unsigned int)InitializedSystemEffectInterface;
}
