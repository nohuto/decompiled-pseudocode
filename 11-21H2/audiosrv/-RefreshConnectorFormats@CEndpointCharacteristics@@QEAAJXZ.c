/*
 * XREFs of ?RefreshConnectorFormats@CEndpointCharacteristics@@QEAAJXZ @ 0x18014BAA4
 * Callers:
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1800EA140 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180069AB0 (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C2254 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014BC54 (-RefreshDefaultConnectorFormats@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ @ 0x18014C020 (-ResetDeviceFormat@CEndpointCharacteristics@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18015BDB0 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::RefreshConnectorFormats(
        CEndpointCharacteristics *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v7; // edx
  PROPVARIANT pvar[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]
  void *v11; // [rsp+70h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+78h] [rbp+28h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+80h] [rbp+30h] BYREF

  v5 = *((_QWORD *)this + 1223);
  if ( *(_DWORD *)v5 > 4u
    && (*(_BYTE *)(v5 + 16) & 0x10) != 0
    && (*(_QWORD *)(v5 + 24) & 0x10LL) == *(_QWORD *)(v5 + 24) )
  {
    v11 = (void *)*((_QWORD *)this + 3);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v5,
      byte_18018EBDB,
      a3,
      a4,
      &v11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 242);
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 9680);
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  v6 = *(_QWORD *)((char *)this + 9748) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)((char *)this + 9756) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v6
    && (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &PKEY_Endpoint_IsBluetooth,
         pvar) >= 0
    && LOWORD(pvar[0]) == 11
    && LOWORD(pvar[1]) )
  {
    if ( (*(int (__fastcall **)(_QWORD, void **))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2), &v11) >= 0
      && (_DWORD)v11 == 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgs(0LL, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, struct _RTL_CRITICAL_SECTION **, _QWORD))(*(_QWORD *)g_policyConfigInternal + 24LL))(
      g_policyConfigInternal,
      &v12,
      *((_QWORD *)this + 3));
    CEndpointCharacteristics::RefreshDefaultConnectorFormats(this, v7);
    CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL, 0);
    CEndpointCharacteristics::ResetDeviceFormat(this);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v12);
  }
  PropVariantClear(pvar);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v13);
  return 0LL;
}
