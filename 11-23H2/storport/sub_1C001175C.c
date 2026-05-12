/*
 * XREFs of sub_1C001175C @ 0x1C001175C
 * Callers:
 *     sub_1C000EF50 @ 0x1C000EF50 (sub_1C000EF50.c)
 *     sub_1C0010F40 @ 0x1C0010F40 (sub_1C0010F40.c)
 *     sub_1C00130BC @ 0x1C00130BC (sub_1C00130BC.c)
 *     sub_1C0014348 @ 0x1C0014348 (sub_1C0014348.c)
 *     sub_1C006DDBC @ 0x1C006DDBC (sub_1C006DDBC.c)
 *     sub_1C006E0D8 @ 0x1C006E0D8 (sub_1C006E0D8.c)
 *     sub_1C0071664 @ 0x1C0071664 (sub_1C0071664.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_1C001175C(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        ULONG UserDataCount,
        struct _EVENT_DATA_DESCRIPTOR *a8)
{
  ULONGLONG v8; // rax
  unsigned __int16 *v9; // rdx
  EVENT_DESCRIPTOR v11; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)&v11.Id = *a2 << 24;
  *(_DWORD *)&v11.Level = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = (unsigned __int16 *)(a2 + 11);
  v11.Keyword = v8;
  a8->Ptr = (ULONGLONG)off_1C00930D0;
  a8->Size = *(unsigned __int16 *)off_1C00930D0;
  a8[1].Ptr = (ULONGLONG)v9;
  a8->Reserved = 2;
  a8[1].Size = *v9;
  a8[1].Reserved = 1;
  return EtwWriteEx(qword_1C00930E8, &v11, 0LL, 1u, 0LL, 0LL, UserDataCount, a8);
}
