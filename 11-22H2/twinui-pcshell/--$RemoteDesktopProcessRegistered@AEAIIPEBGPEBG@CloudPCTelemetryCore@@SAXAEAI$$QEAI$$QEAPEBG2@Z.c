/*
 * XREFs of ??$RemoteDesktopProcessRegistered@AEAIIPEBGPEBG@CloudPCTelemetryCore@@SAXAEAI$$QEAI$$QEAPEBG2@Z @ 0x180709944
 * Callers:
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x180717244 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z @ 0x18070823C (-get@-$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180709EBC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTe.c)
 */

char __fastcall CloudPCTelemetryCore::RemoteDesktopProcessRegistered<unsigned int &,unsigned int,unsigned short const *,unsigned short const *>(
        int *a1,
        int *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v8; // rax
  _DWORD *v9; // rcx
  int v10; // ecx
  int v12; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+54h] [rbp-24h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h] BYREF

  v8 = wil::details::static_lazy<CloudPCTelemetryCore>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_ea63a974ef55fc5057a8ed9c75a53795_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v9, 0x800000000000LL);
    if ( (_BYTE)v8 )
    {
      v15 = *a4;
      v16 = *a3;
      v12 = *a2;
      v13 = *a1;
      v14 = 0x1000000LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v10,
                     (int)&dword_18087C147,
                     (__int64)&v13,
                     (__int64)&v12,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14);
    }
  }
  return (char)v8;
}
