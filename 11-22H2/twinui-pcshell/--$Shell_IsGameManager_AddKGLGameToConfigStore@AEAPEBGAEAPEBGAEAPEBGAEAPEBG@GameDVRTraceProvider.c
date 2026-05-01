/*
 * XREFs of ??$Shell_IsGameManager_AddKGLGameToConfigStore@AEAPEBGAEAPEBGAEAPEBGAEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG000@Z @ 0x1803DD694
 * Callers:
 *     ?IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z @ 0x1803DF32C (-IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333@Z @ 0x1803DD750 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@.c)
 */

char __fastcall GameDVRTraceProvider::Shell_IsGameManager_AddKGLGameToConfigStore<unsigned short const * &,unsigned short const * &,unsigned short const * &,unsigned short const * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v8; // rax
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  __int64 v15; // [rsp+58h] [rbp-10h] BYREF

  v8 = wil::details::static_lazy<GameDVRTraceProvider>::get(
         (__int64)a1,
         (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)v8[1];
  if ( *v9 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v9, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v12 = *a4;
      v13 = *a3;
      v14 = *a2;
      v15 = *a1;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                     v10,
                     (int)&dword_180847D14,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     (__int64)&v12);
    }
  }
  return (char)v8;
}
