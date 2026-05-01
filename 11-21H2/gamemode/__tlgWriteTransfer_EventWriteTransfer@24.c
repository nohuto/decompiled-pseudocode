/*
 * XREFs of __tlgWriteTransfer_EventWriteTransfer@24 @ 0x10001EBE
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@@Z @ 0x10001E70 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IP.c)
 *     _GetExpandedResourceExclusiveCpuCount@4 @ 0x10005B60 (_GetExpandedResourceExclusiveCpuCount@4.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall _tlgWriteTransfer_EventWriteTransfer(
        int a1,
        unsigned __int8 *a2,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  int v6; // ecx
  unsigned int v7; // eax
  ULONG v8; // eax
  EVENT_DESCRIPTOR EventDescriptor; // [esp+4h] [ebp-14h] BYREF
  int v11; // [esp+14h] [ebp-4h]

  v6 = *(_DWORD *)(a2 + 7);
  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  LODWORD(EventDescriptor.Keyword) = *(_DWORD *)(a2 + 3);
  v7 = *(_DWORD *)(a1 + 4);
  HIDWORD(EventDescriptor.Keyword) = v6;
  UserData->Ptr = v7;
  v8 = **(unsigned __int16 **)(a1 + 4);
  HIDWORD(UserData[1].Ptr) = 0;
  UserData->Size = v8;
  UserData->Reserved = 2;
  LODWORD(UserData[1].Ptr) = a2 + 11;
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  v11 = &_TraceLoggingMetadataEnd - (const UINT8 *)&_TraceLoggingMetadata;
  return EventWriteTransfer(
           *(_QWORD *)(a1 + 24),
           &EventDescriptor,
           ActivityId,
           RelatedActivityId,
           UserDataCount,
           UserData);
}
