/*
 * XREFs of ?SnapRegionDetected_@CSnapComponentTelemetry@@QEBAXUtagPOINT@@W4SnapRegion@@KPEAUIImmersiveMonitor@@@Z @ 0x180663438
 * Callers:
 *     ??$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentTelemetry@@SAXAEAUtagPOINT@@AEBW4SnapRegion@@AEAK$$QEAPEAUIImmersiveMonitor@@@Z @ 0x18065D33C (--$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentT.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18001C4D0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ?GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA?AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUIImmersiveMonitor@@@Z @ 0x180660CB0 (-GetDistanceFromScreenEdge@CSnapComponentTelemetry@@SA-AUtagSIZE@@UtagPOINT@@W4SnapRegion@@PEAUI.c)
 *     ?GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA?AW4SnapRegion@SnapComponentTelemetry@@W42@@Z @ 0x180661710 (-GetTelemetrySnapRegion@CSnapComponentTelemetry@@SA-AW4SnapRegion@SnapComponentTelemetry@@W42@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::SnapRegionDetected_(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // r10d
  int v11; // [rsp+50h] [rbp-28h] BYREF
  int v12; // [rsp+54h] [rbp-24h] BYREF
  __int64 DistanceFromScreenEdge; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  v15 = a1;
  DistanceFromScreenEdge = CSnapComponentTelemetry::GetDistanceFromScreenEdge(a2, a3, a5);
  v8 = wil::details::static_lazy<WindowManagementLogging>::get(
         v7,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn(v8[1], 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v11 = HIDWORD(DistanceFromScreenEdge);
      LODWORD(v15) = a4;
      v12 = DistanceFromScreenEdge;
      LODWORD(DistanceFromScreenEdge) = CSnapComponentTelemetry::GetTelemetrySnapRegion(a3);
      v14 = 0x2000000LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                     v9,
                     (int)&unk_180871EED,
                     0,
                     0,
                     (__int64)&v14,
                     (__int64)&DistanceFromScreenEdge,
                     (__int64)&v12,
                     (__int64)&v11,
                     (__int64)&v15);
    }
  }
  return (char)v8;
}
