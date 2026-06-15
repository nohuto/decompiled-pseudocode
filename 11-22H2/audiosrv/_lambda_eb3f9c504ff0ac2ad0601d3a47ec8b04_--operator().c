/*
 * XREFs of _lambda_eb3f9c504ff0ac2ad0601d3a47ec8b04_::operator() @ 0x18007571C
 * Callers:
 *     wil::details::lambda_call__lambda_eb3f9c504ff0ac2ad0601d3a47ec8b04___::_lambda_call__lambda_eb3f9c504ff0ac2ad0601d3a47ec8b04___ @ 0x180074208 (wil--details--lambda_call__lambda_eb3f9c504ff0ac2ad0601d3a47ec8b04___--_lambda_call__lambda_eb3f.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801494A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 */

void __fastcall lambda_eb3f9c504ff0ac2ad0601d3a47ec8b04_::operator()(__int64 a1)
{
  int v1; // r8d
  int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // r11
  int v5; // ecx
  __int128 v6; // xmm0
  int v7; // [rsp+50h] [rbp+17h] BYREF
  __int64 v8; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v9; // [rsp+60h] [rbp+27h] BYREF
  __int128 *v10; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v11; // [rsp+70h] [rbp+37h] BYREF
  __int128 v12; // [rsp+78h] [rbp+3Fh] BYREF

  if ( **(_DWORD **)(*(_QWORD *)a1 + 1752LL) > 2u )
  {
    if ( tlgKeywordOn(*(_QWORD *)(*(_QWORD *)a1 + 1752LL), 16LL) )
    {
      v5 = **(_DWORD **)(v3 + 16);
      v8 = *(_QWORD *)(v3 + 8);
      v9 = v8;
      v7 = v5;
      v6 = *(_OWORD *)*(_QWORD *)(v4 + 1272);
      v10 = &v12;
      v12 = v6;
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 1288) + 48LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v2,
        (unsigned int)&unk_180195D01,
        v1,
        v2,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7);
    }
  }
}
