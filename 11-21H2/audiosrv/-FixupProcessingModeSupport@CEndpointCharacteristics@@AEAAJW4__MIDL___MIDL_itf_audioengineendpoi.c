/*
 * XREFs of ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004875C
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180049314 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004816C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18004848C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x180048708 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?ReadProcessingModeList@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@PEA_N@Z @ 0x180048BDC (-ReadProcessingModeList@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NP.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180049CB0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x18004A114 (-GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18014BF58 (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x18014FE98 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::FixupProcessingModeSupport(
        CEndpointCharacteristics *this,
        int a2,
        __int64 a3,
        int a4,
        struct CAudioSignalProcessingModeArray *a5)
{
  unsigned __int64 v6; // rdi
  struct IPropertyStore *v8; // rdx
  unsigned __int64 v9; // rcx
  GUID v10; // xmm0
  DWORD v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rcx
  GUID v15; // xmm0
  DWORD v16; // eax
  int v17; // eax
  CEndpointCharacteristics *v18; // rcx
  GUID v19; // xmm0
  DWORD v20; // eax
  int v21; // eax
  GUID fmtid; // xmm0
  DWORD pid; // eax
  GUID v24; // xmm1
  DWORD v25; // ecx
  SystemEffectDescriptor *v26; // rax
  int ConnectorFXModeEffectPKEY; // eax
  CEndpointCharacteristics *v28; // rcx
  SystemEffectDescriptor *v29; // rax
  unsigned int v30; // ebx
  _QWORD *v31; // rax
  GUID v33; // xmm0
  DWORD v34; // eax
  GUID v35; // xmm1
  DWORD v36; // ecx
  SystemEffectDescriptor *v37; // rax
  unsigned __int64 *v38; // rbx
  __int64 v39; // rax
  CAudioSignalProcessingModeArray *v40; // rax
  int v41; // eax
  __int64 v42; // r9
  SystemEffectDescriptor *v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  SystemEffectDescriptor *v46; // rax
  __int64 v47; // rdx
  char *v48; // r14
  __int64 v49; // r13
  int v50; // ebx
  _QWORD *v51; // rax
  __int64 v52; // r9
  __int64 v53; // rdx
  SystemEffectDescriptor *v54; // rax
  int v55; // [rsp+20h] [rbp-E0h]
  int v56; // [rsp+20h] [rbp-E0h]
  unsigned int v57; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v58; // [rsp+44h] [rbp-BCh] BYREF
  struct _GUID *v59; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID *v60[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _tagpropertykey v61; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID *v63; // [rsp+88h] [rbp-78h] BYREF
  int v64[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h]
  struct _GUID v66; // [rsp+A0h] [rbp-60h] BYREF
  struct _tagpropertykey v67; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v68[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v70; // [rsp+E8h] [rbp-18h]
  struct _tagpropertykey v71; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v72[9]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v73[24]; // [rsp+160h] [rbp+60h] BYREF
  char v74; // [rsp+178h] [rbp+78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v6 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 8) )
  {
    _o_terminate(this);
    __debugbreak();
    JUMPOUT(0x18008818BLL);
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 4LL * a2) )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 || a2 == 2 )
      return 0LL;
    *(_QWORD *)v64 = 0LL;
    v65 = 0LL;
    v68[0] = 0LL;
    v68[1] = 0LL;
    *(_QWORD *)&v66.Data1 = 0LL;
    *(_QWORD *)v66.Data4 = 0LL;
    v69 = 0LL;
    v70 = 0LL;
    v8 = (struct IPropertyStore *)*((_QWORD *)this + 10);
    if ( !v8 )
    {
LABEL_18:
      v59 = 0LL;
      v58 = 0;
      v63 = 0LL;
      v57 = 0;
      pv = 0LL;
      LODWORD(v60[0]) = 0;
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 == 1 )
        {
          fmtid = PKEY_FX_Offload_StreamEffectClsid.fmtid;
          pid = PKEY_FX_Offload_StreamEffectClsid.pid;
          v24 = PKEY_CompositeFX_Offload_StreamEffectClsid.fmtid;
          v25 = PKEY_CompositeFX_Offload_StreamEffectClsid.pid;
        }
        else
        {
          if ( (_DWORD)v6 != 3 )
          {
            v13 = -2147023728;
            v42 = 2147943568LL;
            v53 = 2537LL;
            goto LABEL_43;
          }
          fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
          pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
          v24 = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.fmtid;
          v25 = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.pid;
        }
      }
      else
      {
        fmtid = PKEY_FX_StreamEffectClsid.fmtid;
        pid = PKEY_FX_StreamEffectClsid.pid;
        v24 = PKEY_CompositeFX_StreamEffectClsid.fmtid;
        v25 = PKEY_CompositeFX_StreamEffectClsid.pid;
      }
      v61.fmtid = fmtid;
      v61.pid = pid;
      v67.fmtid = v24;
      v67.pid = v25;
      v71.fmtid = v24;
      v71.pid = v25;
      *(GUID *)v73 = fmtid;
      *(_DWORD *)&v73[16] = pid;
      GetFxClsids(*((struct IMMDevice **)this + 2), (struct _tagpropertykey *)v73, &v71, &v58, &v59);
      v26 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                        (unsigned __int64 *)this + 224,
                                        v6);
      ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                    v26,
                                    (struct CAudioSignalProcessingModeArray *)v64,
                                    v58,
                                    v59);
      v13 = ConnectorFXModeEffectPKEY;
      if ( ConnectorFXModeEffectPKEY < 0 )
      {
        v53 = 2539LL;
      }
      else
      {
        ConnectorFXModeEffectPKEY = CEndpointCharacteristics::GetConnectorFXModeEffectPKEY(
                                      v28,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v6,
                                      &v61,
                                      &v67);
        v13 = ConnectorFXModeEffectPKEY;
        if ( ConnectorFXModeEffectPKEY < 0 )
        {
          v53 = 2541LL;
        }
        else
        {
          *(struct _tagpropertykey *)v73 = v67;
          v71 = v61;
          GetFxClsids(*((struct IMMDevice **)this + 2), &v71, (struct _tagpropertykey *)v73, &v57, &v63);
          v29 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                            (unsigned __int64 *)this + 226,
                                            v6);
          ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                        v29,
                                        (struct CAudioSignalProcessingModeArray *)v68,
                                        v57,
                                        v63);
          v13 = ConnectorFXModeEffectPKEY;
          if ( ConnectorFXModeEffectPKEY < 0 )
          {
            v53 = 2543LL;
          }
          else
          {
            if ( (_DWORD)v6 )
            {
              if ( (_DWORD)v6 != 3 )
                goto LABEL_26;
              v33 = PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid;
              v34 = PKEY_FX_KeywordDetector_EndpointEffectClsid.pid;
              v35 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.fmtid;
              v36 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.pid;
            }
            else
            {
              v33 = PKEY_FX_EndpointEffectClsid.fmtid;
              v34 = PKEY_FX_EndpointEffectClsid.pid;
              v35 = PKEY_CompositeFX_EndpointEffectClsid.fmtid;
              v36 = PKEY_CompositeFX_EndpointEffectClsid.pid;
            }
            *(GUID *)v73 = v35;
            *(_DWORD *)&v73[16] = v36;
            v71.fmtid = v33;
            v71.pid = v34;
            GetFxClsids(
              *((struct IMMDevice **)this + 2),
              &v71,
              (struct _tagpropertykey *)v73,
              (unsigned int *)v60,
              (struct _GUID **)&pv);
            v37 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                              (unsigned __int64 *)this + 228,
                                              v6);
            ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                          v37,
                                          (struct CAudioSignalProcessingModeArray *)&v66,
                                          (unsigned int)v60[0],
                                          (const struct _GUID *)pv);
            v13 = ConnectorFXModeEffectPKEY;
            if ( ConnectorFXModeEffectPKEY >= 0 )
            {
LABEL_26:
              v30 = 0;
              if ( (int)v65 > 0 )
              {
                do
                {
                  v31 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v64, v30);
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v68, v31) == -1 )
                  {
                    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v64, v30);
                    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v69) )
                    {
                      v13 = -2147024882;
                      v42 = 2147942414LL;
                      v53 = 2566LL;
                      goto LABEL_43;
                    }
                  }
                  ++v30;
                }
                while ( (int)v30 < (int)v65 );
                if ( (int)v70 > 0 )
                {
                  v54 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                                    (unsigned __int64 *)this + 226,
                                                    v6);
                  v72[7] = 0LL;
                  ConnectorFXModeEffectPKEY = SystemEffectDescriptor::CreateOverridingChain(
                                                v54,
                                                (struct CAudioSignalProcessingModeArray *)&v69,
                                                0,
                                                0LL,
                                                2u,
                                                1,
                                                v72);
                  v13 = ConnectorFXModeEffectPKEY;
                  if ( ConnectorFXModeEffectPKEY < 0 )
                  {
                    v53 = 2573LL;
                    goto LABEL_42;
                  }
                }
              }
              CoTaskMemFree(pv);
              pv = 0LL;
              CoTaskMemFree(v63);
              v63 = 0LL;
              CoTaskMemFree(v59);
              v59 = 0LL;
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v69);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v66);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v68);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v64);
              return 0LL;
            }
            v53 = 2549LL;
          }
        }
      }
LABEL_42:
      v42 = (unsigned int)ConnectorFXModeEffectPKEY;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v53,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v42,
        v55);
      CoTaskMemFree(pv);
      pv = 0LL;
      CoTaskMemFree(v63);
      v63 = 0LL;
      CoTaskMemFree(v59);
      v59 = 0LL;
LABEL_44:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v69);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v66);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v68);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v64);
      return v13;
    }
    v9 = (unsigned int)v6;
    if ( (_DWORD)v6 )
    {
      v9 = (unsigned int)(v6 - 1);
      if ( (_DWORD)v6 == 1 )
      {
        v10 = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
        v11 = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
      }
      else
      {
        if ( (_DWORD)v6 != 3 )
        {
          v47 = 2494LL;
          v13 = -2147023728;
          v52 = 2147943568LL;
          goto LABEL_70;
        }
        v10 = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v11 = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
      }
    }
    else
    {
      v10 = PKEY_MFX_ProcessingModes_Supported_For_Streaming.fmtid;
      v11 = PKEY_MFX_ProcessingModes_Supported_For_Streaming.pid;
    }
    v61.fmtid = v10;
    v61.pid = v11;
    v12 = CEndpointCharacteristics::ReadProcessingModeList(
            (CEndpointCharacteristics *)v9,
            v8,
            &v61,
            1,
            (struct CAudioSignalProcessingModeArray *)v68,
            0LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      v52 = (unsigned int)v12;
      v47 = 2495LL;
    }
    else
    {
      v14 = (unsigned int)v6;
      if ( (_DWORD)v6 )
      {
        v14 = (unsigned int)(v6 - 1);
        if ( (_DWORD)v6 == 1 )
        {
          v15 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
          v16 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
        }
        else
        {
          v15 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
          v16 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        }
      }
      else
      {
        v15 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.fmtid;
        v16 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.pid;
      }
      v61.fmtid = v15;
      v61.pid = v16;
      v17 = CEndpointCharacteristics::ReadProcessingModeList(
              (CEndpointCharacteristics *)v14,
              *((struct IPropertyStore **)this + 10),
              &v61,
              0,
              (struct CAudioSignalProcessingModeArray *)v64,
              0LL);
      v13 = v17;
      if ( v17 < 0 )
      {
        v52 = (unsigned int)v17;
        v47 = 2499LL;
      }
      else
      {
        if ( (int)v6 > 1 )
        {
          v19 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
          v20 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        }
        else
        {
          v19 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
          v20 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
        }
        v61.fmtid = v19;
        v61.pid = v20;
        v21 = CEndpointCharacteristics::ReadProcessingModeList(
                v18,
                *((struct IPropertyStore **)this + 10),
                &v61,
                0,
                (struct CAudioSignalProcessingModeArray *)&v66,
                0LL);
        v13 = v21;
        if ( v21 >= 0 )
        {
          if ( a5 )
          {
            *(_QWORD *)v73 = v64;
            *(_QWORD *)&v73[8] = v68;
            *(_QWORD *)&v73[16] = &v66;
            v48 = v73;
            do
            {
              v49 = *(_QWORD *)v48;
              v50 = *(_DWORD *)(*(_QWORD *)v48 + 8LL);
              if ( v50 > 0 )
              {
                while ( --v50 >= 0 )
                {
                  v51 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                    v49,
                                    (unsigned int)v50);
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                       (__int64 *)a5,
                                       v51) == -1 )
                    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v49, (unsigned int)v50);
                }
              }
              v48 += 8;
            }
            while ( v48 != &v74 );
          }
          goto LABEL_18;
        }
        v52 = (unsigned int)v21;
        v47 = 2503LL;
      }
    }
LABEL_70:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v52,
      v55);
    goto LABEL_44;
  }
  if ( a2 == 3 )
    return 0LL;
  v38 = (unsigned __int64 *)((char *)this + 152);
  v39 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, a2);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
  v40 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v38, v6);
  v41 = CAudioSignalProcessingModeArray::AddMultiple(v40, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  v13 = v41;
  if ( v41 >= 0 )
  {
    if ( !a4 || (_DWORD)v6 )
      return 0LL;
    v59 = 0LL;
    v57 = 0;
    v60[0] = 0LL;
    v58 = 0;
    memset(&v61, 0, sizeof(v61));
    v67 = PKEY_FX_PreMixEffectClsid;
    GetFxClsids(*((struct IMMDevice **)this + 2), &v67, &v61, &v57, &v59);
    memset(&v61, 0, sizeof(v61));
    v67 = PKEY_FX_PostMixEffectClsid;
    GetFxClsids(*((struct IMMDevice **)this + 2), &v67, &v61, &v58, v60);
    v43 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 224, v6);
    v66 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v44 = SystemEffectDescriptor::SetDefaultEffectChain(v43, &v66, v57, v59);
    v13 = v44;
    if ( v44 >= 0 )
    {
      v46 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                        (unsigned __int64 *)this + 226,
                                        v6);
      v66 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v44 = SystemEffectDescriptor::SetDefaultEffectChain(v46, &v66, v58, v60[0]);
      v13 = v44;
      if ( v44 >= 0 )
      {
        CoTaskMemFree(v60[0]);
        v60[0] = 0LL;
        CoTaskMemFree(v59);
        return 0LL;
      }
      v45 = 2476LL;
    }
    else
    {
      v45 = 2475LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v45,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v44,
      v56);
    CoTaskMemFree(v60[0]);
    v60[0] = 0LL;
    CoTaskMemFree(v59);
    return v13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x99A,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v41,
    v55);
  return v13;
}
