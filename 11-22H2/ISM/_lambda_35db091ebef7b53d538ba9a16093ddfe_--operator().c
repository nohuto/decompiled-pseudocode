/*
 * XREFs of _lambda_35db091ebef7b53d538ba9a16093ddfe_::operator() @ 0x180063EB4
 * Callers:
 *     wil::details::lambda_call__lambda_35db091ebef7b53d538ba9a16093ddfe___::_lambda_call__lambda_35db091ebef7b53d538ba9a16093ddfe___ @ 0x180063E94 (wil--details--lambda_call__lambda_35db091ebef7b53d538ba9a16093ddfe___--_lambda_call__lambda_35db.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B2A70 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

ULONG __fastcall lambda_35db091ebef7b53d538ba9a16093ddfe_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  ULONG result; // eax

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 4) )
    result = EventActivityIdControl(4u, (LPGUID)(v1 + 24));
  *(_DWORD *)v1 = 2;
  if ( (unsigned int)dword_180275498 > 5 )
    return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
             &dword_180275498,
             &unk_18023313C,
             v1 + 8,
             0LL);
  return result;
}
