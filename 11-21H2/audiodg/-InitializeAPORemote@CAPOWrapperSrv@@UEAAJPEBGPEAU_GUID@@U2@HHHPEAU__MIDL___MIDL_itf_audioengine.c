/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x140017630
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400105A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014CE0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400172FC (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIAudioSystemEffects2@@@ATL@@QEAA@XZ @ 0x1400173D4 (--1-$CComPtr@UIAudioSystemEffects2@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIAPOPreferredFormatSupport@@$1?_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140017BBC (--0-$CComQIPtr@UIAPOPreferredFormatSupport@@$1-_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s.c)
 *     ??0?$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1?_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140017C04 (--0-$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1-_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140017C4C (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ??0?$CComQIPtr@UIApoAcousticEchoCancellation@@$1?_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140017C94 (--0-$CComQIPtr@UIApoAcousticEchoCancellation@@$1-_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U_.c)
 *     ??0?$CComQIPtr@UIApoAuxiliaryInputConfiguration@@$1?_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140017CDC (--0-$CComQIPtr@UIApoAuxiliaryInputConfiguration@@$1-_GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768@@.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x140019CB0 (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     ?RegisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ @ 0x140031EF4 (-RegisterAPONotifications@CAPOWrapperSrv@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140051A78 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAPOWrapperSrv::InitializeAPORemote(
        CAPOWrapperSrv *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        BOOL a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        struct __MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002 *a8)
{
  signed int Instance; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  struct IUnknown **v17; // r8
  int v18; // eax
  _DWORD *v19; // rcx
  int ppv; // [rsp+20h] [rbp-E0h]
  struct _GUID v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  struct IMMDevice *v26; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[20]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+84h] [rbp-7Ch]
  IPropertyStore *pAPOEndpointProperties; // [rsp+88h] [rbp-78h]
  void *pAPOSystemEffectsProperties; // [rsp+90h] [rbp-70h] BYREF
  __int64 pDeviceCollection; // [rsp+98h] [rbp-68h]
  IMMDeviceCollection *v33; // [rsp+A0h] [rbp-60h]
  GUID AudioProcessingMode; // [rsp+A8h] [rbp-58h]
  BOOL InitializeForDiscoveryOnly; // [rsp+B8h] [rbp-48h]
  APOInitSystemEffects2 v36; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v27[0] = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  memset_0(&v36, 0, sizeof(v36));
  if ( !a2 )
  {
    Instance = -2147024809;
    goto LABEL_38;
  }
  if ( !*((_QWORD *)this + 12) )
  {
    Instance = -2147024882;
    goto LABEL_38;
  }
  *(_OWORD *)a8 = 0LL;
  *((_DWORD *)a8 + 4) = 0;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v27);
  if ( Instance < 0 )
    goto LABEL_30;
  Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)v27[0] + 40LL))(
               v27[0],
               a2,
               &v26);
  if ( Instance < 0 )
    goto LABEL_30;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 12))(
         *((_QWORD *)this + 12),
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v23) >= 0 )
    goto LABEL_12;
  Instance = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 12))(
               *((_QWORD *)this + 12),
               &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
               &v24);
  if ( Instance >= 0 )
    goto LABEL_12;
  if ( a7 == 1 )
    goto LABEL_30;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 12))(
         *((_QWORD *)this + 12),
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         &v25) >= 0 )
  {
LABEL_12:
    v22 = *a4;
    Instance = FillAPOInitSystemEffectsStructure(v26, a3, &v22, a5, a6, &v36);
    if ( Instance >= 0 )
    {
      if ( v23 )
      {
        memset_0(&v28[4], 0, 0x4CuLL);
        v14 = *((_QWORD *)this + 11);
        *(_DWORD *)&v28[16] = *(_DWORD *)&v36.APOInit.clsid.Data4[4];
        pAPOEndpointProperties = v36.pAPOEndpointProperties;
        pDeviceCollection = (__int64)v36.pDeviceCollection;
        v33 = *(IMMDeviceCollection **)&v36.nSoftwareIoDeviceInCollection;
        *(_OWORD *)v28 = *(_OWORD *)&v36.APOInit.cbSize;
        InitializeForDiscoveryOnly = v36.InitializeForDiscoveryOnly;
        *(_DWORD *)v28 = 80;
        AudioProcessingMode = v36.AudioProcessingMode;
        Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, void **))(*(_QWORD *)v14 + 56LL))(
                     v14,
                     *((_QWORD *)this + 12),
                     &pAPOSystemEffectsProperties);
        if ( Instance >= 0 )
        {
          Instance = (*(__int64 (__fastcall **)(char *, __int64, _BYTE *))(*((_QWORD *)this + 1) + 48LL))(
                       (char *)this + 8,
                       80LL,
                       v28);
          if ( Instance >= 0 )
          {
            if ( a5 )
              CAPOWrapperSrv::RegisterAPONotifications(this);
            goto LABEL_23;
          }
        }
      }
      else
      {
        if ( v24 )
        {
          v15 = (*(__int64 (__fastcall **)(char *, __int64, APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
                  (char *)this + 8,
                  88LL,
                  &v36);
        }
        else
        {
          if ( !v25 )
            goto LABEL_23;
          *(_OWORD *)&v28[4] = 0LL;
          *(_DWORD *)&v28[16] = *(_DWORD *)&v36.APOInit.clsid.Data4[4];
          v29 = 0;
          pAPOEndpointProperties = v36.pAPOEndpointProperties;
          pAPOSystemEffectsProperties = v36.pAPOSystemEffectsProperties;
          pDeviceCollection = (__int64)v36.pReserved;
          v33 = v36.pDeviceCollection;
          v16 = *((_QWORD *)this + 1);
          *(_OWORD *)v28 = *(_OWORD *)&v36.APOInit.cbSize;
          *(_DWORD *)v28 = 56;
          v15 = (*(__int64 (__fastcall **)(char *, __int64, _BYTE *))(v16 + 48))((char *)this + 8, 56LL, v28);
        }
        Instance = v15;
        if ( v15 >= 0 )
        {
LABEL_23:
          if ( a7 )
          {
            v17 = (struct IUnknown **)((char *)this + 104);
            if ( v23 )
            {
              v18 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 12))(
                      *((_QWORD *)this + 12),
                      &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                      v17);
              if ( v18 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0xFC,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
                  (const char *)(unsigned int)v18,
                  ppv);
            }
            else if ( *v17 != v24 )
            {
              ATL::AtlComPtrAssign((struct IUnknown **)this + 13, v24);
            }
          }
          ATL::CComQIPtr<IApoAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>::CComQIPtr<IApoAuxiliaryInputConfiguration,&__s_GUID const _GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768>(
            &v22,
            *((_QWORD *)this + 12));
          *(_DWORD *)a8 = *(_QWORD *)&v22.Data1 != 0LL;
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v22);
          ATL::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>(
            &v22,
            *((_QWORD *)this + 12));
          *((_DWORD *)a8 + 1) = *(_QWORD *)&v22.Data1 != 0LL;
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v22);
          ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
            &v22,
            *((_QWORD *)this + 12));
          *((_DWORD *)a8 + 2) = *(_QWORD *)&v22.Data1 != 0LL;
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v22);
          ATL::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>(
            &v22,
            *((_QWORD *)this + 12));
          *((_DWORD *)a8 + 3) = *(_QWORD *)&v22.Data1 != 0LL;
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v22);
          ATL::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>(
            &v22,
            *((_QWORD *)this + 12));
          *((_DWORD *)a8 + 4) = *(_QWORD *)&v22.Data1 != 0LL;
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v22);
          if ( Instance >= 0 )
            goto LABEL_32;
        }
      }
    }
