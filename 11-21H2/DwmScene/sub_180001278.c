/*
 * XREFs of sub_180001278 @ 0x180001278
 * Callers:
 *     sub_180001008 @ 0x180001008 (sub_180001008.c)
 *     sub_180001314 @ 0x180001314 (sub_180001314.c)
 *     sub_180001410 @ 0x180001410 (sub_180001410.c)
 *     sub_180001510 @ 0x180001510 (sub_180001510.c)
 *     sub_1800017FC @ 0x1800017FC (sub_1800017FC.c)
 *     sub_180001A94 @ 0x180001A94 (sub_180001A94.c)
 *     sub_180001E0C @ 0x180001E0C (sub_180001E0C.c)
 *     sub_1800223D0 @ 0x1800223D0 (sub_1800223D0.c)
 *     sub_180022510 @ 0x180022510 (sub_180022510.c)
 *     sub_180023410 @ 0x180023410 (sub_180023410.c)
 *     sub_180023900 @ 0x180023900 (sub_180023900.c)
 *     sub_180023DE0 @ 0x180023DE0 (sub_180023DE0.c)
 *     sub_1800241F0 @ 0x1800241F0 (sub_1800241F0.c)
 *     sub_1800246C0 @ 0x1800246C0 (sub_1800246C0.c)
 *     sub_180025520 @ 0x180025520 (sub_180025520.c)
 *     sub_180025D00 @ 0x180025D00 (sub_180025D00.c)
 *     sub_180025EC0 @ 0x180025EC0 (sub_180025EC0.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall sub_180001278(
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
