/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002CB8C
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C002BBA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U4@U?$_tlgWrapperByVal@$03@@U5@U?$_tlgWrapperByVal@$00@@U6@U6@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@6AEBU?$_tlgWrapperByVal@$03@@7AEBU?$_tlgWrapperByVal@$00@@887@Z @ 0x1C0036C08 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U4@U?$_tlgWrapSz@G@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@6AEBU?$_tlgWrapSz@G@@6@Z @ 0x1C0036DA8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVa.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U?$_tlgWrapSz@G@@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@66666666666666666666666AEBU?$_tlgWrapSz@G@@777@Z @ 0x1C004CD0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_t_ea_1C004CD0C.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C0086CD4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        const _tlgProvider_t *hProvider,
        char *pEventMetadata,
        const _GUID *pActivityId,
        const _GUID *pRelatedActivityId,
        ULONG cData,
        _EVENT_DATA_DESCRIPTOR *pData)
{
  _EVENT_DESCRIPTOR desc; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&desc.Id = (unsigned __int8)*pEventMetadata << 24;
  *(_DWORD *)&desc.Level = *(unsigned __int16 *)(pEventMetadata + 1);
  desc.Keyword = *(_QWORD *)(pEventMetadata + 3);
  pData->Ptr = (unsigned __int64)hProvider->ProviderMetadataPtr;
  pData->Size = *hProvider->ProviderMetadataPtr;
  pData->Reserved = 2;
  pData[1].Ptr = (unsigned __int64)(pEventMetadata + 11);
  pData[1].Size = *(unsigned __int16 *)(pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(hProvider->RegHandle, &desc, pActivityId, pRelatedActivityId, cData, pData);
}
