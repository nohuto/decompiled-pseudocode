/*
 * XREFs of ?IsFormatSupportedByHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014A8D4
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019650 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800E9124 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180025EDC (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CEndpointCharacteristics::IsFormatSupportedByHwAudioEngine(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // r14d
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 (__fastcall *v14)(LPVOID, PROPVARIANT, __int64 **); // rbx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 (__fastcall **v23)(_QWORD, _QWORD, _QWORD); // rax
  int v24; // eax
  int KSFormatFromWFXFormat; // eax
  unsigned int *v26; // rbx
  __int64 v27; // rdx
  _BYTE *v28; // rdx
  int v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v31)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  int v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  int v37[2]; // [rsp+68h] [rbp-98h] BYREF
  void *Src; // [rsp+70h] [rbp-90h] BYREF
  PROPVARIANT v39[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+88h] [rbp-78h]
  PROPVARIANT pvar[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h]
  _BYTE v43[112]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  *(_QWORD *)v37 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, int *))(**((_QWORD **)this + 2) + 24LL))(
         *((_QWORD *)this + 2),
         &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
         23LL,
         0LL,
         v37);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_OWORD *)pvar = 0LL;
    v42 = 0LL;
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 5)
                                                                                          + 40LL))(
           *((_QWORD *)this + 5),
           &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
           pvar);
    v5 = v6;
    if ( v6 < 0 )
    {
      v7 = (unsigned int)v6;
      v8 = 8444LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v7);
      PropVariantClear(pvar);
      goto LABEL_46;
    }
    if ( LOWORD(pvar[0]) != 19 )
    {
      v5 = -2147418113;
      v7 = 2147549183LL;
      v8 = 8445LL;
      goto LABEL_7;
    }
    v9 = (unsigned int)pvar[1];
    PropVariantClear(pvar);
    v32 = 0LL;
    pvar[0] = (PROPVARIANT)0x4C7D1B2C233164C8LL;
    pvar[1] = (PROPVARIANT)0x67257A6871B668BCLL;
    v10 = 104;
    LODWORD(v42) = 1;
    *(_OWORD *)v39 = 0LL;
    v40 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
            *((_QWORD *)this + 5),
            pvar,
            v39);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 8455LL;
LABEL_14:
      v13 = (unsigned int)v11;
      goto LABEL_15;
    }
    if ( LOWORD(v39[0]) != 31 )
    {
      v5 = -2147418113;
      v13 = 2147549183LL;
      v12 = 8456LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v13);
      PropVariantClear(v39);
LABEL_45:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
      goto LABEL_46;
    }
    v14 = *(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 **))(*(_QWORD *)g_DeviceEnumerator + 40LL);
    v32 = 0LL;
    v11 = v14(g_DeviceEnumerator, v39[1], &v32);
    v5 = v11;
    if ( v11 < 0 )
    {
      v12 = 8459LL;
      goto LABEL_14;
    }
    PropVariantClear(v39);
    *(_QWORD *)v34 = 0LL;
    v15 = *v32;
    *(_QWORD *)v34 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v15 + 24))(
            v32,
            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
            1LL);
    v5 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2110,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v16);
LABEL_44:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v34);
      goto LABEL_45;
    }
    v31 = 0LL;
    v17 = **(_QWORD **)v34;
    v31 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v17 + 56))(*(_QWORD *)v34, v9, &v31);
    v5 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2114,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v18);
LABEL_43:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
      goto LABEL_44;
    }
    v36 = 0LL;
    v19 = (**v31)(v31, &GUID_9c2c4058_23f5_41de_877a_df3af236a09e, &v36);
    v5 = v19;
    if ( v19 < 0 )
    {
      v20 = (unsigned int)v19;
      v21 = 8471LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v20);
LABEL_42:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
      goto LABEL_43;
    }
    v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 24LL))(v36, &v35);
    v5 = v22;
    if ( v22 < 0 )
    {
      v20 = (unsigned int)v22;
      v21 = 8475LL;
      goto LABEL_26;
    }
    if ( v35 != 3 )
    {
      v5 = -2147418113;
      v20 = 2147549183LL;
      v21 = 8476LL;
      goto LABEL_26;
    }
    v33 = 0LL;
    v23 = (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))*v31;
    v33 = 0LL;
    v24 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64, GUID *, __int64 *))v23[13])(
            v31,
            1LL,
            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
            &v33);
    v5 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2120,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v24);
LABEL_41:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v33);
      goto LABEL_42;
    }
    Src = 0LL;
    KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a2, (struct KSDATAFORMAT_WAVEFORMATEX **)&Src);
    v5 = KSFormatFromWFXFormat;
    v26 = (unsigned int *)Src;
    if ( KSFormatFromWFXFormat >= 0 )
    {
      memset_0(v43, 0, 0x68uLL);
      v28 = v26;
      if ( *v26 >= 0x68 )
      {
        v10 = *v26;
      }
      else
      {
        memcpy_0(v43, v26, *v26);
        v28 = v43;
      }
      v30 = 0;
      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, int *))(*(_QWORD *)v33 + 24LL))(
                                v33,
                                v28,
                                v10,
                                &v30);
      v5 = KSFormatFromWFXFormat;
      if ( KSFormatFromWFXFormat >= 0 )
      {
        v5 = -2005139333;
        if ( v30 )
          v5 = 0;
        goto LABEL_39;
      }
      v27 = 8508LL;
    }
    else
    {
      v27 = 8490LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)KSFormatFromWFXFormat);
LABEL_39:
    if ( v26 )
      CoTaskMemFree(v26);
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x20F6,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v4);
LABEL_46:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v37);
  return v5;
}
