/*
 * XREFs of BiZwDeleteValueKey @ 0x140374160
 * Callers:
 *     BiDeleteRegistryValue @ 0x140807544 (BiDeleteRegistryValue.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x14041CC90 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall BiZwDeleteValueKey(void *a1, UNICODE_STRING *a2)
{
  return ZwDeleteValueKey(a1, a2);
}
