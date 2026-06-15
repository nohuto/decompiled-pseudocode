/*
 * XREFs of _lambda_d0bbc5df9903ce20d8cc22f10d54c074_::operator() @ 0x180075618
 * Callers:
 *     wil::details::lambda_call__lambda_d0bbc5df9903ce20d8cc22f10d54c074___::_lambda_call__lambda_d0bbc5df9903ce20d8cc22f10d54c074___ @ 0x1800741E8 (wil--details--lambda_call__lambda_d0bbc5df9903ce20d8cc22f10d54c074___--_lambda_call__lambda_d0bb.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801494A0 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 */

void __fastcall lambda_d0bbc5df9903ce20d8cc22f10d54c074_::operator()(__int64 *a1)
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // edx
  signed int *v6; // rax
  __int128 v7; // xmm0
  int v8; // r8d
  int v9; // r9d
  int v10; // [rsp+50h] [rbp+17h] BYREF
  GUID *v11; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+60h] [rbp+27h] BYREF
  __int128 *v13; // [rsp+68h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+37h] BYREF
  __int128 v15; // [rsp+78h] [rbp+3Fh] BYREF

  v1 = *a1;
  v2 = *(_DWORD **)(*a1 + 1752);
  if ( *v2 > 2u )
  {
    if ( tlgKeywordOn(*(_QWORD *)(*a1 + 1752), 16LL) )
    {
      v4 = *(_QWORD *)(v3 + 8);
      v5 = **(_DWORD **)(v3 + 24);
      v11 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v6 = *(signed int **)(v3 + 16);
      v10 = v5;
      v12 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v4, *v6);
      v7 = *(_OWORD *)*(_QWORD *)(v1 + 1272);
      v13 = &v15;
      v15 = v7;
      v14 = *(_QWORD *)(*(_QWORD *)(v1 + 1288) + 48LL);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        (_DWORD)v2,
        (unsigned int)&unk_180195D01,
        v8,
        v9,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
}
