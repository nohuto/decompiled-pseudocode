/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14000DEB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ @ 0x14000DE08 (--1-$CComPtr@UIAdaptiveSpatialAudioRenderer@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x14000DE14 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1?_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000E504 (--0-$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1-_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@.c)
 *     ??0?$CComQIPtr@UIAPOPreferredFormatSupport@@$1?_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000E54C (--0-$CComQIPtr@UIAPOPreferredFormatSupport@@$1-_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s.c)
 *     ??0?$CComQIPtr@UIApoAcousticEchoCancellation@@$1?_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000F5E0 (--0-$CComQIPtr@UIApoAcousticEchoCancellation@@$1-_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U_.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14000F628 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012E70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14001624C (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     wil::details::lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___::_lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___ @ 0x14002D954 (wil--details--lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___--_lambda_call__lambda_9ea6.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEBA_NPEAUIAudioProcessingObject@@@Z @ 0x1400381CC (--8-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEBA_NPEAUIAudioProcessingObject@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??I?$com_ptr_t@UIServiceProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIServiceProvider@@XZ @ 0x14004F1CC (--I-$com_ptr_t@UIServiceProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIServiceProvider@.c)
 *     ?RegisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ @ 0x14006ED78 (-RegisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperSrv::InitializeAPORemote(
        CAPOWrapperSrv *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        struct __MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002 *a8)
{
  unsigned int v11; // ebx
  __int64 v12; // rdx
  _QWORD *v13; // r14
  IUnknown *v14; // rdx
  HRESULT Instance; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64); // rbx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  void (__fastcall ***v27)(_QWORD, GUID *, struct _GUID **); // rcx
  struct _GUID *v28; // rax
  int ppv; // [rsp+20h] [rbp-E0h]
  int ppva; // [rsp+20h] [rbp-E0h]
  struct _GUID *v32; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v34; // [rsp+40h] [rbp-C0h] BYREF
  struct IMMDevice *v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v38[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v39; // [rsp+70h] [rbp-90h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h]
  __int128 v41; // [rsp+90h] [rbp-70h] BYREF
  int v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A4h] [rbp-5Ch]
  _OWORD v44[2]; // [rsp+A8h] [rbp-58h]
  APOInitSystemEffects2 v45; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v46; // [rsp+130h] [rbp+30h] BYREF
  int v47; // [rsp+140h] [rbp+40h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+148h] [rbp+48h]
  __int64 v49; // [rsp+150h] [rbp+50h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+158h] [rbp+58h]
  UINT nSoftwareIoDeviceInCollection; // [rsp+160h] [rbp+60h]
  UINT nSoftwareIoConnectorIndex; // [rsp+164h] [rbp+64h]
  GUID AudioProcessingMode; // [rsp+168h] [rbp+68h]
  BOOL InitializeForDiscoveryOnly; // [rsp+178h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v32 = a3;
  if ( a2 )
  {
    v13 = (_QWORD *)((char *)this + 96);
    if ( (unsigned __int8)ATL::CComPtrBase<IAudioProcessingObject>::operator==((char *)this + 96, 0LL) )
    {
      v11 = -2147024882;
      v12 = 156LL;
      goto LABEL_3;
    }
    v40 = 0LL;
    *(_OWORD *)a8 = 0LL;
    *((_QWORD *)a8 + 2) = v40;
    v38[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 v14,
                 0x17u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 v38);
    v11 = Instance;
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA1,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)Instance,
        ppva);
LABEL_47:
      ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)v38);
      return v11;
    }
    v35 = 0LL;
    v16 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)v38[0] + 40LL))(
            v38[0],
            a2,
            &v35);
    v11 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA4,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v16,
        ppva);
LABEL_10:
      ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)&v35);
      goto LABEL_47;
    }
    v36 = 0LL;
    v34 = 0LL;
    v33 = 0LL;
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v13)(
           *v13,
           &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
           &v33) < 0 )
    {
      v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))*v13)(
              *v13,
              &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
              &v34);
      v11 = v17;
      if ( v17 < 0 )
      {
        if ( a7 == 1 )
        {
          v18 = 181LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)(unsigned int)v17,
            ppva);
