/*
 * XREFs of sub_1403A7800 @ 0x1403A7800
 * Callers:
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 * Callees:
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall sub_1403A7800(
        void *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        void *a4,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, Length, ResultLength);
}
