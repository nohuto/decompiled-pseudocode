/*
 * XREFs of sub_180001554 @ 0x180001554
 * Callers:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_180001174 @ 0x180001174 (sub_180001174.c)
 *     sub_1800012B8 @ 0x1800012B8 (sub_1800012B8.c)
 *     sub_1800015F0 @ 0x1800015F0 (sub_1800015F0.c)
 *     sub_180001768 @ 0x180001768 (sub_180001768.c)
 *     sub_18000190C @ 0x18000190C (sub_18000190C.c)
 *     sub_180001A08 @ 0x180001A08 (sub_180001A08.c)
 *     sub_180001B44 @ 0x180001B44 (sub_180001B44.c)
 *     sub_180001C44 @ 0x180001C44 (sub_180001C44.c)
 *     sub_180001DDC @ 0x180001DDC (sub_180001DDC.c)
 *     sub_1800020C8 @ 0x1800020C8 (sub_1800020C8.c)
 *     sub_180002274 @ 0x180002274 (sub_180002274.c)
 *     sub_18000250C @ 0x18000250C (sub_18000250C.c)
 *     sub_18000265C @ 0x18000265C (sub_18000265C.c)
 *     sub_1800029D4 @ 0x1800029D4 (sub_1800029D4.c)
 *     sub_180002B28 @ 0x180002B28 (sub_180002B28.c)
 *     sub_180002CAC @ 0x180002CAC (sub_180002CAC.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180001554(
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
