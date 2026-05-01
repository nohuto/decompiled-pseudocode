/*
 * XREFs of ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008A900
 * Callers:
 *     ?RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008AA20 (-RmpTelemetryTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$03@@43@Z @ 0x18008A834 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U1@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall RmpTelemetryLogGlobalState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // [rsp+60h] [rbp+27h] BYREF
  __int64 v6; // [rsp+68h] [rbp+2Fh] BYREF
  _QWORD v7[4]; // [rsp+70h] [rbp+37h] BYREF
  int v8; // [rsp+A0h] [rbp+67h] BYREF
  int v9; // [rsp+A8h] [rbp+6Fh] BYREF
  __int64 v10; // [rsp+B0h] [rbp+77h] BYREF
  __int64 v11; // [rsp+B8h] [rbp+7Fh] BYREF

  if ( *((_DWORD *)a1 + 77) )
  {
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 0x200000000001LL) )
    {
      v9 = *((_DWORD *)a1 + 76);
      v11 = *((_QWORD *)a1 + 37);
      v5 = *((_QWORD *)a1 + 36);
      v6 = *((_QWORD *)a1 + 35);
      v7[0] = *((_QWORD *)a1 + 34);
      v10 = 0x1000000LL;
      v8 = v3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v2,
        byte_1800C51B0,
        v3,
        v4,
        (__int64)v7,
        (__int64)&v6,
        (__int64)&v5,
        (__int64)&v11,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v10);
    }
    *((_QWORD *)a1 + 34) = 0LL;
    *((_QWORD *)a1 + 35) = -1LL;
    *((_QWORD *)a1 + 36) = 0LL;
    *((_QWORD *)a1 + 37) = 0LL;
    *((_DWORD *)a1 + 76) = 0;
    *((_DWORD *)a1 + 77) = 0;
  }
}
