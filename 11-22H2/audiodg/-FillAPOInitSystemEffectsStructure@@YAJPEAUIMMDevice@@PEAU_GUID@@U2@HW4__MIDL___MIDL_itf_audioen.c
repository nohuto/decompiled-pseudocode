/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14001624C
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000DEB0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140018394 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14004F2CC (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x14001666C (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140050438 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     wil::details::lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___::_lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___ @ 0x14006E51C (wil--details--lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___--_lambda_call__lambda_73a6.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v11; // eax
  HRESULT v12; // ebx
  struct IMMDeviceVtbl *v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  int v17; // eax
  bool v18; // bl
  const PROPERTYKEY *v19; // rax
  unsigned int v20; // r14d
  LPVOID *v21; // rcx
  struct KSDATAFORMAT_WAVEFORMATEX *v22; // rdx
  void *v23; // rax
  struct IMMDeviceVtbl *v24; // rax
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, LPVOID, _QWORD, __int64); // rsi
  __int64 v28; // rcx
  int v29; // eax
  void *v30; // rcx
  IPropertyStore *v31; // rax
  IPropertyStore *v32; // rax
  IMMDeviceCollection *v33; // rax
  __int64 v35; // r9
  __int64 v36; // rdx
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rbx
  int v38; // eax
  __int64 v39; // rax
  void *v40; // rcx
  void *v41; // rcx
  struct tWAVEFORMATEX *v42; // rcx
  struct tWAVEFORMATEX *v43; // rcx
  void *v44; // rcx
  int ppv; // [rsp+28h] [rbp-E0h]
  int ppva; // [rsp+28h] [rbp-E0h]
  __int64 *v47; // [rsp+58h] [rbp-B0h] BYREF
  IPropertyStore *v48; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  IMMDeviceCollection *v50; // [rsp+70h] [rbp-98h] BYREF
  struct tWAVEFORMATEX *v51; // [rsp+78h] [rbp-90h] BYREF
  LPVOID v52; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v53; // [rsp+88h] [rbp-80h] BYREF
  IPropertyStore *v54; // [rsp+90h] [rbp-78h] BYREF
  void **p_pv; // [rsp+98h] [rbp-70h]
  struct KSDATAFORMAT_WAVEFORMATEX *v56; // [rsp+A0h] [rbp-68h] BYREF
  char v57; // [rsp+A8h] [rbp-60h]
  UINT v58; // [rsp+B0h] [rbp-58h]
  UINT v59; // [rsp+B4h] [rbp-54h]
  int v60[2]; // [rsp+B8h] [rbp-50h] BYREF
  PROPVARIANT *v61; // [rsp+C0h] [rbp-48h] BYREF
  char v62; // [rsp+C8h] [rbp-40h]
  PROPVARIANT v63[2]; // [rsp+D0h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+E0h] [rbp-28h]
  PROPVARIANT pvar[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v66; // [rsp+F8h] [rbp-10h]
  GUID fmtid; // [rsp+100h] [rbp-8h] BYREF
  DWORD pid; // [rsp+110h] [rbp+8h]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  lpVtbl = a1->lpVtbl;
  v54 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))lpVtbl->OpenPropertyStore)(
          a1,
          0LL,
          &v54);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)(unsigned int)v11,
      ppv);
    goto LABEL_29;
  }
  v13 = a1->lpVtbl;
  v47 = 0LL;
  v14 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 **))v13->QueryInterface)(
          a1,
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v47);
  v12 = v14;
  if ( v14 < 0 )
  {
    v35 = (unsigned int)v14;
    v36 = 49LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v36,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)v35,
      ppv);
LABEL_36:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v47);
    goto LABEL_29;
  }
  if ( !v47 )
  {
    v12 = -2147418113;
    v35 = 2147549183LL;
    v36 = 50LL;
    goto LABEL_33;
  }
  v48 = 0LL;
  v15 = *v47;
  v48 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, IPropertyStore **))(v15 + 40))(v47, 0LL, &v48);
  v12 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)(unsigned int)v16,
      ppv);
