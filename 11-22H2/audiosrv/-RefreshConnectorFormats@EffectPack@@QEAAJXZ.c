/*
 * XREFs of ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18014E718
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1801166DC (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 * Callees:
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800102C0 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x1800601E4 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180149F28 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014E974 (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18014EF6C (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x1801631B0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::RefreshConnectorFormats(EffectPack *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int CustomResourceManagerService; // eax
  unsigned int v5; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // edx
  const WCHAR *v8; // [rsp+30h] [rbp-40h] BYREF
  void *v9; // [rsp+38h] [rbp-38h] BYREF
  int v10[2]; // [rsp+40h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-28h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  if ( **((_DWORD **)this + 219) > 4u && tlgKeywordOn(*((_QWORD *)this + 219), 16LL) )
  {
    v8 = *(const WCHAR **)(*((_QWORD *)this + 161) + 48LL);
    *(_OWORD *)pvar = *(_OWORD *)*((_QWORD *)this + 159);
    *(_QWORD *)v10 = pvar;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      v3,
      byte_180195C73,
      v2,
      v3,
      (__int64 *)v10,
      &v8);
  }
  v9 = 0LL;
  CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                   *((CEndpointCharacteristics **)this + 161),
                                   &GUID_655e6959_84d5_43a4_b383_39d8f3094d70,
                                   &v9);
  v5 = CustomResourceManagerService;
  if ( CustomResourceManagerService >= 0 )
  {
    if ( v9 && (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v9 + 24LL))(v9) )
    {
      *(_OWORD *)pvar = 0LL;
      v13 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)(*((_QWORD *)this + 161) + 72LL) + 40LL))(
             *(_QWORD *)(*((_QWORD *)this + 161) + 72LL),
             &PKEY_Endpoint_IsBluetooth,
             pvar) >= 0
        && LOWORD(pvar[0]) == 11
        && LOWORD(pvar[1])
        && (*(int (__fastcall **)(_QWORD, const WCHAR **))(**(_QWORD **)(*((_QWORD *)this + 161) + 40LL) + 48LL))(
             *(_QWORD *)(*((_QWORD *)this + 161) + 40LL),
             &v8) >= 0
        && (_DWORD)v8 == 1 )
      {
        MicrosoftTelemetryAssertTriggeredArgs(0LL, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
      }
      PropVariantClear(pvar);
    }
    else
    {
      (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
        g_policyConfigInternal,
        &lpCriticalSection,
        *(_QWORD *)(*((_QWORD *)this + 161) + 48LL));
      EffectPack::RefreshDefaultConnectorFormats(this, v6);
      EffectPack::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL, 0);
      EffectPack::ResetDeviceFormat(this);
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x227D,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)CustomResourceManagerService);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v9);
  return v5;
}
