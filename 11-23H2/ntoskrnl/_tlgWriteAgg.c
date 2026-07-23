/*
 * XREFs of _tlgWriteAgg @ 0x140212E94
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140301BB0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403BFE04 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlCheckOplockForFsFilterCallback @ 0x14067E390 (FsRtlCheckOplockForFsFilterCallback.c)
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     CmLoadKey @ 0x1406957C0 (CmLoadKey.c)
 *     MiLogPinDriverAddressesWorker @ 0x1406ACCA0 (MiLogPinDriverAddressesWorker.c)
 *     MiLogPinDriverAddress @ 0x1406ACDB8 (MiLogPinDriverAddress.c)
 *     CmpBounceContextStart @ 0x1406DC350 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1406E2EA0 (NtQueryValueKey.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     EtwpWriteAppStateChangeSummary @ 0x140754090 (EtwpWriteAppStateChangeSummary.c)
 *     CmLoadAppKey @ 0x140769830 (CmLoadAppKey.c)
 *     PnpTraceInterruptConnection @ 0x14078EDC4 (PnpTraceInterruptConnection.c)
 *     PnpTraceDmaGuardDevicePolicy @ 0x140827CC4 (PnpTraceDmaGuardDevicePolicy.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x140852E70 (MiLogNonRetpolineImageLoadEvent.c)
 *     PnpTraceSetDevNodeProblem @ 0x1408696EC (PnpTraceSetDevNodeProblem.c)
 *     PnpTraceClearDevNodeProblem @ 0x14086984C (PnpTraceClearDevNodeProblem.c)
 *     NtCreateIoRing @ 0x14094A2B0 (NtCreateIoRing.c)
 *     HvpIsReadErrorTransient @ 0x140A2A6F0 (HvpIsReadErrorTransient.c)
 * Callees:
 *     InsertEventEntryInLookUpTable @ 0x140212F60 (InsertEventEntryInLookUpTable.c)
 *     ExtractAggregateFieldTypes @ 0x14021343C (ExtractAggregateFieldTypes.c)
 *     EtwWriteEx @ 0x1402582A0 (EtwWriteEx.c)
 */

NTSTATUS __fastcall tlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  NTSTATUS result; // eax
  char AggregateFieldTypes; // al
  int v11; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = (unsigned __int16 *)(a2 + 11);
  EventDescriptor.Keyword = v7;
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)v8;
  UserData[1].Size = *v8;
  UserData[1].Reserved = 1;
  result = -1073741811;
  if ( *(void (__fastcall **)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *))(a1 + 40) == TlgAggregateInternalRegisteredProviderEtwCallback )
  {
    AggregateFieldTypes = ExtractAggregateFieldTypes(TlgAggregateInternalRegisteredProviderEtwCallback, UserData);
    if ( AggregateFieldTypes )
    {
      LOBYTE(v11) = a4;
      return InsertEventEntryInLookUpTable(
               a1,
               (unsigned int)&EventDescriptor,
               v11,
               (_DWORD)UserData,
               AggregateFieldTypes);
    }
    else
    {
      return EtwWriteEx(*(_QWORD *)(a1 + 32), &EventDescriptor, 0LL, 0, 0LL, 0LL, a4, UserData);
    }
  }
  return result;
}
