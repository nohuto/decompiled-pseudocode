/*
 * XREFs of ??$Shell_BroadcastDVRComponent_SendShellNotificationToDVR@AEAKAEAPEBGAEAPEAXAEA_NAEA_NAEA_NAEAK@GameDVRTraceProvider@@SAXAEAKAEAPEBGAEAPEAXAEA_N330@Z @ 0x1803D23E4
 * Callers:
 *     ?BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z @ 0x1803D6708 (-BroadcastDVRComponent_SendShellNotificationToDVR@GameDVRTraceProvider@@SAXKPEBGPEAX_N22K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z @ 0x18014980C (-get@-$static_lazy@VGameDVRTraceProvider@@@details@wil@@QEAAPEAVGameDVRTraceProvider@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U4@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@663@Z @ 0x1803D2A94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 */

__int64 *__fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_SendShellNotificationToDVR<unsigned long &,unsigned short const * &,void * &,bool &,bool &,bool &,unsigned long &>(
        _DWORD *a1,
        __int64 *a2,
        __int64 *a3,
        char *a4,
        char *a5,
        char *a6,
        int *a7)
{
  __int64 *result; // rax
  _DWORD *v12; // r10
  char v13; // cl
  char v14; // [rsp+60h] [rbp-20h] BYREF
  char v15; // [rsp+61h] [rbp-1Fh] BYREF
  char v16; // [rsp+62h] [rbp-1Eh] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  __int64 v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp-8h] BYREF

  result = wil::details::static_lazy<GameDVRTraceProvider>::get(
             (__int64)a1,
             (void (__cdecl *)())_lambda_2ba8abda6f2a4c5834755431f5f6ef9a_::_lambda_invoker_cdecl_);
  v12 = (_DWORD *)result[1];
  if ( *v12 > 5u )
  {
    v17 = *a7;
    v14 = *a6;
    v13 = *a5;
    v16 = *a4;
    v19 = *a3;
    v20 = *a2;
    LODWORD(v18) = *a1;
    v15 = v13;
    return (__int64 *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                        (int)v12,
                        (int)&dword_18084720B,
                        (__int64)&v18,
                        (__int64)&v20,
                        (__int64)&v19,
                        (__int64)&v16,
                        (__int64)&v15,
                        (__int64)&v14,
                        (__int64)&v17);
  }
  return result;
}