LABEL_16:
          ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v33);
          ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)&v34);
          ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v36);
          goto LABEL_10;
        }
        if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v13)(
               *v13,
               &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
               &v36) < 0 )
        {
LABEL_46:
          ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v33);
          ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)&v34);
          ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v36);
          ATL::CComPtr<IAdaptiveSpatialAudioRenderer>::~CComPtr<IAdaptiveSpatialAudioRenderer>((__int64 *)&v35);
          v11 = 0;
          goto LABEL_47;
        }
      }
    }
    memset_0(&v45, 0, sizeof(v45));
    v39 = *a4;
    v17 = FillAPOInitSystemEffectsStructure(v35, v32, &v39, a5, a6, &v45);
    v11 = v17;
    if ( v17 < 0 )
    {
      v18 = 191LL;
      goto LABEL_15;
    }
    *(_QWORD *)&v39.Data1 = &v45;
    v39.Data4[0] = 1;
    if ( v33 )
    {
      memset_0((char *)&v46 + 4, 0, 0x4CuLL);
      v46 = *(_OWORD *)&v45.APOInit.cbSize;
      v47 = *(_DWORD *)&v45.APOInit.clsid.Data4[4];
      LODWORD(v46) = 80;
      pAPOEndpointProperties = v45.pAPOEndpointProperties;
      pDeviceCollection = v45.pDeviceCollection;
      nSoftwareIoDeviceInCollection = v45.nSoftwareIoDeviceInCollection;
      nSoftwareIoConnectorIndex = v45.nSoftwareIoConnectorIndex;
      AudioProcessingMode = v45.AudioProcessingMode;
      InitializeForDiscoveryOnly = v45.InitializeForDiscoveryOnly;
      v37 = 0LL;
      v19 = *((_QWORD *)this + 11);
      v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v19 + 56LL);
      v21 = wil::com_ptr_t<IServiceProvider,wil::err_returncode_policy>::operator&(&v37);
      v22 = v20(v19, *v13, v21);
      v11 = v22;
      if ( v22 < 0 )
      {
        v23 = 212LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (const char *)(unsigned int)v22,
          ppva);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v37);
LABEL_24:
        wil::details::lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___::_lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___(&v39);
        goto LABEL_16;
      }
      v49 = v37;
      v22 = (*(__int64 (__fastcall **)(char *, __int64, __int128 *))(*((_QWORD *)this + 1) + 48LL))(
              (char *)this + 8,
              80LL,
              &v46);
      v11 = v22;
      if ( v22 < 0 )
      {
        v23 = 215LL;
        goto LABEL_23;
      }
      if ( a5 )
        CAPOWrapperSrv::RegisterAPONotifications(this);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v37);
      goto LABEL_30;
    }
    if ( v34 )
    {
      v24 = (*(__int64 (__fastcall **)(char *, __int64, APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
              (char *)this + 8,
              88LL,
              &v45);
      v11 = v24;
      if ( v24 < 0 )
      {
        v25 = 226LL;
LABEL_37:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (const char *)(unsigned int)v24,
          ppva);
        goto LABEL_24;
      }
    }
    else if ( v36 )
    {
      v43 = 0;
      v41 = *(_OWORD *)&v45.APOInit.cbSize;
      v42 = *(_DWORD *)&v45.APOInit.clsid.Data4[4];
      LODWORD(v41) = 56;
      v44[0] = *(_OWORD *)&v45.pAPOEndpointProperties;
      v44[1] = *(_OWORD *)&v45.pReserved;
      v24 = (*(__int64 (__fastcall **)(char *, __int64, __int128 *))(*((_QWORD *)this + 1) + 48LL))(
              (char *)this + 8,
              56LL,
              &v41);
      v11 = v24;
      if ( v24 < 0 )
      {
        v25 = 239LL;
        goto LABEL_37;
      }
    }
LABEL_30:
    if ( a7 )
    {
      if ( v33 )
      {
        v26 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v13)(
                *v13,
                &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                (char *)this + 104);
        if ( v26 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xF6,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
            (const char *)(unsigned int)v26,
            ppva);
      }
      else if ( *((struct IUnknown **)this + 13) != v34 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)this + 13, v34);
      }
    }
    v27 = (void (__fastcall ***)(_QWORD, GUID *, struct _GUID **))*v13;
    v28 = 0LL;
    v32 = 0LL;
    if ( v27 )
    {
      (**v27)(v27, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, &v32);
      v28 = v32;
    }
    *(_DWORD *)a8 = v28 != 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v32);
    ATL::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>(
      &v32,
      *v13);
    *((_DWORD *)a8 + 1) = v32 != 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v32);
    ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
      &v32,
      *v13);
    *((_DWORD *)a8 + 2) = v32 != 0LL;
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v32);
    ATL::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>(
      &v32,
      *v13);
    *((_DWORD *)a8 + 3) = v32 != 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v32);
    ATL::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>(
      &v32,
      *v13);
    *((_DWORD *)a8 + 4) = v32 != 0LL;
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v32);
    *((_DWORD *)a8 + 5) = v33 != 0;
    wil::details::lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___::_lambda_call__lambda_9ea61389800d10a92a31feda1ef8f987___(&v39);
    goto LABEL_46;
  }
  v11 = -2147024809;
  v12 = 155LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
    (const char *)v11,
    ppv);
  return v11;
}
