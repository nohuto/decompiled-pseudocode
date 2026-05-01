/*
 * XREFs of ?PPIWin32VtcSideBarLayoutItemsReflowed_@TabletModeTelemetry@@QEAAXHI_N@Z @ 0x1805CDE4C
 * Callers:
 *     ??$PPIWin32VtcSideBarLayoutItemsReflowed@IAEAI_N@TabletModeTelemetry@@SAX$$QEAIAEAI$$QEA_N@Z @ 0x1805CCDA4 (--$PPIWin32VtcSideBarLayoutItemsReflowed@IAEAI_N@TabletModeTelemetry@@SAX$$QEAIAEAI$$QEA_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AXXZ@Z @ 0x1801105A4 (-get@-$static_lazy@VWindowManagementLogging@@@details@wil@@QEAAPEAVWindowManagementLogging@@P6AX.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1805CCFB4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall TabletModeTelemetry::PPIWin32VtcSideBarLayoutItemsReflowed_(
        TabletModeTelemetry *this,
        int a2,
        int a3,
        char a4)
{
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v12[5]; // [rsp+44h] [rbp-14h] BYREF
  TabletModeTelemetry *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = this;
  v7 = (_DWORD *)wil::details::static_lazy<WindowManagementLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_)[1];
  if ( *v7 > 5u )
  {
    if ( tlgKeywordOn((__int64)v7, 0x200000000000LL) )
    {
      LOBYTE(v13) = a4;
      v11 = a3;
      v12[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v8,
        byte_18086BF33,
        v9,
        v10,
        (__int64)v12,
        (__int64)&v11,
        (__int64)&v13);
    }
  }
}
