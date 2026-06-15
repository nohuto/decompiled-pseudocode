/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x1800407BC (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@AEAPEAUIEndpoin.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180010608 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180018580 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18001E154 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x18002032C (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 *     ?Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18002146C (-Initialize@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ @ 0x180023BF4 (-DetermineCurrentEffectPack@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180024FF0 (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AA60 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18002BA6C (-DiscoverConnectorCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAA?A_TAEAV?$shared_ptr@VEffectPack@@@1@@Z @ 0x1800424A8 (--$emplace_back@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@@std@@V.c)
 *     ?ForEachEffectPackConfiguration@EffectPackConfigurationManager@@QEAAJ$$QEAV?$function@$$A6AJAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z@std@@@Z @ 0x180046018 (-ForEachEffectPackConfiguration@EffectPackConfigurationManager@@QEAAJ$$QEAV-$function@$$A6AJAEAV.c)
 *     ?AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18004864C (-AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     ?AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18004A09C (-AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x180155448 (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        const struct _tlgProvider_t *a3,
        struct IEndpointResourceManagerProvider *a4)
{
  HRESULT (__stdcall *GetDevice)(IMMDeviceEnumerator *, LPCWSTR, IMMDevice **); // rbx
  struct IMMDevice **v7; // r13
  __int64 v8; // rcx
  int v9; // edi
  struct IMMDevice *v10; // rsi
  HRESULT (__stdcall *GetId)(IMMDevice *, LPWSTR *); // rdi
  int ClassFromEndpointId; // eax
  __int64 *v13; // rsi
  const char *v14; // r9
  void *v15; // rcx
  HRESULT v16; // eax
  int v17; // eax
  __int64 *v18; // r12
  int v19; // eax
  int v20; // eax
  int DriverEffectPackInstance; // eax
  __int64 (__fastcall *v22)(struct IEndpointResourceManagerProvider *, CEndpointCharacteristics *, GUID *, char *); // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  BOOL v25; // eax
  bool v26; // al
  int v27; // eax
  bool v28; // zf
  EffectPackConfiguration *v29; // rcx
  int v30; // eax
  _QWORD *v31; // rdx
  int v32; // eax
  int DeviceFormat; // eax
  char v34; // di
  void *v35; // rcx
  int v36; // eax
  int v37; // eax
  void *v38; // rcx
  void *v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // [rsp+20h] [rbp-A9h]
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v46; // [rsp+40h] [rbp-89h]
  LPVOID pv; // [rsp+48h] [rbp-81h] BYREF
  __int64 v48; // [rsp+50h] [rbp-79h] BYREF
  PROPVARIANT v49[2]; // [rsp+58h] [rbp-71h] BYREF
  __int64 v50; // [rsp+68h] [rbp-61h]
  int v51; // [rsp+70h] [rbp-59h] BYREF
  __int64 v52; // [rsp+78h] [rbp-51h] BYREF
  struct IEndpointResourceManagerProvider *v53; // [rsp+80h] [rbp-49h]
  void *v54; // [rsp+88h] [rbp-41h] BYREF
  struct IMMDevice *v55; // [rsp+90h] [rbp-39h] BYREF
  const struct _tlgProvider_t *v56; // [rsp+98h] [rbp-31h]
  _QWORD v57[7]; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD *v58; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v53 = a4;
  v56 = a3;
  *((_QWORD *)this + 1036) = a3;
  GetDevice = g_DeviceEnumerator->lpVtbl->GetDevice;
  v7 = (struct IMMDevice **)((char *)this + 40);
  v8 = *((_QWORD *)this + 5);
  *v7 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, const unsigned __int16 *, struct IMMDevice **))GetDevice)(
         g_DeviceEnumerator,
         a2,
         v7);
  if ( v9 < 0 )
  {
    v41 = 211LL;
    goto LABEL_86;
  }
  v10 = *v7;
  GetId = (*v7)->lpVtbl->GetId;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (char *)this + 48,
    0LL);
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))GetId)(v10, (char *)this + 48);
  if ( v9 < 0 )
  {
    v41 = 214LL;
    goto LABEL_86;
  }
  ClassFromEndpointId = GetClassFromEndpointId(a2);
  *((_DWORD *)this + 16) = ClassFromEndpointId;
  v13 = (__int64 *)((char *)this + 72);
  if ( ClassFromEndpointId )
  {
    v55 = *v7;
    v54 = &unk_1801CEB20;
    LODWORD(pv) = 1;
    v9 = Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
           (char *)this + 72,
           &v55,
           &pv,
           &v54);
    if ( v9 >= 0 )
      goto LABEL_7;
    v41 = 229LL;
LABEL_86:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v9,
      v44);
    return (unsigned int)v9;
  }
  v9 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, char *))(*v7)->lpVtbl->OpenPropertyStore)(
         *v7,
         2LL,
         (char *)this + 72);
  if ( v9 < 0 )
  {
    v41 = 225LL;
    goto LABEL_86;
  }
