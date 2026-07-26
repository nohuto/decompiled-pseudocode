/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C00346F0
 * Callers:
 *     ?NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETER@@H@Z @ 0x1C0034658 (-NdisTraceLoggingRssConfiguration@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CONFIGURATION_PARAMETE.c)
 *     ?NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C008B974 (-NdisTraceLoggingPacketDirectConfigChanged@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z @ 0x1C008BE4C (-NdisTraceLoggingRareMiniportPath@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4NdisTLMiniportEvent@@H@Z.c)
 *     ?NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C008BEC8 (-NdisTraceLoggingRscConfigOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C008BF50 (-NdisTraceLoggingRscHardwareOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C1CC (-NdisTraceLoggingUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008C24C (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0023444 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v14 = 4LL;
  v12 = 4LL;
  v10 = 16LL;
  v9 = *a5;
  return tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C00F4210, a2, 0LL, 0LL, 5u, &v8);
}
