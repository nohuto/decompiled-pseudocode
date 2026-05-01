/*
 * XREFs of ??$Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@AEAJAEAJAEAKAEAK@GameDVRTraceProvider@@SAXAEAJ0AEAK1@Z @ 0x180148A2C
 * Callers:
 *     ?BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z @ 0x180148D40 (-BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit@GameDVRTraceProvider@@SAXJJKK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x1800E4524 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 */

int __fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_OneSettingsKGLDataNotification_OnExit<long &,long &,unsigned long &,unsigned long &>(
        _DWORD *a1,
        int *a2,
        int *a3,
        int *a4)
{
  __int64 v8; // rax
  __int64 v9; // r9
  _DWORD *v10; // rcx
  int v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+44h] [rbp-14h] BYREF
  int v14; // [rsp+48h] [rbp-10h] BYREF
  _DWORD v15[3]; // [rsp+4Ch] [rbp-Ch] BYREF

  v8 = wil::details::static_lazy<GameDVRTraceProvider>::get(
         a1,
         _lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_);
  v10 = *(_DWORD **)(v8 + 8);
  if ( *v10 > 5u )
  {
    v12 = *a4;
    v13 = *a3;
    v14 = *a2;
    v15[0] = *a1;
    LODWORD(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v10,
                    byte_180847630,
                    0LL,
                    v9,
                    (__int64)v15,
                    (__int64)&v14,
                    (__int64)&v13,
                    (__int64)&v12);
  }
  return v8;
}
