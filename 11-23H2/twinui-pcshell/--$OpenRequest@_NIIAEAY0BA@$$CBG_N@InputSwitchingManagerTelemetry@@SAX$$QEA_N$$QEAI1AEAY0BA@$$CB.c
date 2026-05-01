/*
 * XREFs of ??$OpenRequest@_NIIAEAY0BA@$$CBG_N@InputSwitchingManagerTelemetry@@SAX$$QEA_N$$QEAI1AEAY0BA@$$CBG0@Z @ 0x1806FE7F8
 * Callers:
 *     ??R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ @ 0x1806FF72C (--R_lambda_711bfd1af15e27d1f27b55343e53885b_@@QEBA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1802EADEA (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapper.c)
 *     ?get@?$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerTelemetry@@P6AXXZ@Z @ 0x1802EB490 (-get@-$static_lazy@VInputSwitchingManagerTelemetry@@@details@wil@@QEAAPEAVInputSwitchingManagerT.c)
 */

char InputSwitchingManagerTelemetry::OpenRequest<bool,unsigned int,unsigned int,unsigned short const (&)[16],bool>(
        char *a1,
        _DWORD *a2,
        int *a3,
        ...)
{
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // cl
  char v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v13; // [rsp+58h] [rbp-18h] BYREF
  __int64 v14; // [rsp+60h] [rbp-10h] BYREF
  __int64 v15; // [rsp+68h] [rbp-8h] BYREF
  __int64 v16; // [rsp+98h] [rbp+28h] BYREF
  va_list va; // [rsp+98h] [rbp+28h]
  char *v18; // [rsp+A0h] [rbp+30h]
  va_list va1; // [rsp+A8h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, char *);
  v6 = wil::details::static_lazy<InputSwitchingManagerTelemetry>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_e96d1fd5a37f2796eeb5af7e615ffb83_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v6[1] > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn(v6[1], 0x400000000000LL);
    if ( (_BYTE)v6 )
    {
      v14 = 50331648LL;
      v9 = *v18;
      v15 = (__int64)L"InputSwitchShow";
      v12 = *a3;
      LODWORD(v13) = *a2;
      v11 = *a1;
      LOBYTE(v16) = v9;
      LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v8,
                     (unsigned __int8 *)dword_18087BEDC,
                     v7,
                     v8,
                     (__int64)&v11,
                     (__int64)&v13,
                     (__int64)&v12,
                     (const WCHAR **)&v15,
                     (__int64)va,
                     (__int64)&v14);
    }
  }
  return (char)v6;
}
