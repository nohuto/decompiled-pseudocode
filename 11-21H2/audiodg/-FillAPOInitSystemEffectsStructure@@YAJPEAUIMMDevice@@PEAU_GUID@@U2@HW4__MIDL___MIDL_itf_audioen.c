/*
 * XREFs of ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014CE0
 * Callers:
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x140017630 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140018458 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14004FC44 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140009BF4 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140009C1C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x14001529C (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall FillAPOInitSystemEffectsStructure(
        struct IMMDevice *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        BOOL a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct APOInitSystemEffects2 *a6)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  IMMDeviceCollection *v8; // rbx
  int v9; // eax
  int v10; // edi
  struct IMMDeviceVtbl *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  bool v16; // di
  const PROPERTYKEY *v17; // rax
  unsigned int v18; // r13d
  int v19; // r12d
  LPVOID *v20; // rcx
  struct KSDATAFORMAT_WAVEFORMATEX *v21; // rdx
  void *v22; // rax
  struct IMMDeviceVtbl *v23; // rax
  int v24; // eax
  PROPVARIANT *v25; // rdi
  __int64 (__fastcall *v26)(PROPVARIANT *, LPVOID, _QWORD, __int64); // r14
  IMMDeviceCollection *v27; // rcx
  void *v28; // rcx
  IPropertyStore *v29; // rax
  IPropertyStore *v30; // rax
  IMMDeviceCollection *v31; // rax
  HRESULT v33; // eax
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  int v35; // eax
  __int64 v36; // rax
  void *v37; // rcx
  __int64 v38; // rdx
  void *v39; // rcx
  struct tWAVEFORMATEX *v40; // rcx
  struct tWAVEFORMATEX *v41; // rcx
  __int64 v42; // rdx
  void *v43; // rcx
  int ppv; // [rsp+20h] [rbp-E0h]
  LPVOID *ppva; // [rsp+20h] [rbp-E0h]
  int ppvb; // [rsp+20h] [rbp-E0h]
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX *v48; // [rsp+58h] [rbp-A8h] BYREF
  IMMDeviceCollection *v49; // [rsp+60h] [rbp-A0h]
  IPropertyStore *v50; // [rsp+68h] [rbp-98h] BYREF
  void **p_pv; // [rsp+70h] [rbp-90h]
  struct KSDATAFORMAT_WAVEFORMATEX *v52; // [rsp+78h] [rbp-88h] BYREF
  char v53; // [rsp+80h] [rbp-80h]
  UINT v54; // [rsp+88h] [rbp-78h]
  UINT v55; // [rsp+8Ch] [rbp-74h]
  void *v56; // [rsp+90h] [rbp-70h] BYREF
  IPropertyStore *v57; // [rsp+98h] [rbp-68h] BYREF
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+B0h] [rbp-50h]
  LPVOID v60; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v61; // [rsp+C0h] [rbp-40h] BYREF
  BOOL v62; // [rsp+C8h] [rbp-38h]
  PROPVARIANT *v63; // [rsp+D0h] [rbp-30h] BYREF
  char v64; // [rsp+D8h] [rbp-28h]
  CLSID *v65; // [rsp+E0h] [rbp-20h]
  GUID *v66; // [rsp+E8h] [rbp-18h]
  PROPVARIANT *v67; // [rsp+F0h] [rbp-10h]
  char v68; // [rsp+F8h] [rbp-8h]
  GUID fmtid; // [rsp+100h] [rbp+0h] BYREF
  DWORD pid; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v62 = a4;
  v66 = a3;
  v65 = a2;
  memset_0(a6, 0, sizeof(struct APOInitSystemEffects2));
  lpVtbl = a1->lpVtbl;
  v8 = 0LL;
  v50 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, IPropertyStore **))lpVtbl->OpenPropertyStore)(a1, 0LL, &v50);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)(unsigned int)v9,
      ppv);
    goto LABEL_37;
  }
  v11 = a1->lpVtbl;
  v61 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 **))v11->QueryInterface)(
          a1,
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v61);
  v10 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)(unsigned int)v12,
      ppv);
  }
  else
  {
    if ( v61 )
    {
      v57 = 0LL;
      v13 = *v61;
      v57 = 0LL;
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, IPropertyStore **))(v13 + 40))(v61, 0LL, &v57);
      v10 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x36,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
          (const char *)(unsigned int)v14,
          ppv);
      }
      else
      {
        *(_OWORD *)pvar = 0LL;
        Src = 0LL;
        v63 = pvar;
        v64 = 1;
        v15 = ((__int64 (__fastcall *)(IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v50->lpVtbl->GetValue)(
                v50,
                &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
                pvar);
        v10 = v15;
        if ( v15 >= 0 )
        {
          v16 = LOWORD(pvar[0]) == 72;
          PropVariantClear(pvar);
          v49 = 0LL;
          v54 = 0;
          v55 = 0;
          v17 = &PKEY_AudioEngine_DeviceFormat;
          if ( a5 == eKeywordDetectorConnector )
            v17 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
          fmtid = v17->fmtid;
          pid = v17->pid;
          if ( (*(unsigned int (__fastcall **)(__int64 *))(*v61 + 48))(v61) || v16 )
            goto LABEL_30;
          *(_OWORD *)pvar = 0LL;
          Src = 0LL;
          v67 = pvar;
          v68 = 1;
          pv = 0LL;
          v18 = 3;
          v19 = 0;
          if ( a5 == eKeywordDetectorConnector )
            v19 = 3;
          if ( ((int (__fastcall *)(IPropertyStore *, GUID *, PROPVARIANT *))v50->lpVtbl->GetValue)(v50, &fmtid, pvar) < 0
            || LOWORD(pvar[0]) != 65 )
          {
            v60 = 0LL;
            v33 = CoCreateInstance(
                    &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                    0LL,
                    0x17u,
                    &GUID_4495581a_01b9_4a8f_b05c_741a6c983d28,
                    &v60);
            v10 = v33;
            if ( v33 >= 0 )
            {
              v56 = 0LL;
              GetId = a1->lpVtbl->GetId;
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
                &v56,
                0LL);
              v35 = ((__int64 (__fastcall *)(struct IMMDevice *, void **))GetId)(a1, &v56);
              v10 = v35;
              if ( v35 >= 0 )
              {
                v48 = 0LL;
                v36 = *(_QWORD *)v60;
                p_pv = (void **)&v48;
                v52 = 0LL;
                v53 = 1;
                if ( a5 != eKeywordDetectorConnector )
                  v18 = 0;
                v10 = (*(__int64 (__fastcall **)(LPVOID, void *, _QWORD, _QWORD))(v36 + 296))(v60, v56, v18, 0LL);
                if ( v53 )
                {
                  v37 = *p_pv;
                  *p_pv = v52;
                  if ( v37 )
                    CoTaskMemFree(v37);
                }
                if ( v10 >= 0 )
                {
                  p_pv = &pv;
                  v52 = 0LL;
                  v53 = 1;
                  v10 = CreateKSFormatFromWFXFormat(v48, &v52);
                  if ( v53 )
                  {
                    v39 = *p_pv;
                    *p_pv = v52;
                    if ( v39 )
                      CoTaskMemFree(v39);
                  }
                  if ( v10 >= 0 )
                  {
                    v41 = v48;
                    v48 = 0LL;
                    if ( v41 )
                      CoTaskMemFree(v41);
                    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v56);
                    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v60);
                    goto LABEL_21;
                  }
                  v38 = 107LL;
                }
                else
                {
                  v38 = 105LL;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v38,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
                  (const char *)(unsigned int)v10,
                  (int)&v52);
                v40 = v48;
                v48 = 0LL;
                if ( v40 )
                  CoTaskMemFree(v40);
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x65,
                  (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
                  (const char *)(unsigned int)v35,
                  ppvb);
              }
              wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(&v56);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x62,
                (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
                (const char *)(unsigned int)v33,
                ppvb);
            }
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v60);
            goto LABEL_74;
          }
          v20 = &pv;
          p_pv = &pv;
          v21 = 0LL;
          v52 = 0LL;
          v53 = 1;
          if ( LODWORD(pvar[1]) < 0x12uLL )
          {
            v10 = -2147024809;
          }
          else if ( LODWORD(pvar[1]) < (unsigned __int64)Src->cbSize + 18 )
          {
            v10 = -2147024809;
          }
          else
          {
            v10 = CreateKSFormatFromWFXFormat(Src, &v52);
            if ( !v53 )
              goto LABEL_20;
            v21 = v52;
            v20 = p_pv;
          }
          v22 = *v20;
          *v20 = v21;
          if ( v22 )
            CoTaskMemFree(v22);
LABEL_20:
          if ( v10 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5D,
              (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
              (const char *)(unsigned int)v10,
              ppv);
            goto LABEL_74;
          }
LABEL_21:
          v23 = a1->lpVtbl;
          v63 = 0LL;
          ppva = (LPVOID *)&v63;
          v24 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v23->Activate)(
                  a1,
                  &GUID_8bfd01ba_edf5_11e4_90ec_1681e6b88ec1,
                  23LL);
          v10 = v24;
          if ( v24 < 0 )
          {
            v42 = 112LL;
          }
          else
          {
            v25 = v63;
            v26 = (__int64 (__fastcall *)(PROPVARIANT *, LPVOID, _QWORD, __int64))*((_QWORD *)*v63 + 13);
            v27 = v49;
            v49 = 0LL;
            if ( v27 )
              ((void (__fastcall *)(IMMDeviceCollection *))v27->lpVtbl->Release)(v27);
            LODWORD(ppva) = v19;
            v24 = v26(v25, pv, *(unsigned int *)pv, 1LL);
            v10 = v24;
            if ( v24 >= 0 )
            {
              if ( v63 )
                (*((void (__fastcall **)(PROPVARIANT *))*v63 + 2))(v63);
              v28 = pv;
              pv = 0LL;
              if ( v28 )
                CoTaskMemFree(v28);
              PropVariantClear(pvar);
LABEL_30:
              a6->APOInit.cbSize = 88;
              a6->APOInit.clsid = *v65;
              v29 = v50;
              v50 = 0LL;
              a6->pAPOEndpointProperties = v29;
              v30 = v57;
              v57 = 0LL;
              a6->pAPOSystemEffectsProperties = v30;
              a6->pReserved = 0LL;
              v31 = v49;
              v49 = 0LL;
              a6->pDeviceCollection = v31;
              a6->nSoftwareIoDeviceInCollection = v54;
              a6->nSoftwareIoConnectorIndex = v55;
              a6->AudioProcessingMode = *v66;
              a6->InitializeForDiscoveryOnly = v62;
              v10 = 0;
LABEL_31:
              if ( v8 )
                ((void (__fastcall *)(IMMDeviceCollection *))v8->lpVtbl->Release)(v8);
              goto LABEL_33;
            }
            v42 = 115LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v42,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
            (const char *)(unsigned int)v24,
            (int)ppva);
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v63);
LABEL_74:
          v43 = pv;
          pv = 0LL;
          if ( v43 )
            CoTaskMemFree(v43);
          PropVariantClear(pvar);
          v8 = v49;
          goto LABEL_31;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
          (const char *)(unsigned int)v15,
          ppv);
        PropVariantClear(pvar);
      }
LABEL_33:
      if ( v57 )
        ((void (__fastcall *)(IPropertyStore *))v57->lpVtbl->Release)(v57);
      goto LABEL_35;
    }
    v10 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectsutil.cpp",
      (const char *)0x8000FFFFLL,
      ppv);
  }
LABEL_35:
  if ( v61 )
    (*(void (__fastcall **)(__int64 *))(*v61 + 16))(v61);
LABEL_37:
  if ( v50 )
    ((void (__fastcall *)(IPropertyStore *))v50->lpVtbl->Release)(v50);
  return (unsigned int)v10;
}