LABEL_7:
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v46 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
         *v13,
         &PKEY_Endpoint_CustomResourceManager,
         v49) >= 0
    && LOWORD(v49[0]) == 72
    && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
         *v13,
         &PKEY_Endpoint_CustomResourceManagerContext,
         pvar) >= 0
    && LOWORD(pvar[0]) == 72 )
  {
    *(_OWORD *)((char *)this + 8252) = *(_OWORD *)v49[1];
    *(_OWORD *)((char *)this + 8268) = *(_OWORD *)pvar[1];
  }
  PropVariantClear(pvar);
  PropVariantClear(v49);
  *(_OWORD *)pvar = 0LL;
  v46 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
         *v13,
         &PKEY_AudioEndpoint_HasNonInboxInf,
         pvar) >= 0
    && LOWORD(pvar[0]) == 11 )
  {
    *((_DWORD *)this + 102) = LOWORD(pvar[1]) == 0xFFFF;
  }
  PropVariantClear(pvar);
  *(_OWORD *)pvar = 0LL;
  v46 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
         *v13,
         &PKEY_Endpoint_IsSideband,
         pvar) >= 0
    && LOWORD(pvar[0]) == 11 )
  {
    *((_DWORD *)this + 103) = LOWORD(pvar[1]) == 0xFFFF;
  }
  PropVariantClear(pvar);
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
         *v13,
         &PKEY_Device_EnumeratorName,
         v49) >= 0
    && LOWORD(v49[0]) == 31 )
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      (char *)v49[1],
      0xFFFFFFFFFFFFFFFFuLL,
      v14);
    if ( (LPVOID *)((char *)this + 384) == &pv )
    {
      v15 = pv;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        (char *)this + 384,
        pv);
      v15 = 0LL;
    }
    if ( v15 )
      CoTaskMemFree(v15);
    if ( !*((_QWORD *)this + 48) )
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x112,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL,
        v44);
