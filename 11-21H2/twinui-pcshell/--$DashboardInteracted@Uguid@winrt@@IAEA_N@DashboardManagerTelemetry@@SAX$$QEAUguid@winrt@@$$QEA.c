/*
 * XREFs of ??$DashboardInteracted@Uguid@winrt@@IAEA_N@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEA_N@Z @ 0x1805BBE84
 * Callers:
 *     _lambda_50eab521f3249b7fa1c207805ae80cf1_::operator() @ 0x1801C4DA0 (_lambda_50eab521f3249b7fa1c207805ae80cf1_--operator().c)
 * Callees:
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x18002703C (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18017BCE8 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$0_ea_18017BCE8.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool &>(
        __int128 *a1,
        int *a2,
        _BYTE *a3)
{
  __int64 *v6; // rax
  _DWORD *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // xmm0
  _BYTE v13[4]; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+44h] [rbp-34h] BYREF
  __int64 v15; // [rsp+48h] [rbp-30h] BYREF
  __int128 *v16; // [rsp+50h] [rbp-28h] BYREF
  __int128 v17; // [rsp+58h] [rbp-20h] BYREF

  v6 = wil::details::static_lazy<DashboardManagerTelemetry>::get(
         (__int64)a1,
         _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  v7 = (_DWORD *)v6[1];
  if ( *v7 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v7, 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v11 = *a1;
      v13[0] = *a3;
      v14 = *a2;
      v16 = &v17;
      v17 = v11;
      v15 = 50331648LL;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v8,
                     byte_1806CC07F,
                     v9,
                     v10,
                     (__int64 *)&v16,
                     (__int64)&v14,
                     (__int64)v13,
                     (__int64)&v15);
    }
  }
  return (char)v6;
}
