/*
 * XREFs of _lambda_133ffca213661c0098953024967f868b_::operator() @ 0x18014A988
 * Callers:
 *     wil::details::lambda_call__lambda_133ffca213661c0098953024967f868b___::_lambda_call__lambda_133ffca213661c0098953024967f868b___ @ 0x18014A590 (wil--details--lambda_call__lambda_133ffca213661c0098953024967f868b___--_lambda_call__lambda_133f.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18014EBF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801494A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 */

void __fastcall lambda_133ffca213661c0098953024967f868b_::operator()(__int64 a1)
{
  __int64 v1; // r8
  _DWORD *v2; // r9
  __int64 v3; // rax
  __int128 v4; // xmm0
  GUID *v5; // rax
  __int64 v6; // rax
  __int128 v7; // xmm0
  GUID *v8; // rax
  int v9; // [rsp+50h] [rbp-19h] BYREF
  GUID *v10; // [rsp+58h] [rbp-11h] BYREF
  GUID *v11; // [rsp+60h] [rbp-9h] BYREF
  __int64 v12; // [rsp+68h] [rbp-1h] BYREF
  const WCHAR *v13; // [rsp+70h] [rbp+7h] BYREF
  __int128 v14; // [rsp+78h] [rbp+Fh] BYREF
  GUID v15; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v16; // [rsp+98h] [rbp+2Fh] BYREF
  GUID v17; // [rsp+A8h] [rbp+3Fh] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD **)(*(_QWORD *)a1 + 8288LL);
  if ( *v2 > 5u )
  {
    v9 = **(_DWORD **)(a1 + 24);
    v3 = *(_QWORD *)(v1 + 352);
    if ( v3 )
    {
      v4 = *(_OWORD *)*(_QWORD *)(v3 + 1272);
      v5 = (GUID *)&v14;
      v14 = v4;
    }
    else
    {
      v15 = GUID_00000000_0000_0000_0000_000000000000;
      v5 = &v15;
    }
    v10 = v5;
    v6 = **(_QWORD **)(a1 + 16);
    if ( v6 )
    {
      v7 = *(_OWORD *)*(_QWORD *)(v6 + 1272);
      v8 = (GUID *)&v16;
      v16 = v7;
    }
    else
    {
      v17 = GUID_00000000_0000_0000_0000_000000000000;
      v8 = &v17;
    }
    v11 = v8;
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(const WCHAR **)(v1 + 48);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (__int64)v2,
      byte_1801965CC,
      v1,
      (__int64)v2,
      &v13,
      &v12,
      (__int64 *)&v11,
      (__int64 *)&v10,
      (__int64)&v9);
  }
}
