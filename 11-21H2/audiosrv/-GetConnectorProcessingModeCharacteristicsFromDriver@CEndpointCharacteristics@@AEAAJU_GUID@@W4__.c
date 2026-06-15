/*
 * XREFs of ?GetConnectorProcessingModeCharacteristicsFromDriver@CEndpointCharacteristics@@AEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@@Z @ 0x180147FD4
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JAEAV?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x180147248 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180047568 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@?$vector@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@V?$allocator@V?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCConnectorProcessingModeCharacteristics@@U?$default_delete@VCConnectorProcessingModeCharacteristics@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180143DCC (--$_Emplace_reallocate@V-$unique_ptr@VCConnectorProcessingModeCharacteristics@@U-$default_delete.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x180144B2C (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI8888@Z @ 0x180162ED8 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CEndpointCharacteristics::GetConnectorProcessingModeCharacteristicsFromDriver(
        CEndpointCharacteristics *a1,
        struct _GUID *a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 **a7)
{
  int v9; // r13d
  int v10; // eax
  int v11; // edi
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ebx
  void *v23; // rcx
  char *v24; // rdi
  CConnectorProcessingModeCharacteristics *v25; // rax
  CConnectorProcessingModeCharacteristics *v26; // rsi
  CConnectorProcessingModeCharacteristics *v27; // rbx
  int v28; // r12d
  char *v29; // rcx
  void *v30; // rcx
  CEndpointCharacteristics *v31; // rdi
  struct _GUID *AliasedDeviceConnectorMode; // rax
  void *v33; // rcx
  __int64 *v34; // rdx
  void *v35; // rcx
  void *v36; // rcx
  unsigned int v38; // [rsp+30h] [rbp-D0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v39; // [rsp+70h] [rbp-90h]
  LPVOID v40; // [rsp+78h] [rbp-88h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v42; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v43; // [rsp+90h] [rbp-70h] BYREF
  int v44[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v45; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v46; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v47; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v49; // [rsp+B4h] [rbp-4Ch] BYREF
  unsigned int v50; // [rsp+B8h] [rbp-48h] BYREF
  char *v51; // [rsp+C0h] [rbp-40h]
  struct _GUID v52; // [rsp+D0h] [rbp-30h] BYREF
  CEndpointCharacteristics *v53; // [rsp+E0h] [rbp-20h]
  LPVOID *p_pv; // [rsp+E8h] [rbp-18h]
  struct tWAVEFORMATEX *v55; // [rsp+F0h] [rbp-10h] BYREF
  char v56; // [rsp+F8h] [rbp-8h]
  struct _GUID *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  struct _GUID v59; // [rsp+110h] [rbp+10h] BYREF
  PROPVARIANT v60[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v61; // [rsp+130h] [rbp+30h]
  PROPVARIANT pvar[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v63; // [rsp+148h] [rbp+48h]
  _DWORD v64[6]; // [rsp+150h] [rbp+50h] BYREF
  struct _tagpropertykey v65; // [rsp+168h] [rbp+68h] BYREF
  struct _GUID v66; // [rsp+180h] [rbp+80h] BYREF
  char v67; // [rsp+190h] [rbp+90h]
  GUID v68; // [rsp+198h] [rbp+98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v58 = a4;
  v57 = a2;
  v53 = a1;
  v9 = 0;
  v39 = eKeywordDetectorConnector;
  v64[0] = 590439624;
  v64[1] = 1283267372;
  v64[2] = 1907779772;
  v64[3] = 1730509416;
  v64[4] = 1;
  if ( a3 == 3 )
  {
    v65 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    v39 = eHostProcessConnector;
    *(_QWORD *)&v65.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v65.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v65.pid = 1;
  }
  *(_OWORD *)v60 = 0LL;
  v61 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, PROPVARIANT *))(**((_QWORD **)a1 + 5) + 40LL))(
          *((_QWORD **)a1 + 5),
          v64,
          v60);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEAD,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_64;
  }
  if ( LOWORD(v60[0]) != 31 )
  {
    v11 = -2004287484;
    goto LABEL_64;
  }
  *(_OWORD *)pvar = 0LL;
  v63 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)a1 + 5) + 40LL))(
          *((_QWORD **)a1 + 5),
          &v65,
          pvar);
  v11 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB1,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_63;
  }
  v45 = 0LL;
  v13 = *(_QWORD *)g_DeviceEnumerator;
  v45 = 0LL;
  v14 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 **))(v13 + 40))(g_DeviceEnumerator, v60[1], &v45);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB4,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_62;
  }
  *(_QWORD *)v44 = 0LL;
  v15 = *v45;
  *(_QWORD *)v44 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, int *))(v15 + 24))(
          v45,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          1LL,
          0LL,
          v44);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEB7,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_61;
  }
  v43 = 0LL;
  v17 = **(_QWORD **)v44;
  v43 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v17 + 56))(*(_QWORD *)v44, LODWORD(pvar[1]), &v43);
  v11 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEBA,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_60;
  }
  v42 = 0LL;
  v19 = *v43;
  v42 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 **))(v19 + 104))(
          v43,
          23LL,
          &GUID_915aed0f_c782_41d6_b0dc_1ed22d1ee5cb,
          &v42);
  v11 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEBD,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_59;
  }
  v40 = 0LL;
  v21 = *v42;
  *(_QWORD *)&v66.Data1 = &v40;
  *(_QWORD *)v66.Data4 = 0LL;
  v67 = 1;
  v52 = *a2;
  v22 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, unsigned __int8 *))(v21 + 32))(v42, &v52, v66.Data4);
  if ( v67 )
  {
    v23 = **(void ***)&v66.Data1;
    **(_QWORD **)&v66.Data1 = *(_QWORD *)v66.Data4;
    if ( v23 )
      CoTaskMemFree(v23);
  }
  if ( v22 < 0 )
  {
    v11 = -2147023728;
    if ( v22 != -2147023728 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC0,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v22);
      v11 = v22;
    }
    goto LABEL_57;
  }
  if ( !*((_DWORD *)v40 + 1) )
  {
    v11 = -2147023728;
    goto LABEL_57;
  }
  v24 = (char *)v40 + 8;
  v51 = (char *)v40 + 8;
  v25 = (CConnectorProcessingModeCharacteristics *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v26 = v25;
  *(_QWORD *)&v52.Data1 = v25;
  if ( v25 )
  {
    *(struct _GUID *)v25 = *a2;
    *((_QWORD *)v25 + 2) = 0LL;
    *((_QWORD *)v25 + 3) = 0LL;
    *((_QWORD *)v25 + 4) = 0LL;
    *((_QWORD *)v25 + 5) = 0LL;
    *((_QWORD *)v25 + 6) = 0LL;
    *((_QWORD *)v25 + 7) = 0LL;
  }
  else
  {
    v26 = 0LL;
  }
  v27 = v26;
  *(_QWORD *)&v52.Data1 = v26;
  if ( !v26 )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC8,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_55;
  }
  v28 = 0;
  if ( !*((_DWORD *)v40 + 1) )
  {
LABEL_51:
    if ( v28 != *((_DWORD *)v40 + 1) )
      *((_DWORD *)v53 + 55) = 1;
    v11 = 0;
    goto LABEL_55;
  }
  while ( 1 )
  {
    v29 = &v24[*(unsigned int *)&v24[4 * v9]];
    if ( *(_DWORD *)v29 >= 0x52u )
      break;
LABEL_44:
    if ( (unsigned int)++v9 >= *((_DWORD *)v40 + 1) )
    {
      if ( v28 )
      {
        v34 = a7[1];
        if ( v34 == a7[2] )
        {
          std::vector<std::unique_ptr<CConnectorProcessingModeCharacteristics>>::_Emplace_reallocate<std::unique_ptr<CConnectorProcessingModeCharacteristics>>(
            a7,
            v34,
            (__int64 *)&v52);
          v27 = *(CConnectorProcessingModeCharacteristics **)&v52.Data1;
        }
        else
        {
          v27 = 0LL;
          *v34 = (__int64)v26;
          ++a7[1];
        }
      }
      goto LABEL_51;
    }
  }
  pv = 0LL;
  p_pv = &pv;
  v55 = 0LL;
  v56 = 1;
  v11 = CloneWaveFormat((const struct tWAVEFORMATEX *)(v29 + 64), &v55);
  if ( v56 )
  {
    v30 = *p_pv;
    *p_pv = v55;
    if ( v30 )
      CoTaskMemFree(v30);
  }
  if ( v11 >= 0 )
  {
    v31 = v53;
    if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(v53, v39) )
    {
      v59 = *v57;
      AliasedDeviceConnectorMode = CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
                                     (__int64)v31,
                                     &v66,
                                     v39,
                                     &v59,
                                     1);
    }
    else
    {
      v68 = GUID_00000000_0000_0000_0000_000000000000;
      AliasedDeviceConnectorMode = &v68;
    }
    v59 = *AliasedDeviceConnectorMode;
    LOBYTE(v38) = a5;
    if ( (int)DiscoverPeriodicityCharacteristicsForFormat(
                *((_QWORD *)v31 + 2),
                *((unsigned int *)v31 + 47),
                (unsigned int)v39,
                &v59,
                pv,
                v58,
                v38,
                a6,
                &v50,
                &v49,
                &v48,
                &v47,
                &v46) >= 0 )
    {
      CConnectorProcessingModeCharacteristics::AddConnectorFormat(
        v26,
        (const struct tWAVEFORMATEX *)pv,
        v50,
        v49,
        v48,
        v47,
        v46);
      ++v28;
    }
    v33 = pv;
    pv = 0LL;
    if ( v33 )
      CoTaskMemFree(v33);
    v24 = v51;
    goto LABEL_44;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xED3,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v11);
  v35 = pv;
  pv = 0LL;
  if ( v35 )
    CoTaskMemFree(v35);
LABEL_55:
  if ( v27 )
    CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(v27);
LABEL_57:
  v36 = v40;
  v40 = 0LL;
  if ( v36 )
    CoTaskMemFree(v36);
LABEL_59:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
LABEL_60:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
LABEL_61:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v44);
LABEL_62:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
LABEL_63:
  PropVariantClear(pvar);
LABEL_64:
  PropVariantClear(v60);
  return (unsigned int)v11;
}
