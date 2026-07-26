/*
 * XREFs of ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x1C0023E84
 * Callers:
 *     ??_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z @ 0x1C00D1790 (--_EMiniportDevicePnPEventNotify@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ?ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@@@Z @ 0x1C0117330 (-ndisMInvokeDevicePnPEventNotifyHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_DEVICE_PNP_EVENT@.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0023248 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00D1288 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$0.c)
 */

void __fastcall AzTelemetry::MiniportDevicePnPEventNotify::~MiniportDevicePnPEventNotify(LARGE_INTEGER *this)
{
  unsigned __int64 v2; // rax
  LARGE_INTEGER v3; // r8
  int v4; // ecx
  int v5; // r9d
  ULONG LowPart; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  LONGLONG v9; // [rsp+68h] [rbp+20h] BYREF

  this->QuadPart = (LONGLONG)&AzTelemetry::MiniportDevicePnPEventNotify::`vftable';
  if ( (unsigned int)dword_1C00F41D8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F41D8, 512LL) )
    {
      v2 = KStopwatch::Stop(this + 3);
      v3 = this[2];
      v7 = v2;
      LowPart = this[6].LowPart;
      v8 = *(_QWORD *)(v3.QuadPart + 3856);
      v9 = v3.QuadPart + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v4,
        (unsigned int)&unk_1C00DF976,
        v3.LowPart + 6060,
        v5,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&LowPart,
        (__int64)&v7);
    }
  }
}
