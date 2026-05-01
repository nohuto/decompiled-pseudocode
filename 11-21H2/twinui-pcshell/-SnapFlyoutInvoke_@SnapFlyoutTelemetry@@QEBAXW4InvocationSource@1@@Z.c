/*
 * XREFs of ?SnapFlyoutInvoke_@SnapFlyoutTelemetry@@QEBAXW4InvocationSource@1@@Z @ 0x1805B0548
 * Callers:
 *     ??$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4InvocationSource@0@@Z @ 0x1805AD734 (--$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4Inv.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x180091D44 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800C5B9C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

char __fastcall SnapFlyoutTelemetry::SnapFlyoutInvoke_(__int64 a1, int a2)
{
  _QWORD *v3; // rax
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = a1;
  v3 = wil::details::static_lazy<WindowManagementLogging>::get(
         a1,
         _lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v4 = (_DWORD *)v3[1];
  if ( *v4 > 5u )
  {
    LOBYTE(v3) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      LODWORD(v7) = a2;
      v8 = 0x2000000LL;
      LOBYTE(v3) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     v5,
                     byte_1806CB3E0,
                     0LL,
                     0LL,
                     (__int64)&v8,
                     (__int64)&v7);
    }
  }
  return (char)v3;
}
