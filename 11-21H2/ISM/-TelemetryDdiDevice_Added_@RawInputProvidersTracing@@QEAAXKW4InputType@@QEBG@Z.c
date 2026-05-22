/*
 * XREFs of ?TelemetryDdiDevice_Added_@RawInputProvidersTracing@@QEAAXKW4InputType@@QEBG@Z @ 0x1800C3754
 * Callers:
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800C0DF0 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800BB8B4 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x1800BDE8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800BE5C0 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     ??1SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@XZ @ 0x1800BEC48 (--1SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@XZ.c)
 */

void __fastcall RawInputProvidersTracing::TelemetryDdiDevice_Added_(__int64 a1, int a2, int a3, unsigned __int16 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+40h] [rbp-78h] BYREF
  int v12; // [rsp+44h] [rbp-74h] BYREF
  __int64 v13; // [rsp+48h] [rbp-70h] BYREF
  __int64 v14; // [rsp+50h] [rbp-68h] BYREF
  HSTRING v15[8]; // [rsp+60h] [rbp-58h] BYREF

  RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties(
    (RawInputProvidersTracing::SpatialInputTelemetryProperties *)v15,
    a4);
  v8 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         v7,
         _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 4u
    && (*(_QWORD *)(v8 + 16) & 0x400000000000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x400000000000LL) == *(_QWORD *)(v8 + 24) )
  {
    v13 = (__int64)a4;
    v11 = a3;
    v12 = a2;
    v14 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v8,
      (unsigned __int8 *)dword_18020209A,
      v9,
      v10,
      (__int64)&v14,
      (__int64)&v12,
      (__int64)&v11,
      (unsigned __int16 **)&v13);
  }
  RawInputProvidersTracing::SpatialInputTelemetryProperties::~SpatialInputTelemetryProperties(v15);
}
