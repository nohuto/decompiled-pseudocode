/*
 * XREFs of sub_14024A9B0 @ 0x14024A9B0
 * Callers:
 *     sub_140211750 @ 0x140211750 (sub_140211750.c)
 *     sub_14024A824 @ 0x14024A824 (sub_14024A824.c)
 *     sub_1402A1948 @ 0x1402A1948 (sub_1402A1948.c)
 *     sub_1402A19AC @ 0x1402A19AC (sub_1402A19AC.c)
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 *     sub_140373DA0 @ 0x140373DA0 (sub_140373DA0.c)
 *     sub_140374708 @ 0x140374708 (sub_140374708.c)
 *     sub_1403985E0 @ 0x1403985E0 (sub_1403985E0.c)
 *     sub_1403B171C @ 0x1403B171C (sub_1403B171C.c)
 *     sub_1403B9DF8 @ 0x1403B9DF8 (sub_1403B9DF8.c)
 *     sub_1403B9F08 @ 0x1403B9F08 (sub_1403B9F08.c)
 *     sub_14045D27C @ 0x14045D27C (sub_14045D27C.c)
 *     sub_14045EA32 @ 0x14045EA32 (sub_14045EA32.c)
 *     sub_140580088 @ 0x140580088 (sub_140580088.c)
 *     sub_1405801E4 @ 0x1405801E4 (sub_1405801E4.c)
 *     sub_1405802D8 @ 0x1405802D8 (sub_1405802D8.c)
 *     sub_140583428 @ 0x140583428 (sub_140583428.c)
 *     sub_140593B18 @ 0x140593B18 (sub_140593B18.c)
 *     sub_1405B650C @ 0x1405B650C (sub_1405B650C.c)
 *     sub_1405B657C @ 0x1405B657C (sub_1405B657C.c)
 *     sub_1405B6618 @ 0x1405B6618 (sub_1405B6618.c)
 *     sub_1405B66D8 @ 0x1405B66D8 (sub_1405B66D8.c)
 *     sub_1405B6828 @ 0x1405B6828 (sub_1405B6828.c)
 *     sub_1405B6950 @ 0x1405B6950 (sub_1405B6950.c)
 *     sub_1405B77AC @ 0x1405B77AC (sub_1405B77AC.c)
 *     sub_1405DE550 @ 0x1405DE550 (sub_1405DE550.c)
 *     sub_1405DE728 @ 0x1405DE728 (sub_1405DE728.c)
 *     sub_1405DE840 @ 0x1405DE840 (sub_1405DE840.c)
 *     sub_1405DE9D4 @ 0x1405DE9D4 (sub_1405DE9D4.c)
 *     sub_1405DEB88 @ 0x1405DEB88 (sub_1405DEB88.c)
 *     sub_14062A42C @ 0x14062A42C (sub_14062A42C.c)
 *     sub_14062A570 @ 0x14062A570 (sub_14062A570.c)
 *     sub_14062A6D4 @ 0x14062A6D4 (sub_14062A6D4.c)
 *     sub_14062A7C8 @ 0x14062A7C8 (sub_14062A7C8.c)
 *     sub_14062A8C0 @ 0x14062A8C0 (sub_14062A8C0.c)
 *     sub_14062A9C0 @ 0x14062A9C0 (sub_14062A9C0.c)
 *     sub_14096B308 @ 0x14096B308 (sub_14096B308.c)
 *     sub_14096BE44 @ 0x14096BE44 (sub_14096BE44.c)
 *     sub_14096C6C4 @ 0x14096C6C4 (sub_14096C6C4.c)
 *     sub_14097471C @ 0x14097471C (sub_14097471C.c)
 *     sub_140974B60 @ 0x140974B60 (sub_140974B60.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 *     sub_1409755D4 @ 0x1409755D4 (sub_1409755D4.c)
 *     sub_140975748 @ 0x140975748 (sub_140975748.c)
 *     sub_14097F2B0 @ 0x14097F2B0 (sub_14097F2B0.c)
 *     sub_140B084F4 @ 0x140B084F4 (sub_140B084F4.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 */

NTSTATUS __fastcall sub_14024A9B0(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        ULONG a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  EVENT_DESCRIPTOR v9; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v9.Keyword = *(_QWORD *)(a2 + 3);
  a8->Ptr = *(_QWORD *)(a1 + 8);
  a8->Size = **(unsigned __int16 **)(a1 + 8);
  a8[1].Ptr = (ULONGLONG)(a2 + 11);
  a8->Reserved = 2;
  a8[1].Size = *(unsigned __int16 *)(a2 + 11);
  a8[1].Reserved = 1;
  return EtwWriteEx(*(_QWORD *)(a1 + 32), &v9, 0LL, a4, 0LL, 0LL, UserDataCount, a8);
}
