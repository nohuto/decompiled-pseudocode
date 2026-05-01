/*
 * XREFs of sub_180001104 @ 0x180001104
 * Callers:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 *     sub_180001074 @ 0x180001074 (sub_180001074.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_1800011EC @ 0x1800011EC (sub_1800011EC.c)
 *     sub_180001288 @ 0x180001288 (sub_180001288.c)
 *     sub_180001340 @ 0x180001340 (sub_180001340.c)
 *     sub_1800013C0 @ 0x1800013C0 (sub_1800013C0.c)
 *     sub_18000145C @ 0x18000145C (sub_18000145C.c)
 *     sub_180012470 @ 0x180012470 (sub_180012470.c)
 *     sub_180012EF4 @ 0x180012EF4 (sub_180012EF4.c)
 *     sub_1800131B4 @ 0x1800131B4 (sub_1800131B4.c)
 *     sub_180013784 @ 0x180013784 (sub_180013784.c)
 *     sub_180013C10 @ 0x180013C10 (sub_180013C10.c)
 *     HamAssociateActivityContext @ 0x180014660 (HamAssociateActivityContext.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180001104(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = *(_QWORD *)(a1 + 8);
  UserData->Size = **(unsigned __int16 **)(a1 + 8);
  UserData->Reserved = 2;
  UserData[1].Ptr = (ULONGLONG)(a2 + 11);
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EventWriteTransfer(*(_QWORD *)(a1 + 32), &EventDescriptor, a3, a4, UserDataCount, UserData);
}