LABEL_97:
      PropVariantClear(v49);
      return (unsigned int)v9;
    }
  }
  PropVariantClear(v49);
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
         *v13,
         &PKEY_AudioEndpoint_JackSubType,
         v49) >= 0
    && LOWORD(v49[0]) == 31 )
  {
    v16 = CLSIDFromString((LPCOLESTR)v49[1], (LPCLSID)((char *)this + 392));
    v9 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11D,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v16,
        v44);
      goto LABEL_97;
    }
  }
  PropVariantClear(v49);
  *(_OWORD *)pvar = 0LL;
  v46 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
         *v13,
         &PKEY_Endpoint_IsEnumerable,
         pvar) >= 0
    && LOWORD(pvar[0]) == 11
    && !LOWORD(pvar[1]) )
  {
    *((_BYTE *)this + 8236) = 0;
  }
  PropVariantClear(pvar);
  v52 = 0LL;
  v17 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))(*v7)->lpVtbl->QueryInterface)(
          *v7,
          &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21,
          &v52);
  v9 = v17;
  if ( v17 >= 0 )
  {
    v18 = (__int64 *)((char *)this + 80);
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v52 + 40LL))(v52, 0LL, (char *)this + 80);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x12E,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v19);
    if ( *v18 )
    {
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v52 + 40LL))(v52, 2LL, (char *)this + 88);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x131,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v20);
    }
    v48 = 0LL;
    DriverEffectPackInstance = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))(*v7)->lpVtbl->QueryInterface)(
                                 *v7,
                                 &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                 &v48);
    v9 = DriverEffectPackInstance;
    if ( DriverEffectPackInstance < 0 )
    {
      v42 = 309LL;
    }
    else
    {
      DriverEffectPackInstance = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v48 + 24LL))(v48, &v51);
      v9 = DriverEffectPackInstance;
      if ( DriverEffectPackInstance < 0 )
      {
        v42 = 312LL;
      }
      else
      {
        *((_DWORD *)this + 53) = v51 != 0;
        v22 = *(__int64 (__fastcall **)(struct IEndpointResourceManagerProvider *, CEndpointCharacteristics *, GUID *, char *))(*(_QWORD *)v53 + 24LL);
        v23 = *((_QWORD *)this + 7);
        *((_QWORD *)this + 7) = 0LL;
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        DriverEffectPackInstance = v22(v53, this, &GUID_00000000_0000_0000_c000_000000000046, (char *)this + 56);
        v9 = DriverEffectPackInstance;
        if ( DriverEffectPackInstance < 0 )
        {
          v42 = 316LL;
        }
        else
        {
          DriverEffectPackInstance = EffectPack::CreateDriverEffectPackInstance(
                                       *v13,
                                       *v18,
                                       (__int64)this,
                                       *((_QWORD *)this + 1036),
                                       (__int64)this + 368);
          v9 = DriverEffectPackInstance;
          if ( DriverEffectPackInstance >= 0 )
          {
            v24 = *v13;
            *((_QWORD *)this + 57) = this;
            *((_QWORD *)this + 58) = v56;
            *((_QWORD *)this + 59) = v24;
            *(_OWORD *)pvar = 0LL;
            v46 = 0LL;
            v25 = (*(int (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v24 + 40LL))(
                    v24,
                    &PKEY_Endpoint_KeywordDetector_ConnectorId,
                    pvar) >= 0
               && LOWORD(pvar[0]) == 19;
            *((_DWORD *)this + 58) = v25;
            PropVariantClear(pvar);
            *(_OWORD *)pvar = 0LL;
            v46 = 0LL;
            (*(void (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
              *v13,
              &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
              pvar);
            *((_BYTE *)this + 8234) = LOWORD(pvar[0]) == 72;
            PropVariantClear(pvar);
            *(_OWORD *)pvar = 0LL;
            v46 = 0LL;
            (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
              *v13,
              &PKEY_ConnectorProcessingModes_Available_When_EnhancementsDisabled,
              pvar);
            v26 = LOWORD(pvar[0]) == 11 && LOWORD(pvar[1]) == 0xFFFF;
            *((_BYTE *)this + 8235) = v26;
            PropVariantClear(pvar);
            *(_OWORD *)v49 = 0LL;
            v50 = 0LL;
            v9 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
                   *v13,
                   &PKEY_AudioEngine_LatencyCoefficient,
                   v49);
            v27 = 0;
            if ( v9 < 0 )
            {
              v43 = 347LL;
            }
            else
            {
              v28 = LOWORD(v49[0]) == 19;
              if ( LOWORD(v49[0]) == 19 )
                goto LABEL_48;
              if ( !LOWORD(v49[0]) )
              {
                v28 = 0;
LABEL_48:
                if ( v28 )
                  v27 = (int)v49[1];
                *((_DWORD *)this + 52) = v27;
                PropVariantClear(v49);
                *(_OWORD *)pvar = 0LL;
                v46 = 0LL;
                if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)*v13 + 40LL))(
                       *v13,
                       &PKEY_MMDEVAPI_ActiveTime,
                       pvar) >= 0
                  && LOWORD(pvar[0]) == 21 )
                {
                  *((PROPVARIANT *)this + 27) = pvar[1];
                }
                else
                {
                  *((_QWORD *)this + 27) = 0LL;
                }
                PropVariantClear(pvar);
                *((_DWORD *)this + 59) = 0;
                DriverEffectPackInstance = CEndpointCharacteristics::DiscoverConnectorCapabilities(this);
                v9 = DriverEffectPackInstance;
                if ( DriverEffectPackInstance < 0 )
                {
                  v42 = 369LL;
                }
                else
                {
                  DriverEffectPackInstance = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this);
                  v9 = DriverEffectPackInstance;
                  if ( DriverEffectPackInstance >= 0 )
                  {
                    if ( EffectPackConfiguration::AposRegisteredAsSfxMfxEfx(*(EffectPackConfiguration **)(*((_QWORD *)this + 46) + 1272LL))
                      || EffectPackConfiguration::AposRegisteredAsLfxGfx(v29) )
                    {
                      std::vector<std::shared_ptr<EffectPack>>::emplace_back<std::shared_ptr<EffectPack> &>(
                        (char *)this + 328,
                        (char *)this + 368);
                    }
                    v57[0] = off_18017ACC0;
                    v57[1] = this;
                    v58 = v57;
                    v30 = EffectPackConfigurationManager::ForEachEffectPackConfiguration(
                            g_effectPackConfigurationManager,
                            v57);
                    if ( v30 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x180,
                        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                        (const char *)(unsigned int)v30);
                    if ( v58 )
                    {
                      v31 = v57;
                      LOBYTE(v31) = v58 != v57;
                      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v58 + 32LL))(v58, v31);
                    }
                    v32 = CEndpointCharacteristics::DetermineCurrentEffectPack(this);
                    if ( v32 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x183,
                        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                        (const char *)(unsigned int)v32);
                    if ( !v51 )
                    {
                      pv = 0LL;
                      pvar[0] = &pv;
                      pvar[1] = 0LL;
                      LOBYTE(v46) = 1;
                      DeviceFormat = EffectPack::GetDeviceFormat(
                                       *((CEndpointCharacteristics ***)this + 44),
                                       0LL,
                                       0LL,
                                       0,
                                       (struct tWAVEFORMATEX **)&pvar[1]);
                      if ( DeviceFormat < 0 )
                      {
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x18C,
                          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                          (const char *)(unsigned int)DeviceFormat);
                        v34 = 1;
                      }
                      else
                      {
                        v34 = 0;
                      }
                      if ( (_BYTE)v46 )
                      {
                        v35 = *(void **)pvar[0];
                        *(_QWORD *)pvar[0] = pvar[1];
                        if ( v35 )
                          CoTaskMemFree(v35);
                      }
                      if ( v34 )
                      {
                        v40 = pv;
                        pv = 0LL;
                        if ( v40 )
                          CoTaskMemFree(v40);
                      }
                      v36 = CSpatialProperties::Initialize(
                              (CEndpointCharacteristics *)((char *)this + 416),
                              *((struct EffectPack **)this + 44),
                              (struct tWAVEFORMATEX *)pv);
                      if ( v36 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x190,
                          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                          (const char *)(unsigned int)v36);
                      v37 = SpatialPolicy::DetectComboEndpoint(*((const struct _tlgProvider_t **)this + 1036), *v7);
                      if ( v37 < 0 )
                        wil::details::in1diag3::_Log_Hr(
                          retaddr,
                          (void *)0x197,
                          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                          (const char *)(unsigned int)v37);
                      v38 = pv;
                      pv = 0LL;
                      if ( v38 )
                        CoTaskMemFree(v38);
                    }
                    *((_BYTE *)this + 8296) = 1;
                    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v48);
                    v9 = 0;
                    goto LABEL_77;
                  }
                  v42 = 371LL;
                }
                goto LABEL_103;
              }
              v9 = -2147418113;
              v43 = 348LL;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v43,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v9,
              v44);
            PropVariantClear(v49);
            goto LABEL_106;
          }
          v42 = 319LL;
        }
      }
    }
LABEL_103:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v42,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DriverEffectPackInstance,
      v44);
LABEL_106:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v48);
    goto LABEL_77;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12C,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v17,
    v44);
LABEL_77:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v52);
  return (unsigned int)v9;
}
