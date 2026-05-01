/*
 * XREFs of ??$DashboardInteracted@Uguid@winrt@@IAEB_NPEBGPEBGAEAY0L@$$CBGAEAPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAIAEB_N$$QEAPEBG3AEAY0L@$$CBGAEAPEBG@Z @ 0x180693B40
 * Callers:
 *     _lambda_5ac696817d9ead6e33159563da3f5a7c_::operator() @ 0x1802364C4 (_lambda_5ac696817d9ead6e33159563da3f5a7c_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U4@U4@U4@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@666AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18005A69C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWra.c)
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

char __fastcall DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool const &,unsigned short const *,unsigned short const *,unsigned short const (&)[11],unsigned short const * &>(
        __int128 *a1,
        int *a2,
        char *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  __int128 v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v19; // [rsp+68h] [rbp-11h] BYREF
  int v20; // [rsp+6Ch] [rbp-Dh] BYREF
  __int64 v21; // [rsp+70h] [rbp-9h] BYREF
  __int64 v22; // [rsp+78h] [rbp-1h] BYREF
  __int64 v23; // [rsp+80h] [rbp+7h] BYREF
  __int64 v24; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+90h] [rbp+17h] BYREF
  __int64 v26; // [rsp+98h] [rbp+1Fh] BYREF
  __int128 v27; // [rsp+A0h] [rbp+27h] BYREF

  v11 = wil::details::static_lazy<DashboardManagerTelemetry>::get(
          (__int64)a1,
          (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v11[1] > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn(v11[1], 0x400000000000LL);
    if ( (_BYTE)v11 )
    {
      v15 = *a1;
      v21 = 50331648LL;
      v16 = *a7;
      v23 = (__int64)L"StartSwipe";
      v22 = v16;
      v27 = v15;
      v17 = *a5;
      v25 = *a4;
      v19 = *a3;
      v20 = *a2;
      v26 = (__int64)&v27;
      v24 = v17;
      LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                      v14,
                      (int)&dword_180876233,
                      v12,
                      v13,
                      &v26,
                      (__int64)&v20,
                      (__int64)&v19,
                      (const WCHAR **)&v25,
                      (const WCHAR **)&v24,
                      (const WCHAR **)&v23,
                      (const WCHAR **)&v22,
                      (__int64)&v21);
    }
  }
  return (char)v11;
}
