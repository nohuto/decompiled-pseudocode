/*
 * XREFs of ?DeliverToObserver@Mouse@InputTraceLogging@@SAXAEBUAPP_MOUSE_INPUT_OBSERVER_PACKET@InputObservation@@@Z @ 0x180148B94
 * Callers:
 *     ?OnInputGenerated@?$CPointerInputObserverServer@$0L@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@@Z @ 0x180148CB0 (-OnInputGenerated@-$CPointerInputObserverServer@$0L@@@UEBAXAEBU_MIT_BASE_INPUT_OBSERVER_PACKET@@.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18001F2F0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x18014845C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapperByVal@$01@@.c)
 */

void __fastcall InputTraceLogging::Mouse::DeliverToObserver(
        const struct InputObservation::APP_MOUSE_INPUT_OBSERVER_PACKET *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+60h] [rbp-20h] BYREF
  int v6; // [rsp+64h] [rbp-1Ch] BYREF
  int v7; // [rsp+68h] [rbp-18h] BYREF
  __int64 v8; // [rsp+70h] [rbp-10h] BYREF
  __int16 v9; // [rsp+98h] [rbp+18h] BYREF
  int v10; // [rsp+A0h] [rbp+20h] BYREF
  int v11; // [rsp+A8h] [rbp+28h] BYREF

  v2 = *((_QWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                     (__int64)a1,
                     _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 4u
    && (*(_BYTE *)(v2 + 16) & 0x40) != 0
    && (*(_QWORD *)(v2 + 24) & 0x40LL) == *(_QWORD *)(v2 + 24) )
  {
    v9 = *((_WORD *)a1 + 28);
    v10 = *((_DWORD *)a1 + 9);
    v11 = *((_DWORD *)a1 + 8);
    v5 = *((_DWORD *)a1 + 7);
    v6 = *((_DWORD *)a1 + 6);
    v7 = *((_DWORD *)a1 + 10);
    v8 = *((_QWORD *)a1 + 1);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>>(
      v2,
      byte_180226040,
      v3,
      v4,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