LABEL_30:
    v19 = *(_DWORD **)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                         v13,
                         _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v19 > 2u )
    {
      v22.Data1 = Instance;
      pAPOSystemEffectsProperties = &v22;
      pDeviceCollection = 4LL;
      tlgWriteTransfer_EtwEventWriteTransfer((_DWORD)v19, (unsigned int)&unk_1400A6D1C, 0, 0, 3, (__int64)v28);
    }
    goto LABEL_32;
  }
  Instance = 0;
LABEL_32:
  if ( v36.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v36.pAPOEndpointProperties->lpVtbl->Release)(v36.pAPOEndpointProperties);
    v36.pAPOEndpointProperties = 0LL;
  }
  if ( v36.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v36.pAPOSystemEffectsProperties->lpVtbl->Release)(v36.pAPOSystemEffectsProperties);
    v36.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v36.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v36.pDeviceCollection->lpVtbl->Release)(v36.pDeviceCollection);
    v36.pDeviceCollection = 0LL;
  }
LABEL_38:
  ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>(&v23);
  ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>((__int64 *)&v24);
  ATL::CComPtr<IAudioSystemEffects2>::~CComPtr<IAudioSystemEffects2>(&v25);
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)&v26);
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>((__int64 *)v27);
  return (unsigned int)Instance;
}
