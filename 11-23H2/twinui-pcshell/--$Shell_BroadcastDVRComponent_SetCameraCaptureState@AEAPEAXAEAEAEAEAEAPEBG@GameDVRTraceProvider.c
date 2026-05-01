/*
 * XREFs of ??$Shell_BroadcastDVRComponent_SetCameraCaptureState@AEAPEAXAEAEAEAEAEAPEBG@GameDVRTraceProvider@@SAXAEAPEAXAEAE1AEAPEBG@Z @ 0x1803D24D0
 * Callers:
 *     ?BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z @ 0x1803D69A8 (-BroadcastDVRComponent_SetCameraCaptureState@GameDVRTraceProvider@@SAXPEAXEEPEBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapSz@G@@@Z @ 0x1803D2B90 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U-$_tlgWrapSz@G@@@-$_tlgWriteTempl.c)
 */

__int64 *__fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_SetCameraCaptureState<void * &,unsigned char &,unsigned char &,unsigned short const * &>(
        __int64 *a1,
        char *a2,
        char *a3,
        __int64 *a4)
{
  __int64 *result; // rax
  _DWORD *v9; // rcx
  char v10; // [rsp+40h] [rbp-28h] BYREF
  char v11; // [rsp+41h] [rbp-27h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF

  result = wil::details::static_lazy<GameDVRTraceProvider>::get(
             (__int64)a1,
             (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_);
  v9 = (_DWORD *)result[1];
  if ( *v9 > 5u )
  {
    v12 = *a4;
    v10 = *a3;
    v11 = *a2;
    v13 = *a1;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapSz<unsigned short>>(
                        (int)v9,
                        (int)&dword_180847AE4,
                        (__int64)&v13,
                        (__int64)&v11,
                        (__int64)&v10,
                        (__int64)&v12);
  }
  return result;
}
