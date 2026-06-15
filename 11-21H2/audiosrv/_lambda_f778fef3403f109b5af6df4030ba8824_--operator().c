/*
 * XREFs of _lambda_f778fef3403f109b5af6df4030ba8824_::operator() @ 0x180069A04
 * Callers:
 *     wil::details::lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___::_lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___ @ 0x180068474 (wil--details--lambda_call__lambda_f778fef3403f109b5af6df4030ba8824___--_lambda_call__lambda_f778.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180143198 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTem.c)
 */

__int64 __fastcall lambda_f778fef3403f109b5af6df4030ba8824_::operator()(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  int v4; // ecx
  signed int *v5; // rax
  int v6; // r8d
  int v7; // r9d
  int v8; // [rsp+60h] [rbp+8h] BYREF
  GUID *v9; // [rsp+68h] [rbp+10h] BYREF
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  result = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 9784LL);
  if ( *(_DWORD *)v3 > 2u && (*(_BYTE *)(v3 + 16) & 0x10) != 0 )
  {
    result = *(_QWORD *)(v3 + 24) & 0x10LL;
    if ( result == *(_QWORD *)(v3 + 24) )
    {
      v4 = **(_DWORD **)(a1 + 24);
      v9 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v5 = *(signed int **)(a1 + 16);
      v8 = v4;
      v10 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*(_QWORD *)(a1 + 8), *v5);
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
               v3,
               (unsigned int)&unk_18018EE3F,
               v6,
               v7,
               (__int64)&v11,
               (__int64)&v10,
               (__int64)&v9,
               (__int64)&v8);
    }
  }
  return result;
}
