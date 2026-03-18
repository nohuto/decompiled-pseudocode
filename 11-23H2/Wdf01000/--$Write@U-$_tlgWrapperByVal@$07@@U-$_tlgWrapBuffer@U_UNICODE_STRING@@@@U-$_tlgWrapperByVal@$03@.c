/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C002BBA8
 * Callers:
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C002BE40 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002CB8C (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

int __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        const _tlgProvider_t *pEventMetadata,
        const void *<wrappedArgs_0>,
        const _GUID *<wrappedArgs_1>,
        const _GUID *<wrappedArgs_2>,
        const _tlgWrapperByVal<8> *<wrappedArgs_3>,
        const _tlgWrapBuffer<_UNICODE_STRING> *hProvider,
        const _tlgWrapperByVal<4> *pEventMetadata_0,
        const _tlgWrapperByVal<4> *<writerArgs_0>)
{
  unsigned int Length; // ecx
  _EVENT_DATA_DESCRIPTOR data[7]; // [rsp+30h] [rbp-49h] BYREF

  data[6].Ptr = (unsigned __int64)<writerArgs_0>;
  data[5].Ptr = (unsigned __int64)pEventMetadata_0;
  data[3].Ptr = (unsigned __int64)&data[4].Size;
  *(_QWORD *)&data[6].Size = 4LL;
  *(_QWORD *)&data[5].Size = 4LL;
  *(_QWORD *)&data[3].Size = 2LL;
  Length = hProvider->Ptr->Length;
  data[4].Ptr = (unsigned __int64)hProvider->Ptr->Buffer;
  data[2].Ptr = (unsigned __int64)<wrappedArgs_3>;
  data[4].Size = Length;
  data[4].Reserved = 0;
  *(_QWORD *)&data[2].Size = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&Tlgg_TelemetryProviderProv, <wrappedArgs_0>, 0LL, 0LL, 7u, data);
}
