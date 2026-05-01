/*
 * XREFs of ??$DashboardInteracted@AEAU_GUID@@IAEA_NPEBGPEBGAEAY0BK@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAXAEAU_GUID@@$$QEAIAEA_N$$QEAPEBG3AEAY0BK@$$CBGAEAPEBG@Z @ 0x18005A55C
 * Callers:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18005A0D0 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U4@U4@U4@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@666AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18005A69C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWra.c)
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall DashboardManagerTelemetry::DashboardInteracted<_GUID &,unsigned int,bool &,unsigned short const *,unsigned short const *,unsigned short const (&)[26],unsigned short const * &>(
        __int128 *a1,
        int *a2,
        char *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 result; // rax
  int v12; // r10d
  __int128 v13; // xmm0
  __int64 v14; // rcx
  __int64 v15; // rcx
  char v16; // [rsp+68h] [rbp-11h] BYREF
  int v17; // [rsp+6Ch] [rbp-Dh] BYREF
  __int64 v18; // [rsp+70h] [rbp-9h] BYREF
  __int64 v19; // [rsp+78h] [rbp-1h] BYREF
  __int64 v20; // [rsp+80h] [rbp+7h] BYREF
  __int64 v21; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v22; // [rsp+90h] [rbp+17h] BYREF
  __int64 v23; // [rsp+98h] [rbp+1Fh] BYREF
  __int128 v24; // [rsp+A0h] [rbp+27h] BYREF

  result = wil::details::static_lazy<DashboardManagerTelemetry>::get(
             a1,
             _lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(result + 8) > 5u )
  {
    result = tlgKeywordOn(*(_QWORD *)(result + 8), 0x400000000000LL);
    if ( (_BYTE)result )
    {
      v13 = *a1;
      v18 = 50331648LL;
      v14 = *a7;
      v20 = (__int64)L"ToggleDashboardVisibility";
      v19 = v14;
      v24 = v13;
      v15 = *a5;
      v22 = *a4;
      v16 = *a3;
      v17 = *a2;
      v23 = (__int64)&v24;
      v21 = v15;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
               v12,
               (int)&dword_180876233,
               (__int64)&v23,
               (__int64)&v17,
               (__int64)&v16,
               (__int64)&v22,
               (__int64)&v21,
               (__int64)&v20,
               (__int64)&v19,
               (__int64)&v18);
    }
  }
  return result;
}
