/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D6C
 * Callers:
 *     _lambda_ab72ab04c21953f372991cfef701d912_::operator() @ 0x1800346F4 (_lambda_ab72ab04c21953f372991cfef701d912_--operator().c)
 *     ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180035800 (-LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z.c)
 *     ?ResetUserSettings@@YAXPEAVTSSession@@@Z @ 0x1800369EC (-ResetUserSettings@@YAXPEAVTSSession@@@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180036AA0 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180037458 (-TS_ServiceStart@@YAXXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x1800376B4 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180038214 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18003911C (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001158 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800165A0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+30h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  v9 = 0;
  v7 = a5;
  v8 = 4;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 3u, &v6);
}
