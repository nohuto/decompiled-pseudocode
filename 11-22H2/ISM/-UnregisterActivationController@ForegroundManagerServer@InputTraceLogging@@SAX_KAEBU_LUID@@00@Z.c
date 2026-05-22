/*
 * XREFs of ?UnregisterActivationController@ForegroundManagerServer@InputTraceLogging@@SAX_KAEBU_LUID@@00@Z @ 0x1800B61D0
 * Callers:
 *     ?UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x1800B6128 (-UnregisterActivationController@ForegroundManager@@QEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180020370 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333@Z @ 0x1800B2C9C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 */

void __fastcall InputTraceLogging::ForegroundManagerServer::UnregisterActivationController(
        __int64 a1,
        const struct _LUID *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-10h] BYREF

  v8 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v8 > 4u
    && (*(_DWORD *)(v8 + 16) & 0x8000LL) != 0
    && (*(_QWORD *)(v8 + 24) & 0x8000LL) == *(_QWORD *)(v8 + 24) )
  {
    v13 = (__int64)*a2;
    v11 = a4;
    v12 = a3;
    v14 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v8,
      byte_18022FA57,
      v9,
      v10,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
}
