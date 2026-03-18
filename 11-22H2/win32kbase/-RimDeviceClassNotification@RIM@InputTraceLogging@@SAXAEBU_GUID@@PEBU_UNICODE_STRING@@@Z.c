/*
 * XREFs of ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00B5ECC
 * Callers:
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C00C3A38 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A2238 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C01A1B98 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceClassNotification(
        const struct _GUID *a1,
        const struct _UNICODE_STRING *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  int v4; // r9d
  void *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 )
    v2 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v2 )
  {
    v6 = *(_QWORD *)&a1->Data1 - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( *(_QWORD *)&a1->Data1 == *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 )
      v6 = *(_QWORD *)a1->Data4 - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v6 && (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
    {
      v5 = &unk_1C0259633;
      goto LABEL_14;
    }
  }
  else if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
  {
    v5 = &unk_1C0259667;
LABEL_14:
    v7 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
      (unsigned int)&dword_1C0289810,
      (_DWORD)v5,
      v3,
      v4,
      (__int64)&v7);
  }
}
