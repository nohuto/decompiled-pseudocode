/*
 * XREFs of ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00142EC
 * Callers:
 *     ??_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1C00D17C0 (--_EMiniportHaltTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ?ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z @ 0x1C010F580 (-ndisMInvokeHalt@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_HALT_ACTION@@@Z.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C00230B8 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     _tlgKeywordOn @ 0x1C0023378 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00D1268 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$0.c)
 */

void __fastcall AzTelemetry::MiniportHaltTelemetry::~MiniportHaltTelemetry(AzTelemetry::MiniportHaltTelemetry *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  int v4; // ecx
  int v5; // r9d
  int v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)this = &AzTelemetry::MiniportHaltTelemetry::`vftable';
  if ( (unsigned int)dword_1C00F41D8 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 512LL) )
    {
      v2 = KStopwatch::Stop((AzTelemetry::MiniportHaltTelemetry *)((char *)this + 24));
      v3 = *((_QWORD *)this + 2);
      v7 = v2;
      v6 = *((_DWORD *)this + 12);
      v8 = *(_QWORD *)(v3 + 3856);
      v9 = v3 + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        (unsigned int)&unk_1C00DF9D9,
        v3 + 6060,
        v5,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v6,
        (__int64)&v7);
    }
  }
}
