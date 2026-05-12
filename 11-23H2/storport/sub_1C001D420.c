/*
 * XREFs of sub_1C001D420 @ 0x1C001D420
 * Callers:
 *     sub_1C0013D54 @ 0x1C0013D54 (sub_1C0013D54.c)
 *     sub_1C001D070 @ 0x1C001D070 (sub_1C001D070.c)
 *     sub_1C001D530 @ 0x1C001D530 (sub_1C001D530.c)
 *     sub_1C001D5C8 @ 0x1C001D5C8 (sub_1C001D5C8.c)
 *     sub_1C001D8EC @ 0x1C001D8EC (sub_1C001D8EC.c)
 *     sub_1C001DA50 @ 0x1C001DA50 (sub_1C001DA50.c)
 *     sub_1C0021B28 @ 0x1C0021B28 (sub_1C0021B28.c)
 *     DoScreenSave @ 0x1C0034BE8 (DoScreenSave.c)
 *     sub_1C0037EE0 @ 0x1C0037EE0 (sub_1C0037EE0.c)
 *     sub_1C0049C54 @ 0x1C0049C54 (sub_1C0049C54.c)
 *     sub_1C004C4E8 @ 0x1C004C4E8 (sub_1C004C4E8.c)
 *     sub_1C004CB40 @ 0x1C004CB40 (sub_1C004CB40.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 *     sub_1C0061770 @ 0x1C0061770 (sub_1C0061770.c)
 *     sub_1C0062A44 @ 0x1C0062A44 (sub_1C0062A44.c)
 *     DoScreenSave_0 @ 0x1C0062D50 (DoScreenSave_0.c)
 *     sub_1C006BD2C @ 0x1C006BD2C (sub_1C006BD2C.c)
 *     sub_1C006C180 @ 0x1C006C180 (sub_1C006C180.c)
 *     sub_1C006D608 @ 0x1C006D608 (sub_1C006D608.c)
 *     sub_1C006DC00 @ 0x1C006DC00 (sub_1C006DC00.c)
 *     sub_1C006F440 @ 0x1C006F440 (sub_1C006F440.c)
 *     sub_1C006F918 @ 0x1C006F918 (sub_1C006F918.c)
 *     sub_1C006FDF8 @ 0x1C006FDF8 (sub_1C006FDF8.c)
 *     sub_1C0070108 @ 0x1C0070108 (sub_1C0070108.c)
 *     sub_1C0070474 @ 0x1C0070474 (sub_1C0070474.c)
 *     sub_1C00707BC @ 0x1C00707BC (sub_1C00707BC.c)
 *     sub_1C0070BFC @ 0x1C0070BFC (sub_1C0070BFC.c)
 *     sub_1C0071034 @ 0x1C0071034 (sub_1C0071034.c)
 *     sub_1C00711A4 @ 0x1C00711A4 (sub_1C00711A4.c)
 *     sub_1C0071348 @ 0x1C0071348 (sub_1C0071348.c)
 *     sub_1C007189C @ 0x1C007189C (sub_1C007189C.c)
 *     sub_1C0071BB8 @ 0x1C0071BB8 (sub_1C0071BB8.c)
 *     sub_1C00A2788 @ 0x1C00A2788 (sub_1C00A2788.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 *     sub_1C00A88F4 @ 0x1C00A88F4 (sub_1C00A88F4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C001D420(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&EventDescriptor.Id = *a2 << 24;
  *(_DWORD *)&EventDescriptor.Level = *(unsigned __int16 *)(a2 + 1);
  EventDescriptor.Keyword = *(_QWORD *)(a2 + 3);
  UserData->Ptr = (ULONGLONG)off_1C00930D0;
  UserData->Size = *(unsigned __int16 *)off_1C00930D0;
  UserData[1].Ptr = (ULONGLONG)(a2 + 11);
  UserData->Reserved = 2;
  UserData[1].Size = *(unsigned __int16 *)(a2 + 11);
  UserData[1].Reserved = 1;
  return EtwWriteTransfer(qword_1C00930E8, &EventDescriptor, 0LL, 0LL, UserDataCount, UserData);
}
