/*
 * XREFs of _lambda_74f3b6a8456f822ec0b17303298bac28_::operator() @ 0x180070D30
 * Callers:
 *     wil::details::lambda_call__lambda_74f3b6a8456f822ec0b17303298bac28___::_lambda_call__lambda_74f3b6a8456f822ec0b17303298bac28___ @ 0x180070D10 (wil--details--lambda_call__lambda_74f3b6a8456f822ec0b17303298bac28___--_lambda_call__lambda_74f3.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180024898 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180080F6A (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

char __fastcall lambda_74f3b6a8456f822ec0b17303298bac28_::operator()(__int64 a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 *v5; // rax
  int v7; // [rsp+48h] [rbp+10h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = AudioSrvTelemetryProvider::Provider(a1);
  if ( *(_DWORD *)v2 > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v2, 2LL);
    if ( (_BYTE)v2 )
    {
      v5 = *(__int64 **)a1;
      v7 = **(_DWORD **)(a1 + 8);
      v8 = *v5;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                     v4,
                     (unsigned int)&unk_1801914EA,
                     v3,
                     v4,
                     (__int64)&v8,
                     (__int64)&v7);
    }
  }
  return (char)v2;
}