LABEL_35:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v48);
    goto LABEL_36;
  }
  *(_OWORD *)pvar = 0LL;
  v66 = 0LL;
  v61 = pvar;
  v62 = 1;
  v17 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v54->lpVtbl->GetValue)(
          v54,
          &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
          pvar);
  v12 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)(unsigned int)v17,
      ppv);
    PropVariantClear(pvar);
    goto LABEL_35;
  }
  v18 = LOWORD(pvar[0]) == 72;
  PropVariantClear(pvar);
  v50 = 0LL;
  v58 = 0;
  v59 = 0;
  v19 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  v20 = 3;
  if ( a5 != eKeywordDetectorConnector )
    v19 = &PKEY_AudioEngine_DeviceFormat;
  fmtid = v19->fmtid;
  pid = v19->pid;
  if ( (*(unsigned int (__fastcall **)(__int64 *))(*v47 + 48))(v47) || v18 )
    goto LABEL_28;
  *(_OWORD *)v63 = 0LL;
  Src = 0LL;
  v61 = v63;
  v62 = 1;
  pv = 0LL;
  if ( a5 != eKeywordDetectorConnector )
    v20 = 0;
  if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v54->lpVtbl->GetValue)(v54, &fmtid, v63) < 0
    || LOWORD(v63[0]) != 65 )
  {
    v53 = 0LL;
    v12 = CoCreateInstance(
            &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
            0LL,
            0x17u,
            &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
            &v53);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
        (const char *)(unsigned int)v12,
        ppva);
      goto LABEL_46;
    }
    v52 = 0LL;
    GetId = a1->lpVtbl->GetId;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &v52,
      0LL);
    v38 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))GetId)(a1, &v52);
    v12 = v38;
    if ( v38 >= 0 )
    {
      v51 = 0LL;
      v39 = *(_QWORD *)v53;
      p_pv = (void **)&v51;
      v56 = 0LL;
      v57 = 1;
      v12 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, _QWORD, _QWORD))(v39 + 296))(v53, v52, v20, 0LL);
      if ( v57 )
      {
        v40 = *p_pv;
        *p_pv = v56;
        if ( v40 )
          CoTaskMemFree(v40);
      }
      if ( v12 >= 0 )
      {
        p_pv = &pv;
        v56 = 0LL;
        v57 = 1;
        v12 = CreateKSFormatFromWFXFormat(v51, &v56);
        if ( v57 )
        {
          v41 = *p_pv;
          *p_pv = v56;
          if ( v41 )
            CoTaskMemFree(v41);
        }
        if ( v12 >= 0 )
        {
          v43 = v51;
          v51 = 0LL;
          if ( v43 )
            CoTaskMemFree(v43);
          if ( v52 )
            CoTaskMemFree(v52);
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v53);
          goto LABEL_21;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6B,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
          (const char *)(unsigned int)v12,
          (int)&v56);
        v42 = v51;
        v51 = 0LL;
        if ( v42 )
          CoTaskMemFree(v42);
        if ( v52 )
          CoTaskMemFree(v52);
LABEL_46:
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v53);
        goto LABEL_41;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x69,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
        (const char *)(unsigned int)v12,
        (int)&v56);
      wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v51);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
        (const char *)(unsigned int)v38,
        ppva);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v52);
    goto LABEL_46;
  }
  v21 = &pv;
  p_pv = &pv;
  v22 = 0LL;
  v56 = 0LL;
  v57 = 1;
  if ( LODWORD(v63[1]) < 0x12uLL || LODWORD(v63[1]) < (unsigned __int64)Src->cbSize + 18 )
  {
    v12 = -2147024809;
  }
  else
  {
    v12 = CreateKSFormatFromWFXFormat(Src, &v56);
    if ( !v57 )
      goto LABEL_20;
    v22 = v56;
    v21 = p_pv;
  }
  v23 = *v21;
  *v21 = v22;
  if ( v23 )
    CoTaskMemFree(v23);
LABEL_20:
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)(unsigned int)v12,
      ppv);
LABEL_41:
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    wil::details::lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___::_lambda_call__lambda_73a6e9412481f01b3e444fe2dae673a8___(&v61);
LABEL_43:
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v50);
    goto LABEL_35;
  }
LABEL_21:
  v24 = a1->lpVtbl;
  *(_QWORD *)v60 = 0LL;
  v25 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v24->Activate)(
          a1,
          &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
          23LL);
  v12 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)(unsigned int)v25,
      (int)v60);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v60);
    goto LABEL_41;
  }
  v26 = *(_QWORD *)v60;
  v27 = *(__int64 (__fastcall **)(__int64, LPVOID, _QWORD, __int64))(**(_QWORD **)v60 + 104LL);
  v28 = (__int64)v50;
  v50 = 0LL;
  if ( v28 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 16LL))(v28, 0LL);
  v29 = v27(v26, pv, *(unsigned int *)pv, 1LL);
  v12 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x73,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)(unsigned int)v29,
      v20);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v60);
    v44 = pv;
    pv = 0LL;
    if ( v44 )
      CoTaskMemFree(v44);
    PropVariantClear(v63);
    goto LABEL_43;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v60);
  v30 = pv;
  pv = 0LL;
  if ( v30 )
    CoTaskMemFree(v30);
  PropVariantClear(v63);
LABEL_28:
  a6->APOInit.cbSize = 88;
  a6->APOInit.clsid = *a2;
  v31 = v54;
  v54 = 0LL;
  a6->pAPOEndpointProperties = v31;
  v32 = v48;
  v48 = 0LL;
  a6->pAPOSystemEffectsProperties = v32;
  a6->pReserved = 0LL;
  v33 = v50;
  v50 = 0LL;
  a6->pDeviceCollection = v33;
  a6->nSoftwareIoDeviceInCollection = v58;
  a6->nSoftwareIoConnectorIndex = v59;
  a6->AudioProcessingMode = *a3;
  a6->InitializeForDiscoveryOnly = a4;
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v50);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v48);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v47);
  v12 = 0;
LABEL_29:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v54);
  return (unsigned int)v12;
}
