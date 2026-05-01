/*
 * XREFs of ?SnapWindowFromSnapAssist_@CSnapComponentTelemetry@@QEAAXPEAUHWND__@@AEBURect@Foundation@Windows@@I@Z @ 0x18066BD00
 * Callers:
 *     ??$SnapWindowFromSnapAssist@AEAPEAUHWND__@@AEAURect@Foundation@Windows@@I@CSnapComponentTelemetry@@SAXAEAPEAUHWND__@@AEAURect@Foundation@Windows@@$$QEAI@Z @ 0x180669210 (--$SnapWindowFromSnapAssist@AEAPEAUHWND__@@AEAURect@Foundation@Windows@@I@CSnapComponentTelemetr.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180110E08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 */

void __fastcall CSnapComponentTelemetry::SnapWindowFromSnapAssist_(
        CSnapComponentTelemetry *this,
        HWND a2,
        const struct Windows::Foundation::Rect *a3,
        int a4)
{
  int v4; // esi
  _DWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+50h] [rbp-20h] BYREF
  int v11; // [rsp+54h] [rbp-1Ch] BYREF
  int v12; // [rsp+58h] [rbp-18h] BYREF
  int v13; // [rsp+5Ch] [rbp-14h] BYREF
  _DWORD v14[4]; // [rsp+60h] [rbp-10h] BYREF
  CSnapComponentTelemetry *v15; // [rsp+80h] [rbp+10h] BYREF

  v15 = this;
  v4 = (int)a2;
  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    LODWORD(v15) = *((_DWORD *)a3 + 3);
    v10 = *((_DWORD *)a3 + 2);
    v11 = *((_DWORD *)a3 + 1);
    v12 = *(_DWORD *)a3;
    v13 = a4;
    v14[0] = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      byte_18087390B,
      v8,
      v9,
      (__int64)v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v15);
  }
}
