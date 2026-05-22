/*
 * XREFs of ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800F40D0
 * Callers:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800F4250 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44@Z @ 0x1800F3D6C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?get@?$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry@@P6AXXZ@Z @ 0x1800F4620 (-get@-$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry.c)
 */

void __fastcall RawInputProvidersTelemetry::LogRawInputDeviceAttached(__int64 a1, __int16 a2, __int16 a3, __int16 a4)
{
  __int64 v5; // rbp
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // [rsp+40h] [rbp-18h] BYREF
  __int16 v12; // [rsp+42h] [rbp-16h] BYREF
  __int16 v13; // [rsp+44h] [rbp-14h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF

  v5 = (unsigned int)a1;
  v8 = *(_QWORD *)(wil::details::static_lazy<RawInputProvidersTelemetry>::get(
                     a1,
                     _lambda_57da4f32860180830fc4458af3e8f3e0_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v8 > 5u
    && (*(_QWORD *)(v8 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x400000000000LL) == *(_QWORD *)(v8 + 24) )
  {
    v11 = a4;
    v12 = a3;
    v13 = a2;
    v14 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      v8,
      byte_180232D4D,
      v9,
      v10,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
}
