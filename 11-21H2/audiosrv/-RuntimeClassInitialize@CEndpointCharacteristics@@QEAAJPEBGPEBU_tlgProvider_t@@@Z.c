/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@@Z @ 0x180045CF8
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAPEBU_tlgProvider_t@@@Z @ 0x180043A30 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAPEBU_tlgProvider_t@@@Details@WRL@Mi.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CA8C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800462C0 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1800470E0 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x180049314 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A9F0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18004EF4C (-Initialize@CSpatialProperties@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x1800524A4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Details@WRL@Microsoft@@YAJPEAPEAUIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpropertykey@@@Z @ 0x18014E10C (--$MakeAndInitialize@VCHybridPropertyStore@@UIPropertyStore@@AEAPEAUIMMDevice@@AEAIAEAPEBU_tagpr.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        const struct _tlgProvider_t *a3)
{
  struct IUnknown **v6; // r12
  int v7; // ebx
  struct IUnknown *v8; // rsi
  ULONG (__stdcall *Release)(IUnknown *); // rdi
  int v10; // eax
  int ClassFromEndpointId; // eax
  _QWORD *v12; // rsi
  char v13; // di
  int v14; // eax
  struct IUnknown *v15; // rcx
  int v16; // eax
  struct IUnknown *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  char v20; // al
  int v21; // eax
  unsigned __int64 v22; // rdx
  __int64 i; // rcx
  int DeviceFormat; // eax
  void *v25; // rcx
  int v26; // eax
  int v27; // eax
  void *v28; // rcx
  void *v30; // rcx
  int v31; // [rsp+20h] [rbp-49h]
  int v32; // [rsp+20h] [rbp-49h]
  PROPVARIANT v33[2]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v34; // [rsp+40h] [rbp-29h]
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-21h] BYREF
  __int64 v36; // [rsp+58h] [rbp-11h]
  struct IUnknown *v37; // [rsp+60h] [rbp-9h] BYREF
  PROPVARIANT v38[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v39; // [rsp+78h] [rbp+Fh]
  void *v40; // [rsp+80h] [rbp+17h] BYREF
  struct IUnknown *v41; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v43; // [rsp+D0h] [rbp+67h] BYREF
  LPVOID pv; // [rsp+E0h] [rbp+77h] BYREF
  struct IUnknown *v45; // [rsp+E8h] [rbp+7Fh] BYREF

  v37 = 0LL;
  v45 = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 1223) = a3;
  *(_OWORD *)pvar = 0LL;
  v36 = 0LL;
  v6 = (struct IUnknown **)((char *)this + 16);
  v7 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)g_DeviceEnumerator + 40LL))(
         g_DeviceEnumerator,
         a2,
         (char *)this + 16);
  if ( v7 >= 0 )
  {
    v8 = *v6;
    Release = (*v6)->lpVtbl[1].Release;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (char *)this + 24,
      0LL);
    v10 = ((__int64 (__fastcall *)(struct IUnknown *, char *))Release)(v8, (char *)this + 24);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x154,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v10,
        v31);
    }
    else
    {
      ClassFromEndpointId = GetClassFromEndpointId(a2);
      *((_DWORD *)this + 8) = ClassFromEndpointId;
      v12 = (_QWORD *)((char *)this + 40);
      v13 = 1;
      if ( ClassFromEndpointId )
      {
        v41 = *v6;
        v40 = &unk_1801C1640;
        LODWORD(pv) = 1;
        v14 = Microsoft::WRL::Details::MakeAndInitialize<CHybridPropertyStore,IPropertyStore,IMMDevice * &,unsigned int &,_tagpropertykey const * &>(
                (char *)this + 40,
                &v41,
                &pv,
                &v40);
      }
      else
      {
        v14 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, char *))(*v6)->lpVtbl[1].AddRef)(
                *v6,
                2LL,
                (char *)this + 40);
      }
      v7 = v14;
      if ( v14 >= 0 )
      {
        v15 = v45;
        if ( v45 != *v6 )
        {
          ATL::AtlComQIPtrAssign(&v45, *v6, &GUID_67c5fc9c_29e1_4154_8307_84ed8edb5a21);
          v15 = v45;
        }
        if ( !v15 )
          goto LABEL_55;
        v16 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, char *))v15->lpVtbl[1].Release)(
                v15,
                0LL,
                (char *)this + 80);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x165,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v16,
            v31);
        v17 = v37;
        if ( v37 != *v6 )
        {
          ATL::AtlComQIPtrAssign(&v37, *v6, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
          v17 = v37;
        }
        if ( v17 )
        {
          v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v17->lpVtbl[1].QueryInterface)(v17, &v43);
          if ( v7 >= 0 )
          {
            v18 = *v12;
            *((_QWORD *)this + 243) = this;
            *((_QWORD *)this + 244) = a3;
            *((_QWORD *)this + 245) = v18;
            *((_DWORD *)this + 47) = v43 != 0;
            PropVariantClear(pvar);
            if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                   *v12,
                   &PKEY_Endpoint_KeywordDetector_ConnectorId,
                   pvar) < 0
              || (v19 = 1, LOWORD(pvar[0]) != 19) )
            {
              v19 = 0;
            }
            *((_DWORD *)this + 54) = v19;
            *(_OWORD *)v38 = 0LL;
            v39 = 0LL;
            (*(void (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
              *v12,
              &DEVPKEY_AudioEndpointPlugin_FactoryCLSID,
              v38);
            *((_BYTE *)this + 9726) = LOWORD(v38[0]) == 72;
            PropVariantClear(v38);
            *(_OWORD *)v33 = 0LL;
            v34 = 0LL;
            (*(void (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
              *v12,
              &PKEY_ConnectorProcessingModes_Available_When_EnhancementsDisabled,
              v33);
            if ( LOWORD(v33[0]) != 11 || (v20 = 1, LOWORD(v33[1]) != 0xFFFF) )
              v20 = 0;
            *((_BYTE *)this + 9727) = v20;
            PropVariantClear(v33);
            v7 = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this);
            if ( v7 >= 0 )
            {
              v7 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                     *v12,
                     &PKEY_AudioEngine_LatencyCoefficient,
                     pvar);
              if ( v7 >= 0 )
              {
                if ( LOWORD(pvar[0]) == 19 )
                {
                  v21 = (int)pvar[1];
                }
                else
                {
                  if ( LOWORD(pvar[0]) )
                  {
                    v7 = -2147418113;
                    goto LABEL_52;
                  }
                  v21 = 0;
                }
                *((_DWORD *)this + 46) = v21;
                PropVariantClear(pvar);
                if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                       *v12,
                       &PKEY_MMDEVAPI_ActiveTime,
                       pvar) >= 0
                  && LOWORD(pvar[0]) == 21 )
                {
                  *((PROPVARIANT *)this + 24) = pvar[1];
                }
                else
                {
                  *((_QWORD *)this + 24) = 0LL;
                }
                *((_DWORD *)this + 51) = 0;
                *((_DWORD *)this + 53) = 0;
                *((_DWORD *)this + 55) = 0;
                v7 = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this);
                if ( v7 >= 0 )
                {
                  v22 = 0LL;
                  for ( i = 0LL; i < 384; i += 96LL )
                  {
                    if ( v22 >= *((_QWORD *)this + 224)
                      || (*(_BYTE *)(i + *((_QWORD *)this + 225) + 52) = 1, v22 >= *((_QWORD *)this + 226))
                      || (*(_BYTE *)(i + *((_QWORD *)this + 227) + 52) = 1, v22 >= *((_QWORD *)this + 228)) )
                    {
                      _o_terminate(i);
                      __debugbreak();
                      JUMPOUT(0x1800860C9LL);
                    }
                    *(_BYTE *)(i + *((_QWORD *)this + 229) + 52) = 1;
                    ++v22;
                  }
                  if ( !v43 )
                  {
                    pv = 0LL;
                    v33[0] = &pv;
                    v33[1] = 0LL;
                    LOBYTE(v34) = 1;
                    DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(
                                     this,
                                     0LL,
                                     0LL,
                                     0,
                                     (struct tWAVEFORMATEX **)&v33[1]);
                    if ( DeviceFormat < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x1B1,
                        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                        (const char *)(unsigned int)DeviceFormat,
                        v32);
                    else
                      v13 = 0;
                    if ( (_BYTE)v34 )
                    {
                      v25 = *(void **)v33[0];
                      *(_QWORD *)v33[0] = v33[1];
                      if ( v25 )
                        CoTaskMemFree(v25);
                    }
                    if ( v13 )
                    {
                      v30 = pv;
                      pv = 0LL;
                      if ( v30 )
                        CoTaskMemFree(v30);
                    }
                    v26 = CSpatialProperties::Initialize(
                            (CEndpointCharacteristics *)((char *)this + 1904),
                            (const struct tWAVEFORMATEX *)pv);
                    if ( v26 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x1B5,
                        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                        (const char *)(unsigned int)v26,
                        v32);
                    v27 = SpatialPolicy::DetectComboEndpoint(
                            *((const struct _tlgProvider_t **)this + 1223),
                            (struct IMMDevice *)*v6);
                    if ( v27 < 0 )
                      wil::details::in1diag3::_Log_Hr(
                        retaddr,
                        (void *)0x1BC,
                        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                        (const char *)(unsigned int)v27,
                        v32);
                    v28 = pv;
                    pv = 0LL;
                    if ( v28 )
                      CoTaskMemFree(v28);
                  }
                  PropVariantClear(pvar);
                  v7 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                         *v12,
                         &PKEY_Endpoint_IsEnumerable,
                         pvar);
                  if ( v7 >= 0 && LOWORD(pvar[0]) == 11 && !LOWORD(pvar[1]) )
                    *((_BYTE *)this + 9728) = 0;
                  *(_OWORD *)v38 = 0LL;
                  v39 = 0LL;
                  *(_OWORD *)v33 = 0LL;
                  v34 = 0LL;
                  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                         *v12,
                         &PKEY_Endpoint_CustomResourceManager,
                         v38) >= 0
                    && LOWORD(v38[0]) == 72
                    && (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v12 + 40LL))(
                         *v12,
                         &PKEY_Endpoint_CustomResourceManagerContext,
                         v33) >= 0
                    && LOWORD(v33[0]) == 72 )
                  {
                    *(_OWORD *)((char *)this + 9748) = *(_OWORD *)v38[1];
                    *(_OWORD *)((char *)this + 9764) = *(_OWORD *)v33[1];
                  }
                  PropVariantClear(v33);
                  PropVariantClear(v38);
                }
              }
            }
          }
        }
        else
        {
LABEL_55:
          v7 = -2147467262;
        }
      }
    }
  }
LABEL_52:
  PropVariantClear(pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
  return (unsigned int)v7;
}
