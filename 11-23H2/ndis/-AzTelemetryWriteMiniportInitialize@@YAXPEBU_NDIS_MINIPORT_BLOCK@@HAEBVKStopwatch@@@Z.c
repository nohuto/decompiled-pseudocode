/*
 * XREFs of ?AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z @ 0x1C00234E0
 * Callers:
 *     ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C01171F8 (-ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x1C0023354 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00D1288 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$0.c)
 */

void __fastcall AzTelemetryWriteMiniportInitialize(
        const struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        const struct KStopwatch *a3)
{
  KStopwatch *v3; // r10
  __int64 v4; // r9
  int v5; // r11d
  int v6; // ecx
  __int64 ElapsedTimeInMilliseconds; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C00F41D8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 512LL) )
    {
      ElapsedTimeInMilliseconds = KStopwatch::GetElapsedTimeInMilliseconds(v3);
      v8 = *(_QWORD *)(v4 + 3856);
      v9[0] = v4 + 4008;
      v10 = v5;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v6,
        (unsigned int)&unk_1C00DFA2A,
        v4 + 6060,
        v4,
        (__int64)v9,
        (__int64)&v8,
        (__int64)&v10,
        (__int64)&ElapsedTimeInMilliseconds);
    }
  }
}
