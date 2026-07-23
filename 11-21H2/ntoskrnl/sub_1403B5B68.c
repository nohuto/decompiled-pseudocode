/*
 * XREFs of sub_1403B5B68 @ 0x1403B5B68
 * Callers:
 *     sub_140807088 @ 0x140807088 (sub_140807088.c)
 *     sub_14081BF60 @ 0x14081BF60 (sub_14081BF60.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 */

NTSTATUS __fastcall sub_1403B5B68(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG a4,
        struct _EVENT_DATA_DESCRIPTOR *a5)
{
  return EtwWriteEx(qword_140C1C820, a2, 0LL, 0, 0LL, 0LL, a4, a5);
}
