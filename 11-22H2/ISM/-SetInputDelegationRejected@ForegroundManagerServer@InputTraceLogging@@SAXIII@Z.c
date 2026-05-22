/*
 * XREFs of ?SetInputDelegationRejected@ForegroundManagerServer@InputTraceLogging@@SAXIII@Z @ 0x18005FF6C
 * Callers:
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800B2C08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800B4E40 (-Provider@InputTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall InputTraceLogging::ForegroundManagerServer::SetInputDelegationRejected(int a1, int a2, int a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // r9d
  __int64 v8; // r8
  int v9; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v10[5]; // [rsp+44h] [rbp-14h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 4u )
  {
    v7 = *((_DWORD *)v6 + 4);
    if ( (v7 & 0x200) != 0 )
    {
      v8 = *((_QWORD *)v6 + 3) & 0x200LL;
      if ( v8 == *((_QWORD *)v6 + 3) )
      {
        v11 = a3;
        v9 = a2;
        v10[0] = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (_DWORD)v6,
          (unsigned int)&unk_18022F9E3,
          v8,
          v7,
          (__int64)v10,
          (__int64)&v9,
          (__int64)&v11);
      }
    }
  }
}
