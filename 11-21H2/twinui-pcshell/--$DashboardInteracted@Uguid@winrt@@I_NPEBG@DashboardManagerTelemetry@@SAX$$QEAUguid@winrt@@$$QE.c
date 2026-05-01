/*
 * XREFs of ??$DashboardInteracted@Uguid@winrt@@I_NPEBG@DashboardManagerTelemetry@@SAX$$QEAUguid@winrt@@$$QEAI$$QEA_N$$QEAPEBG@Z @ 0x1801C1C74
 * Callers:
 *     _lambda_b5a77111c728e18e017b33cb0f4bfddb_::operator() @ 0x1801C5310 (_lambda_b5a77111c728e18e017b33cb0f4bfddb_--operator().c)
 *     _lambda_b61fe1c2b60bf875518a0bd6b3647bbb_::operator() @ 0x1801C54CC (_lambda_b61fe1c2b60bf875518a0bd6b3647bbb_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001FD0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWra.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 *     ?Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18017BD80 (-Provider@DashboardManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

char __fastcall DashboardManagerTelemetry::DashboardInteracted<winrt::guid,unsigned int,bool,unsigned short const *>(
        __int128 *a1,
        int *a2,
        char *a3,
        __int64 *a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // xmm0
  char v14; // [rsp+58h] [rbp+17h] BYREF
  int v15; // [rsp+5Ch] [rbp+1Bh] BYREF
  __int64 v16; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+68h] [rbp+27h] BYREF
  __int64 v18; // [rsp+70h] [rbp+2Fh] BYREF
  __int128 v19; // [rsp+78h] [rbp+37h] BYREF

  v8 = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v12 = *a1;
      v17 = *a4;
      v14 = *a3;
      v15 = *a2;
      v18 = (__int64)&v19;
      v19 = v12;
      v16 = 50331648LL;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                     v9,
                     (int)&dword_1806CC0DE,
                     v10,
                     v11,
                     &v18,
                     (__int64)&v15,
                     (__int64)&v14,
                     (const WCHAR **)&v17,
                     (__int64)&v16);
    }
  }
  return (char)v8;
}
