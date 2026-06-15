/*
 * XREFs of _lambda_84296fe18ba082025981336f3f60a145_::operator() @ 0x180068C54
 * Callers:
 *     wil::details::lambda_call__lambda_84296fe18ba082025981336f3f60a145___::_lambda_call__lambda_84296fe18ba082025981336f3f60a145___ @ 0x180068410 (wil--details--lambda_call__lambda_84296fe18ba082025981336f3f60a145___--_lambda_call__lambda_8429.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@4AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180143198 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTem.c)
 */

__int64 __fastcall lambda_84296fe18ba082025981336f3f60a145_::operator()(__int64 *a1)
{
  __int64 v1; // r9
  __int64 v3; // r8
  __int64 result; // rax
  int v5; // ecx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v1 = *a1;
  v3 = *(_QWORD *)(*a1 + 9784);
  if ( *(_DWORD *)v3 > 2u && (*(_BYTE *)(v3 + 16) & 0x10) != 0 )
  {
    result = *(_QWORD *)(v3 + 24) & 0x10LL;
    if ( result == *(_QWORD *)(v3 + 24) )
    {
      v5 = *(_DWORD *)a1[2];
      v7 = a1[1];
      v8 = v7;
      v6 = v5;
      v9 = *(_QWORD *)(v1 + 24);
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
               v3,
               (unsigned int)&unk_18018EE3F,
               v3,
               v1,
               (__int64)&v9,
               (__int64)&v8,
               (__int64)&v7,
               (__int64)&v6);
    }
  }
  return result;
}
