/*
 * XREFs of ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x1801140B4
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114898 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180115174 (-DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescrip.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000E360 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UIMMDevice@@@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMMDevice@@@Z @ 0x18004756C (--$copy_to@UIMMDevice@@@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIM.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180080F10 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180083500 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=21
__int64 __fastcall ConnectorSupportsFormat(
        struct EndpointCharacteristicsDescriptor *a1,
        unsigned int a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
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
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rax
  void *v31; // rcx
  unsigned __int64 v32; // r9
  __int64 v33; // rdx
  int v34; // eax
  void *v35; // rcx
  void *v36; // rcx
  __int64 *v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v41; // [rsp+70h] [rbp-90h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  PROPVARIANT pvar[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-60h]
  PROPVARIANT v47[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-48h]
  int v49; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v50[3]; // [rsp+C4h] [rbp-3Ch] BYREF
  __int128 v51; // [rsp+D0h] [rbp-30h] BYREF
  __int64 p_pv; // [rsp+E0h] [rbp-20h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *ppv; // [rsp+E8h] [rbp-18h] BYREF
  int v54; // [rsp+F0h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+28h]

  if ( ((a2 - 1) & 0xFFFFFFFD) == 0 )
  {
    v7 = *(_QWORD *)a1;
    *(_QWORD *)&v51 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::copy_to<IMMDevice>((__int64 *)(v7 + 40), &v51);
    pv = 0LL;
    p_pv = (__int64)&pv;
    ppv = 0LL;
    LOBYTE(v54) = 1;
    Instance = CreateKSFormatFromWFXFormat(a3, &ppv);
    if ( (_BYTE)v54 )
    {
      v9 = *(void **)p_pv;
      *(_QWORD *)p_pv = ppv;
      if ( v9 )
        CoTaskMemFree(v9);
    }
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_61:
      wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
      goto LABEL_66;
    }
    v37 = 0LL;
    v10 = *(_QWORD *)v51;
    v37 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v10 + 32))(v51, 0LL, &v37);
    Instance = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v11);
LABEL_60:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
      goto LABEL_61;
    }
    *(_OWORD *)v47 = 0LL;
    v48 = 0LL;
    v12 = *v37;
    p_pv = 0x4C7D1B2C233164C8LL;
    ppv = (struct KSDATAFORMAT_WAVEFORMATEX *)0x67257A6871B668BCLL;
    v54 = 1;
    v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, PROPVARIANT *))(v12 + 40))(v37, &p_pv, v47);
    Instance = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v13);
LABEL_59:
      PropVariantClear(v47);
      goto LABEL_60;
    }
    *(_OWORD *)pvar = 0LL;
    v46 = 0LL;
    v14 = *v37;
    if ( a2 == 3 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, const struct _tagpropertykey *, PROPVARIANT *))(v14 + 40))(
              v37,
              &PKEY_Endpoint_KeywordDetector_ConnectorId,
              pvar);
      Instance = v15;
      if ( v15 < 0 )
      {
        v16 = 449LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)v15);
LABEL_58:
        PropVariantClear(pvar);
        goto LABEL_59;
      }
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *, const struct _tagpropertykey *, PROPVARIANT *))(v14 + 40))(
              v37,
              &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
              pvar);
      Instance = v15;
      if ( v15 < 0 )
      {
        v16 = 453LL;
        goto LABEL_16;
      }
    }
    v39 = 0LL;
    p_pv = (__int64)&v39;
    ppv = 0LL;
    LOBYTE(v54) = 1;
    Instance = CoCreateInstance(
                 &CLSID_MMDeviceEnumerator,
                 0LL,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&ppv);
    if ( (_BYTE)v54 )
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
        (void *)0x1C9,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_57:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
      goto LABEL_58;
    }
    v38 = 0LL;
    v18 = *v39;
    v38 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, PROPVARIANT, __int64 **))(v18 + 40))(v39, v47[1], &v38);
    Instance = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v19);
LABEL_56:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
      goto LABEL_57;
    }
    v41 = 0LL;
    v20 = *v38;
    p_pv = (__int64)&v41;
    ppv = 0LL;
    LOBYTE(v54) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v20 + 24))(
                 v38,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL);
    if ( (_BYTE)v54 )
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
        (void *)0x1CF,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)Instance);
LABEL_55:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
      goto LABEL_56;
    }
    v40 = 0LL;
    v22 = *v41;
    v40 = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v22 + 56))(v41, LODWORD(pvar[1]), &v40);
    Instance = v23;
    if ( v23 < 0 )
    {
      v24 = (unsigned int)v23;
      v25 = 466LL;
LABEL_33:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v25,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v24);
LABEL_54:
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
      goto LABEL_55;
    }
    v26 = v40;
    if ( !v40 )
    {
      Instance = -2147023728;
      v24 = 2147943568LL;
      v25 = 467LL;
      goto LABEL_33;
    }
    if ( a2 == 1 )
    {
      v43 = 0LL;
      v27 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))*v40)(
              v40,
              &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
              &v43);
      Instance = v27;
      if ( v27 < 0 )
      {
        v28 = 472LL;
LABEL_39:
        v29 = (unsigned int)v27;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v28,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)v29);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v43);
        goto LABEL_54;
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v43 + 24LL))(v43, v50);
      Instance = v27;
      if ( v27 < 0 )
      {
        v28 = 476LL;
        goto LABEL_39;
      }
      if ( v50[0] != 3 )
      {
        Instance = -2147418113;
        v29 = 2147549183LL;
        v28 = 477LL;
        goto LABEL_40;
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v43);
      v26 = v40;
    }
    v44 = 0LL;
    v30 = *v26;
    p_pv = (__int64)&v44;
    ppv = 0LL;
    LOBYTE(v54) = 1;
    Instance = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, struct KSDATAFORMAT_WAVEFORMATEX **))(v30 + 104))(
                 v26,
                 1LL,
                 &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                 &ppv);
    if ( (_BYTE)v54 )
    {
      v31 = *(void **)p_pv;
      *(_QWORD *)p_pv = ppv;
      if ( v31 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 16LL))(v31);
    }
    if ( Instance >= 0 )
    {
      v49 = 0;
      v34 = (*(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, int *))(*(_QWORD *)v44 + 24LL))(
              v44,
              pv,
              *(unsigned int *)pv,
              &v49);
      Instance = v34;
      if ( v34 >= 0 )
      {
        if ( v49 )
        {
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v44);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
          PropVariantClear(pvar);
          PropVariantClear(v47);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
          v36 = pv;
          pv = 0LL;
          if ( v36 )
            CoTaskMemFree(v36);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v51);
          return 0LL;
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v44);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v40);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v41);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v38);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v39);
        PropVariantClear(pvar);
        PropVariantClear(v47);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v37);
        v35 = pv;
        pv = 0LL;
        if ( v35 )
          CoTaskMemFree(v35);
        Instance = -2004287480;
LABEL_66:
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v51);
        return (unsigned int)Instance;
      }
      v32 = (unsigned int)v34;
      v33 = 484LL;
    }
    else
    {
      v32 = (unsigned int)Instance;
      v33 = 481LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v32);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v44);
    goto LABEL_54;
  }
  v51 = (__int128)*a4;
  result = EffectPack::GetSharedModeEnginePeriodicity(*((_QWORD *)a1 + 1), a2, (__int64)a3, &v51, 0, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
