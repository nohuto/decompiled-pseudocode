/*
 * XREFs of ?SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows@winrt@@W4FlyoutBoundsSource@SnapComponentTelemetry@@@Z @ 0x1806917BC
 * Callers:
 *     ??$SnapFlyoutInstance_CalculateFlyoutBounds@AEAURect@Foundation@Windows@winrt@@AEAW4FlyoutBoundsSource@SnapComponentTelemetry@@@SnapFlyoutTelemetry@@SAXAEAURect@Foundation@Windows@winrt@@AEAW4FlyoutBoundsSource@SnapComponentTelemetry@@@Z @ 0x18068D09C (--$SnapFlyoutInstance_CalculateFlyoutBounds@AEAURect@Foundation@Windows@winrt@@AEAW4FlyoutBounds.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18016B84C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

int __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds_(__int64 a1, int *a2, int a3)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v10; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+54h] [rbp-14h] BYREF
  _DWORD v12[4]; // [rsp+58h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = a1;
  v5 = wil::details::static_lazy<WindowManagementLogging>::get(
         a1,
         (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
  v8 = (_DWORD *)v5[1];
  if ( *v8 > 5u )
  {
    LODWORD(v13) = a2[3];
    v14 = a2[2];
    v10 = a2[1];
    v11 = *a2;
    v12[0] = a3;
    LODWORD(v5) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v8,
                    byte_1808757BE,
                    v6,
                    v7,
                    (__int64)v12,
                    (__int64)&v11,
                    (__int64)&v10,
                    (__int64)&v14,
                    (__int64)&v13);
  }
  return (int)v5;
}
