/*
 * XREFs of ?ConnectorSupportsFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1800E80E4
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800E88CC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x1800E8F38 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x1800021E0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180025EDC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall ConnectorSupportsFormat(
        struct CEndpointCharacteristics *a1,
        __int64 a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  int v5; // r14d
  __int64 result; // rax
  __int64 *v7; // rbx
  HRESULT Instance; // edi
  void *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 *v26; // rcx
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rax
  void *v32; // rcx
  unsigned __int64 v33; // r9
  __int64 v34; // rdx
  int v35; // eax
  void *v36; // rcx
  void *v37; // rcx
  __int64 *v38; // [rsp+50h] [rbp-79h] BYREF
  __int64 *v39; // [rsp+58h] [rbp-71h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-69h] BYREF
  int v41; // [rsp+68h] [rbp-61h] BYREF
  __int64 *v42; // [rsp+70h] [rbp-59h] BYREF
  __int64 v43; // [rsp+78h] [rbp-51h] BYREF
  __int64 v44; // [rsp+80h] [rbp-49h] BYREF
  __int64 *v45; // [rsp+88h] [rbp-41h] BYREF
  __int64 *v46; // [rsp+90h] [rbp-39h] BYREF
  int v47; // [rsp+98h] [rbp-31h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-29h] BYREF
  PROPVARIANT pvar[2]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-9h]
  PROPVARIANT v51[2]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v52; // [rsp+D8h] [rbp+Fh]
  __int64 p_pv; // [rsp+E0h] [rbp+17h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *ppv; // [rsp+E8h] [rbp+1Fh] BYREF
  int v55; // [rsp+F0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v5 = a2;
  if ( (((_DWORD)a2 - 1) & 0xFFFFFFFD) != 0 )
  {
    v48 = (__int128)*a4;
    result = CEndpointCharacteristics::GetSharedModeEnginePeriodicity((__int64)a1, a2, a3, &v48, 0, 0LL, 0LL, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    return 0LL;
  }
  v7 = (__int64 *)*((_QWORD *)a1 + 2);
  *(_QWORD *)&v48 = v7;
  (*(void (__fastcall **)(__int64 *, __int64, struct tWAVEFORMATEX *, struct _GUID *))(*v7 + 8))(v7, a2, a3, a4);
  pv = 0LL;
  p_pv = (__int64)&pv;
  ppv = 0LL;
  LOBYTE(v55) = 1;
  Instance = CreateKSFormatFromWFXFormat(a3, &ppv);
  if ( (_BYTE)v55 )
  {
    v9 = *(void **)p_pv;
    *(_QWORD *)p_pv = ppv;
    if ( v9 )
      CoTaskMemFree(v9);
  }
  if ( Instance >= 0 )
  {
    v38 = 0LL;
    v10 = *v7;
    v38 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v10 + 32))(v7, 0LL, &v38);
    Instance = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v11);
LABEL_62:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
      goto LABEL_63;
    }
    *(_OWORD *)v51 = 0LL;
    v52 = 0LL;
    v12 = *v38;
    p_pv = 0x4C7D1B2C233164C8LL;
    ppv = (struct KSDATAFORMAT_WAVEFORMATEX *)0x67257A6871B668BCLL;
    v55 = 1;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, PROPVARIANT *))(v12 + 40))(v38, &p_pv, v51);
    Instance = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BA,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v13);
LABEL_61:
      PropVariantClear(v51);
      goto LABEL_62;
    }
    *(_OWORD *)pvar = 0LL;
    v50 = 0LL;
    v14 = *v38;
    if ( v5 == 3 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, const struct _tagpropertykey *, PROPVARIANT *))(v14 + 40))(
              v38,
              &PKEY_Endpoint_KeywordDetector_ConnectorId,
              pvar);
      Instance = v15;
      if ( v15 < 0 )
      {
        v16 = 447LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v15);
LABEL_60:
        PropVariantClear(pvar);
        goto LABEL_61;
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, const struct _tagpropertykey *, PROPVARIANT *))(v14 + 40))(
              v38,
              &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
              pvar);
      Instance = v15;
      if ( v15 < 0 )
      {
        v16 = 451LL;
        goto LABEL_18;
      }
    }
    v46 = 0LL;
    p_pv = (__int64)&v46;
    ppv = 0LL;
    LOBYTE(v55) = 1;
    Instance = CoCreateInstance(
                 &CLSID_MMDeviceEnumerator,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&ppv);
    if ( (_BYTE)v55 )
    {
      v17 = *(void **)p_pv;
      *(_QWORD *)p_pv = ppv;
      if ( v17 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C7,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_59:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
      goto LABEL_60;
    }
    v42 = 0LL;
    v18 = *v46;
    v42 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, PROPVARIANT, __int64 **))(v18 + 40))(v46, v51[1], &v42);
    Instance = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CA,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v19);
LABEL_58:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      goto LABEL_59;
    }
    v45 = 0LL;
    v20 = *v42;
    p_pv = (__int64)&v45;
    ppv = 0LL;
    LOBYTE(v55) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64, _QWORD, struct KSDATAFORMAT_WAVEFORMATEX **))(v20 + 24))(
                 v42,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL,
                 0LL,
                 &ppv);
    if ( (_BYTE)v55 )
    {
      v21 = *(void **)p_pv;
      *(_QWORD *)p_pv = ppv;
      if ( v21 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v21 + 16LL))(v21);
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CD,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_57:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      goto LABEL_58;
    }
    v39 = 0LL;
    v22 = *v45;
    v39 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v22 + 56))(v45, LODWORD(pvar[1]), &v39);
    Instance = v23;
    if ( v23 < 0 )
    {
      v24 = (unsigned int)v23;
      v25 = 464LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v24);
LABEL_56:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      goto LABEL_57;
    }
    v26 = v39;
    if ( !v39 )
    {
      Instance = -2147023728;
      v24 = 2147943568LL;
      v25 = 465LL;
      goto LABEL_35;
    }
    if ( v5 == 1 )
    {
      v43 = 0LL;
      v27 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v39)(
              v39,
              &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
              &v43);
      Instance = v27;
      if ( v27 < 0 )
      {
        v28 = (unsigned int)v27;
        v29 = 470LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v29,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v28);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
        goto LABEL_56;
      }
      v30 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 24LL))(v43, &v47);
      Instance = v30;
      if ( v30 < 0 )
      {
        v28 = (unsigned int)v30;
        v29 = 474LL;
        goto LABEL_43;
      }
      if ( v47 != 3 )
      {
        Instance = -2147418113;
        v28 = 2147549183LL;
        v29 = 475LL;
        goto LABEL_43;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
      v26 = v39;
    }
    v44 = 0LL;
    v31 = *v26;
    p_pv = (__int64)&v44;
    ppv = 0LL;
    LOBYTE(v55) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, struct KSDATAFORMAT_WAVEFORMATEX **))(v31 + 104))(
                 v26,
                 1LL,
                 &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                 &ppv);
    if ( (_BYTE)v55 )
    {
      v32 = *(void **)p_pv;
      *(_QWORD *)p_pv = ppv;
      if ( v32 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v32 + 16LL))(v32);
    }
    if ( Instance >= 0 )
    {
      v41 = 0;
      v35 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, int *))(*(_QWORD *)v44 + 24LL))(
              v44,
              pv,
              *(unsigned int *)pv,
              &v41);
      Instance = v35;
      if ( v35 >= 0 )
      {
        if ( v41 )
        {
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v46);
          PropVariantClear(pvar);
          PropVariantClear(v51);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
          v37 = pv;
          pv = 0LL;
          if ( v37 )
            CoTaskMemFree(v37);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v48);
          return 0LL;
        }
        Instance = -2004287480;
        goto LABEL_55;
      }
      v33 = (unsigned int)v35;
      v34 = 482LL;
    }
    else
    {
      v33 = (unsigned int)Instance;
      v34 = 479LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v33);
LABEL_55:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v44);
    goto LABEL_56;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)Instance);
LABEL_63:
  v36 = pv;
  pv = 0LL;
  if ( v36 )
    CoTaskMemFree(v36);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v48);
  return (unsigned int)Instance;
}
