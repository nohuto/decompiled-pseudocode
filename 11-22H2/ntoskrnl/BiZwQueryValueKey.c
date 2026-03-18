/*
 * XREFs of BiZwQueryValueKey @ 0x140374468
 * Callers:
 *     BiGetRegistryValue @ 0x1408079C4 (BiGetRegistryValue.c)
 * Callees:
 *     ZwQueryValueKey @ 0x14041A980 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall BiZwQueryValueKey(
        void *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        void *a4,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, Length, ResultLength);
}
