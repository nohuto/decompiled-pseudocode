/*
 * XREFs of ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1C00D1638
 * Callers:
 *     ??_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z @ 0x1C0069CA0 (--_GMiniportRemoveDeviceTelemetry@AzTelemetry@@UEAAPEAXI@Z.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006C6A0 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0023248 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00D133C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWr_ea_1C00D133C.c)
 */

void __fastcall AzTelemetry::MiniportRemoveDeviceTelemetry::~MiniportRemoveDeviceTelemetry(LARGE_INTEGER *this)
{
  unsigned __int64 v2; // rax
  LARGE_INTEGER v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int16 *v7; // [rsp+58h] [rbp+10h] BYREF
  LONGLONG v8; // [rsp+60h] [rbp+18h] BYREF

  this->QuadPart = (LONGLONG)&AzTelemetry::MiniportRemoveDeviceTelemetry::`vftable';
  if ( (unsigned int)dword_1C00F41D8 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00F41D8, 512LL) )
    {
      v2 = KStopwatch::Stop(this + 3);
      v3 = this[2];
      v6 = v2;
      v7 = *(unsigned __int16 **)(v3.QuadPart + 3856);
      v8 = v3.QuadPart + 4008;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
        v4,
        byte_1C00DF8DB,
        (const GUID *)(v3.QuadPart + 6060),
        v5,
        &v8,
        &v7,
        (__int64)&v6);
    }
  }
}
