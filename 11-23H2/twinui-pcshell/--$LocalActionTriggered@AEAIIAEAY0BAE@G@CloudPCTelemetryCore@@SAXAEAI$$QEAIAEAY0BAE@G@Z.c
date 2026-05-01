/*
 * XREFs of ??$LocalActionTriggered@AEAIIAEAY0BAE@G@CloudPCTelemetryCore@@SAXAEAI$$QEAIAEAY0BAE@G@Z @ 0x180709898
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x180716018 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z @ 0x18070823C (-get@-$static_lazy@VCloudPCTelemetryCore@@@details@wil@@QEAAPEAVCloudPCTelemetryCore@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180709FCC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTempl.c)
 */

char __fastcall CloudPCTelemetryCore::LocalActionTriggered<unsigned int &,unsigned int,unsigned short (&)[260]>(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h] BYREF
  __int64 v12[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v6 = wil::details::static_lazy<CloudPCTelemetryCore>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_ea63a974ef55fc5057a8ed9c75a53795_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x800000000000LL);
    if ( (_BYTE)v6 )
    {
      LODWORD(v13) = *a2;
      LODWORD(v10) = *a1;
      v11 = 0x1000000LL;
      v12[0] = a3;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v8,
                     (int)&dword_18087C1B9,
                     (__int64)&v10,
                     (__int64)&v13,
                     (__int64)v12,
                     (__int64)&v11);
    }
  }
  return (char)v6;
}
