/*
 * XREFs of ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180049314
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z @ 0x180045CF8 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180046864 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x180047BB4 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x1800480D4 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18004848C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004875C (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?ReadProcessingModeList@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@PEA_N@Z @ 0x180048BDC (-ReadProcessingModeList@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NP.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180049CB0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18004A188 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities(CEndpointCharacteristics *this)
{
  int v2; // esi
  int v3; // eax
  int ConnectorSignalProcessingModes; // ebx
  struct _GUID *v5; // rcx
  unsigned __int64 v6; // rsi
  int HostConnectorSignalProcessingModes; // ebx
  unsigned __int64 *v8; // r13
  CAudioSignalProcessingModeArray *v9; // rax
  int v10; // eax
  struct _GUID *v11; // rcx
  unsigned int *v12; // rax
  void *v13; // rcx
  CAudioSignalProcessingModeArray *v14; // rax
  int v15; // eax
  unsigned __int64 i; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  unsigned int v22; // r15d
  int v23; // eax
  void *v24; // rcx
  int v25; // r14d
  bool v26; // r12
  void *v27; // rcx
  void *v28; // rcx
  void *v29; // rcx
  BOOL *v30; // rcx
  BOOL v31; // eax
  int v32; // eax
  struct CAudioSignalProcessingModeArray *v33; // rax
  int ProcessingModeList; // eax
  int v35; // eax
  __int64 *v36; // rax
  GUID *v37; // rdx
  SystemEffectDescriptor *v38; // rax
  int v39; // eax
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  struct _GUID *v45; // rcx
  struct _GUID *v47; // rcx
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  CAudioSignalProcessingModeArray *v50; // rax
  int v51; // eax
  CAudioSignalProcessingModeArray *v52; // rax
  int v53; // eax
  CAudioSignalProcessingModeArray *v54; // rax
  int v55; // eax
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 *v58; // rax
  __int64 v59; // rax
  int v60; // [rsp+28h] [rbp-E0h]
  unsigned int v61; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE pvar_8[24]; // [rsp+48h] [rbp-C0h] BYREF
  bool v63[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct _GUID *pv; // [rsp+70h] [rbp-98h] BYREF
  PROPERTYKEY pv_8; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v66; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v67; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v68; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v69; // [rsp+A4h] [rbp-64h] BYREF
  unsigned int v70; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v71; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v72; // [rsp+B0h] [rbp-58h] BYREF
  void **v73; // [rsp+B8h] [rbp-50h]
  struct _GUID *v74; // [rsp+C0h] [rbp-48h] BYREF
  char v75; // [rsp+C8h] [rbp-40h]
  LPVOID v76; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v77; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID v78; // [rsp+E0h] [rbp-28h] BYREF
  LPVOID v79; // [rsp+E8h] [rbp-20h] BYREF
  LPVOID v80; // [rsp+F0h] [rbp-18h] BYREF
  LPVOID v81; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v82[3]; // [rsp+100h] [rbp-8h] BYREF
  struct _tagpropertykey v83; // [rsp+118h] [rbp+10h] BYREF
  struct _tagpropertykey v84; // [rsp+138h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  if ( *((_QWORD *)this + 8) <= 2uLL )
  {
LABEL_137:
    _o_terminate(this);
    __debugbreak();
    JUMPOUT(0x1800886EELL);
  }
  *(_DWORD *)(*((_QWORD *)this + 9) + 8LL) = 0;
  v2 = -2147023728;
  v61 = 0;
  pv = 0LL;
  memset(pvar_8, 0, sizeof(pvar_8));
  v83.fmtid = (GUID)PKEY_ConnectorSpecific_SupportedProcessingModes;
  v83.pid = 2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, _BYTE *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &v83,
         pvar_8);
  ConnectorSignalProcessingModes = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x576,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v3,
      v60);
    PropVariantClear((PROPVARIANT *)pvar_8);
    goto LABEL_92;
  }
  if ( *(_WORD *)pvar_8 == 65 )
  {
    v61 = *(_DWORD *)&pvar_8[8] >> 4;
    v47 = pv;
    pv = *(struct _GUID **)&pvar_8[16];
    if ( v47 )
      CoTaskMemFree(v47);
    *(_OWORD *)&pvar_8[8] = 0LL;
    v2 = 0;
  }
  PropVariantClear((PROPVARIANT *)pvar_8);
  if ( v2 >= 0 )
  {
    v6 = 0LL;
  }
  else
  {
    *(_QWORD *)pvar_8 = &pv;
    v6 = 0LL;
    *(_QWORD *)&pvar_8[8] = 0LL;
    pvar_8[16] = 1;
    HostConnectorSignalProcessingModes = GetHostConnectorSignalProcessingModes(
                                           *((struct IPropertyStore **)this + 5),
                                           &v61,
                                           (struct _GUID **)&pvar_8[8]);
    if ( pvar_8[16] )
    {
      v5 = **(struct _GUID ***)pvar_8;
      **(_QWORD **)pvar_8 = *(_QWORD *)&pvar_8[8];
      if ( v5 )
        CoTaskMemFree(v5);
    }
    if ( HostConnectorSignalProcessingModes < 0 )
      goto LABEL_101;
  }
  if ( !v61 )
  {
LABEL_101:
    if ( !*((_QWORD *)this + 8) )
      goto LABEL_136;
    **((_DWORD **)this + 9) = 0;
    v8 = (unsigned __int64 *)((char *)this + 152);
    v50 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                               (unsigned __int64 *)this + 19,
                                               0LL);
    v51 = CAudioSignalProcessingModeArray::AddMultiple(v50, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    ConnectorSignalProcessingModes = v51;
    if ( v51 < 0 )
    {
      v48 = (unsigned int)v51;
      v49 = 1424LL;
      goto LABEL_135;
    }
    goto LABEL_12;
  }
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_136;
  **((_DWORD **)this + 9) = 1;
  v8 = (unsigned __int64 *)((char *)this + 152);
  v9 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                            (unsigned __int64 *)this + 19,
                                            0LL);
  v10 = CAudioSignalProcessingModeArray::AddMultiple(v9, v61, pv);
  ConnectorSignalProcessingModes = v10;
  if ( v10 < 0 )
  {
    v48 = (unsigned int)v10;
    v49 = 1419LL;
    goto LABEL_135;
  }
LABEL_12:
  v11 = pv;
  pv = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  v61 = 0;
  v84.fmtid.Data1 = 590439624;
  *(_DWORD *)&v84.fmtid.Data2 = 1283267372;
  *(_DWORD *)v84.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v84.fmtid.Data4[4] = 1730509416;
  v84.pid = 1;
  *(_QWORD *)pvar_8 = &pv;
  *(_QWORD *)&pvar_8[8] = 0LL;
  pvar_8[16] = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 5),
                                     &v84,
                                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                     &v61,
                                     (struct _GUID **)&pvar_8[8]);
  if ( pvar_8[16] )
  {
    v5 = **(struct _GUID ***)pvar_8;
    **(_QWORD **)pvar_8 = *(_QWORD *)&pvar_8[8];
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    if ( !v61 )
      goto LABEL_92;
    v52 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 3uLL);
    v53 = CAudioSignalProcessingModeArray::AddMultiple(v52, v61, pv);
    ConnectorSignalProcessingModes = v53;
    if ( v53 < 0 )
    {
      v48 = (unsigned int)v53;
      v49 = 1437LL;
      goto LABEL_135;
    }
    if ( *((_QWORD *)this + 8) <= 3uLL )
      goto LABEL_136;
    *(_DWORD *)(*((_QWORD *)this + 9) + 12LL) = 1;
  }
  else
  {
    if ( ConnectorSignalProcessingModes != -2147023728 )
    {
LABEL_133:
      v49 = 1446LL;
      goto LABEL_134;
    }
    if ( *((_QWORD *)this + 8) <= 3uLL )
      goto LABEL_136;
    *(_DWORD *)(*((_QWORD *)this + 9) + 12LL) = 0;
  }
  v5 = pv;
  pv = 0LL;
  if ( v5 )
    CoTaskMemFree(v5);
  v61 = 0;
  if ( !*((_QWORD *)this + 8)
    || (v12 = (unsigned int *)*((_QWORD *)this + 9), v5 = (struct _GUID *)*v12, *((_QWORD *)this + 8) <= 1uLL)
    || (v12[1] = (unsigned int)v5, *((_QWORD *)this + 8) <= 1uLL) )
  {
LABEL_136:
    _o_terminate(v5);
    goto LABEL_137;
  }
  if ( !*(_DWORD *)(*((_QWORD *)this + 9) + 4LL) )
    goto LABEL_32;
  *(_QWORD *)pvar_8 = &pv;
  *(_QWORD *)&pvar_8[8] = 0LL;
  pvar_8[16] = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 5),
                                     &v84,
                                     &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
                                     &v61,
                                     (struct _GUID **)&pvar_8[8]);
  if ( pvar_8[16] )
  {
    v13 = **(void ***)pvar_8;
    **(_QWORD **)pvar_8 = *(_QWORD *)&pvar_8[8];
    if ( v13 )
      CoTaskMemFree(v13);
  }
  if ( ConnectorSignalProcessingModes >= 0 )
  {
    if ( !v61 )
      goto LABEL_92;
    v54 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 1uLL);
    v55 = CAudioSignalProcessingModeArray::AddMultiple(v54, v61, pv);
    ConnectorSignalProcessingModes = v55;
    if ( v55 >= 0 )
      goto LABEL_32;
    v48 = (unsigned int)v55;
    v49 = 1460LL;
LABEL_135:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v49,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v48,
      v60);
    goto LABEL_92;
  }
  if ( ConnectorSignalProcessingModes != -2147023728 )
  {
    v49 = 1464LL;
LABEL_134:
    v48 = (unsigned int)ConnectorSignalProcessingModes;
    goto LABEL_135;
  }
LABEL_32:
  if ( !v61 )
  {
    v14 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 1uLL);
    v15 = CAudioSignalProcessingModeArray::AddMultiple(v14, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    ConnectorSignalProcessingModes = v15;
    if ( v15 < 0 )
    {
      v48 = (unsigned int)v15;
      v49 = 1471LL;
      goto LABEL_135;
    }
  }
  for ( i = 0LL; i < *((_QWORD *)this + 230); ++i )
    *(_DWORD *)(*((_QWORD *)this + 231) + 4 * i) = 0;
  v81 = 0LL;
  v66 = 0;
  v80 = 0LL;
  v67 = 0;
  v79 = 0LL;
  v68 = 0;
  *(_QWORD *)pvar_8 = &v81;
  *(_QWORD *)&pvar_8[8] = 0LL;
  pvar_8[16] = 1;
  v83 = PKEY_CompositeFX_StreamEffectClsid;
  pv_8 = PKEY_FX_StreamEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &pv_8, &v83, &v66, (struct _GUID **)&pvar_8[8]);
  if ( pvar_8[16] )
  {
    v17 = **(void ***)pvar_8;
    **(_QWORD **)pvar_8 = *(_QWORD *)&pvar_8[8];
    if ( v17 )
      CoTaskMemFree(v17);
  }
  *(_QWORD *)pvar_8 = &v80;
  *(_QWORD *)&pvar_8[8] = 0LL;
  pvar_8[16] = 1;
  pv_8 = PKEY_CompositeFX_ModeEffectClsid;
  v83 = PKEY_FX_ModeEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v83, &pv_8, &v67, (struct _GUID **)&pvar_8[8]);
  if ( pvar_8[16] )
  {
    v18 = **(void ***)pvar_8;
    **(_QWORD **)pvar_8 = *(_QWORD *)&pvar_8[8];
    if ( v18 )
      CoTaskMemFree(v18);
  }
  *(_QWORD *)pvar_8 = &v79;
  *(_QWORD *)&pvar_8[8] = 0LL;
  pvar_8[16] = 1;
  pv_8 = PKEY_CompositeFX_EndpointEffectClsid;
  v83 = PKEY_FX_EndpointEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v83, &pv_8, &v68, (struct _GUID **)&pvar_8[8]);
  if ( pvar_8[16] )
  {
    v19 = **(void ***)pvar_8;
    **(_QWORD **)pvar_8 = *(_QWORD *)&pvar_8[8];
    if ( v19 )
      CoTaskMemFree(v19);
  }
  v78 = 0LL;
  v69 = 0;
  v77 = 0LL;
  v70 = 0;
  *(_QWORD *)pvar_8 = &v78;
  *(_QWORD *)&pvar_8[8] = 0LL;
  pvar_8[16] = 1;
  pv_8 = PKEY_CompositeFX_Offload_StreamEffectClsid;
  v83 = PKEY_FX_Offload_StreamEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v83, &pv_8, &v69, (struct _GUID **)&pvar_8[8]);
  if ( pvar_8[16] )
  {
    v20 = **(void ***)pvar_8;
    **(_QWORD **)pvar_8 = *(_QWORD *)&pvar_8[8];
    if ( v20 )
      CoTaskMemFree(v20);
  }
  *(_QWORD *)pvar_8 = &v77;
  *(_QWORD *)&pvar_8[8] = 0LL;
  pvar_8[16] = 1;
  pv_8 = PKEY_CompositeFX_Offload_ModeEffectClsid;
  v83 = PKEY_FX_Offload_ModeEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v83, &pv_8, &v70, (struct _GUID **)&pvar_8[8]);
  if ( pvar_8[16] )
  {
    v21 = **(void ***)pvar_8;
    **(_QWORD **)pvar_8 = *(_QWORD *)&pvar_8[8];
    if ( v21 )
      CoTaskMemFree(v21);
  }
  v22 = 0;
  if ( v66 || v67 || v68 || v69 || v70 )
  {
    v22 = 1;
    *((_DWORD *)this + 74) = 1;
  }
  v82[0] = 0LL;
  v82[1] = 0LL;
  v63[0] = 0;
  pv_8.fmtid = (GUID)PKEY_Constrained_APO_ProcessingMode_List_For_Streaming;
  pv_8.pid = 2;
  v23 = CEndpointCharacteristics::ReadProcessingModeList(
          (CEndpointCharacteristics *)v21,
          *((struct IPropertyStore **)this + 5),
          &pv_8,
          1,
          (struct CAudioSignalProcessingModeArray *)v82,
          v63);
  ConnectorSignalProcessingModes = v23;
  if ( v23 >= 0 )
  {
    v25 = 0;
    v26 = v63[0];
    if ( !v63[0] )
    {
      *(_QWORD *)&v83.fmtid.Data1 = 0LL;
      v71 = 0;
      v76 = 0LL;
      v72 = 0;
      v73 = (void **)&v83;
      v74 = 0LL;
      v75 = 1;
      memset(&pv_8, 0, sizeof(pv_8));
      *(PROPERTYKEY *)pvar_8 = PKEY_FX_PreMixEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), (struct _tagpropertykey *)pvar_8, &pv_8, &v71, &v74);
      if ( v75 )
      {
        v27 = *v73;
        *v73 = v74;
        if ( v27 )
          CoTaskMemFree(v27);
      }
      v73 = &v76;
      v74 = 0LL;
      v75 = 1;
      memset(pvar_8, 0, 20);
      pv_8 = PKEY_FX_PostMixEffectClsid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &pv_8, (struct _tagpropertykey *)pvar_8, &v72, &v74);
      if ( v75 )
      {
        v28 = *v73;
        *v73 = v74;
        if ( v28 )
          CoTaskMemFree(v28);
      }
      if ( v71 == 1 || v72 == 1 )
      {
        v25 = 1;
        *((_DWORD *)this + 74) = 1;
      }
      v29 = v76;
      v76 = 0LL;
      if ( v29 )
        CoTaskMemFree(v29);
      v24 = *(void **)&v83.fmtid.Data1;
      *(_QWORD *)&v83.fmtid.Data1 = 0LL;
      if ( v24 )
        CoTaskMemFree(v24);
    }
    if ( *((_QWORD *)this + 8) )
    {
      v30 = (BOOL *)*((_QWORD *)this + 9);
      v31 = *v30 && (v22 || !v25);
      *v30 = v31;
      do
      {
        if ( v6 != 2 )
        {
          v32 = CEndpointCharacteristics::FixupProcessingModeSupport(
                  this,
                  v6,
                  v22,
                  v25,
                  (struct CAudioSignalProcessingModeArray *)((unsigned __int64)v82 & -(__int64)v26));
          ConnectorSignalProcessingModes = v32;
          if ( v32 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x604,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v32,
              v60);
            goto LABEL_82;
          }
        }
        ++v6;
      }
      while ( v6 < 4 );
      if ( *((_QWORD *)this + 10)
        && (v33 = (struct CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                              (unsigned __int64 *)this + 236,
                                                              0LL),
            *(PROPERTYKEY *)pvar_8 = PKEY_APO_SWFallback_ProcessingModes,
            ProcessingModeList = CEndpointCharacteristics::ReadProcessingModeList(
                                   (CEndpointCharacteristics *)PKEY_APO_SWFallback_ProcessingModes.pid,
                                   *((struct IPropertyStore **)this + 10),
                                   (struct _tagpropertykey *)pvar_8,
                                   0,
                                   v33,
                                   0LL),
            ConnectorSignalProcessingModes = ProcessingModeList,
            ProcessingModeList < 0) )
      {
        v56 = (unsigned int)ProcessingModeList;
        v57 = 1546LL;
      }
      else
      {
        v35 = CEndpointCharacteristics::AddOsProcessingModeSupport(this);
        ConnectorSignalProcessingModes = v35;
        if ( v35 < 0 )
        {
          v56 = (unsigned int)v35;
          v57 = 1550LL;
        }
        else
        {
          v36 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 0LL);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                               v36,
                               &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
          {
            v58 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 0LL);
            if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                 v58,
                                 &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
            {
              v59 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v8, 0LL);
              v37 = (GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v59, 0);
            }
            else
            {
              v37 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            }
          }
          v83.fmtid = *v37;
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                               (__int64)this + 168,
                               &v83) )
          {
            v38 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                              (unsigned __int64 *)this + 226,
                                              0LL);
            v83.fmtid = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            v39 = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v38, &v83.fmtid);
            ConnectorSignalProcessingModes = v39;
            if ( v39 >= 0 )
            {
              ConnectorSignalProcessingModes = 0;
              goto LABEL_82;
            }
            v56 = (unsigned int)v39;
            v57 = 1564LL;
          }
          else
          {
            ConnectorSignalProcessingModes = -2147024882;
            v56 = 2147942414LL;
            v57 = 1561LL;
          }
        }
      }
      goto LABEL_131;
    }
    _o_terminate(v24);
    goto LABEL_133;
  }
  v56 = (unsigned int)v23;
  v57 = 1508LL;
LABEL_131:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v57,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v56,
    v60);
LABEL_82:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v82);
  v40 = v77;
  v77 = 0LL;
  if ( v40 )
    CoTaskMemFree(v40);
  v41 = v78;
  v78 = 0LL;
  if ( v41 )
    CoTaskMemFree(v41);
  v42 = v79;
  v79 = 0LL;
  if ( v42 )
    CoTaskMemFree(v42);
  v43 = v80;
  v80 = 0LL;
  if ( v43 )
    CoTaskMemFree(v43);
  v44 = v81;
  v81 = 0LL;
  if ( v44 )
    CoTaskMemFree(v44);
LABEL_92:
  v45 = pv;
  pv = 0LL;
  if ( v45 )
    CoTaskMemFree(v45);
  return (unsigned int)ConnectorSignalProcessingModes;
}
